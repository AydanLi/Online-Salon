<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Food Delivery';

    $form['additional_settings'] = array(
      '#type' => 'fieldset',
      '#title' => st('Additional settings'),
      '#collapsible' => FALSE,
    );
    $form['additional_settings']['send_message'] = array(
      '#type' => 'checkbox',
      '#title' => 'Import products',
      '#description' => st('Import test kit products?'),
      '#default_value' => TRUE,
    );

    $form['#submit'][] = 'system_form_install_configure_form_custom_submit';
  }

  /**
   * Function system_form_install_configure_form_custom_submit().
   */
  function system_form_install_configure_form_custom_submit($form, &$form_state) {
    if ($form_state['values']['send_message']) {
      if (!module_exists('products_migrate')) {
        module_enable(array('products_migrate'), FALSE);
      }
    }
  }

}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'food_delivery_profile';
    }
  }

}

function food_delivery_profile_install_tasks($install_state) {
  $tasks = array();

  $tasks['food_delivery_profile_public_libraries_copy'] = array(
    'display' => FALSE,
  );
  $tasks['food_delivery_profile_revert_features_batch'] = array(
    'display_name' => 'Reverting features',
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'food_delivery_profile_revert_features_batch',
  );
  $tasks['commerce_products_import'] = array(
    'display_name' => 'Test Commerce Products Import',
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'food_delivery_profile_commerce_products_import',
  );
  $tasks['migrate_finish'] = array(
    'display_name' => 'Migrating views blocks and finish reverting.',
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'food_delivery_profile_final_migration',
  );
  return $tasks;
}

/**
 * Our custom task.
 * Copy libraries for default theme.
 *
 * @param array $install_state: An array of information about the current
 * installation state.
 * Implements hook_install_tasks_alter().
 */

function food_delivery_profile_public_libraries_copy($install_state) {
  $source = 'profiles/food_delivery_profile/libraries/';
  $res = 'sites/all/libraries/';
  food_delivery_profile_recurse_copy($source, $res);
  drupal_get_messages();
}

/**
 * Implements hook_install_tasks_alter().
 */
function food_delivery_profile_install_tasks_alter(&$tasks, $install_state) {
  foreach ($install_state as $state) {
    if ($state === 'install_bootstrap_full') {
      $source = 'profiles/food_delivery_profile/files/';
      $res = variable_get('file_public_path', conf_path() . '/files');
      food_delivery_profile_recurse_copy($source, $res);
      drupal_get_messages();
    };
  }
}

/**
 * Recursive copy.
 *
 * @param string $src.
 * - Source folder with files.
 * @param string $dst.
 * - Destination folder.
 */
function food_delivery_profile_recurse_copy($src, $dst) {
  $dir = opendir($src);
  @mkdir($dst);
  while (FALSE !== ($file = readdir($dir))) {
    if (($file != '.') && ($file != '..')) {
      if (is_dir($src . '/' . $file)) {
        food_delivery_profile_recurse_copy($src . '/' . $file, $dst . '/' . $file);
      }
      else {
        copy($src . '/' . $file, $dst . '/' . $file);
      }
    }
  }
  closedir($dir);
}

/**
  * Revert features.
  */
function food_delivery_profile_revert_features_batch() {
  variable_set('theme_default', 'deliveryfood');
  // List of features for reverting.
  $features_names = array(
    'basic_settings',
    'commerce_settings',
    'search_settings',
    'content_basic_pages',
    /* 'views_and_facets', */
    'details_view_future',
    'blocks_settings',
    'permissions',
  );

  $operations = array();
  foreach ($features_names as $feature_name) {
    $operations[] = array('features_revert_module', array($feature_name));
  }

  $batch = array(
    'title' => t('Reverting features'),
    'operations' => $operations,
  );

  return $batch;
}

/**
 * Import commerce products.
 */
function food_delivery_profile_commerce_products_import() {
  if (module_exists('products_migrate')) {
    // Revert content_products feature.
    features_revert_module('content_products');

    // Migrating commerce products.
    migrate_static_registration(array('CommerceProduct'));
    $migration = Migration::getInstance('CommerceProduct');
    $result = $migration->processImport();
    // Migrating product nodes.
    migrate_static_registration(array('NodeProduct'));
    $migration = Migration::getInstance('NodeProduct');
    $result = $migration->processImport();
    // Record tags in nodes.
    food_delivery_profile_record_tags();

    features_revert_module('content_products');
  }
}

/**
 * Final migration: migrate views blocks and additional reverting menu components.
 */
function food_delivery_profile_final_migration() {
  // Delete views blocks generated by Views.
  db_delete('block')->condition('module', 'views')->execute();
  // Add views blocks and their settings from CSV.
  migrate_static_registration(array('ViewsBlocks'));
  $migration = Migration::getInstance('ViewsBlocks');
  $result = $migration->processImport();

  // Additional reverting menu components.
  module_enable(array('menus_and_breadcrumbs'));
  features_revert_module('content_basic_pages');

  $features = array(
    'views_and_facets',
    'blocks_settings',
    'menus_and_breadcrumbs',
  );

  $operations = array();
  foreach ($features as $feature_name) {
    $operations[] = array('features_revert_module', array($feature_name));
  }

  $batch = array(
    'title' => t('Reverting features again'),
    'operations' => $operations,
  );

  return $batch;
}

/**
 * Custom function for record tags in nodes.
 */
function food_delivery_profile_record_tags() {
  $product_tags = array(
    array('7be7e83c-fe79-48e6-a2fb-8e535f41aae0', '6da07a93-649e-444e-b5d8-029bc621c41e'),
    array('7be7e83c-fe79-48e6-a2fb-8e535f41aae0', '9b6e7b1a-995d-4968-a93f-435676cb1b5d'),
    array('96f1e3a3-8fc2-463f-87c7-143c55dafbf9', '6da07a93-649e-444e-b5d8-029bc621c41e'),
    array('96f1e3a3-8fc2-463f-87c7-143c55dafbf9', '7b4b0545-54fb-40fa-acfe-b1062740c0dc'),
    array('96f1e3a3-8fc2-463f-87c7-143c55dafbf9', '73cfa0d3-94b5-496a-8672-918515653840'),
    array('2ceddc4a-a3d0-420a-b5c4-b315f3b72cc1', 'f5ecb005-dda7-4c02-9381-9741360c1130'),
    array('2ceddc4a-a3d0-420a-b5c4-b315f3b72cc1', 'd5273128-4ab0-43b7-b685-4ee7b0802d95'),
    array('9b1804f2-1599-4c29-9bd0-537b087c7316', 'f5ecb005-dda7-4c02-9381-9741360c1130'),
    array('9b1804f2-1599-4c29-9bd0-537b087c7316', 'd5273128-4ab0-43b7-b685-4ee7b0802d95'),
    array('d040e8d8-afe0-4ea2-bbea-9dae934c2e7a', '6da07a93-649e-444e-b5d8-029bc621c41e'),
    array('d040e8d8-afe0-4ea2-bbea-9dae934c2e7a', '7b4b0545-54fb-40fa-acfe-b1062740c0dc'),
    array('83e7217a-f6ba-46a6-89f4-aa06b869b2c1', '6da07a93-649e-444e-b5d8-029bc621c41e'),
    array('83e7217a-f6ba-46a6-89f4-aa06b869b2c1', '7b4b0545-54fb-40fa-acfe-b1062740c0dc'),
    array('8bdf4dc3-5e40-41f6-9f30-1ed4e70a5625', '6da07a93-649e-444e-b5d8-029bc621c41e'),
    array('8bdf4dc3-5e40-41f6-9f30-1ed4e70a5625', '7b4b0545-54fb-40fa-acfe-b1062740c0dc'),
    array('c2f65433-ef6e-4582-86c5-e3b333bf3ba4', 'f5ecb005-dda7-4c02-9381-9741360c1130'),
    array('c2f65433-ef6e-4582-86c5-e3b333bf3ba4', 'd5273128-4ab0-43b7-b685-4ee7b0802d95'),
    array('01ae38f4-43e4-4fc7-9708-29e0d36ef7d4', '6da07a93-649e-444e-b5d8-029bc621c41e'),
    array('01ae38f4-43e4-4fc7-9708-29e0d36ef7d4', '7b4b0545-54fb-40fa-acfe-b1062740c0dc'),
    array('23a36313-fc37-4ba6-8a77-7eb7d30ed818', '6da07a93-649e-444e-b5d8-029bc621c41e'),
    array('23a36313-fc37-4ba6-8a77-7eb7d30ed818', '7b4b0545-54fb-40fa-acfe-b1062740c0dc'),
  );

  foreach ($product_tags as $key => $value) {
    $category = db_select('taxonomy_term_data', 'n')
      ->condition('uuid', $value[0])
      ->fields('n', array('tid'))
      ->execute()
      ->fetchField();

    $tag = db_select('taxonomy_term_data', 'n')
      ->condition('uuid', $value[1])
      ->fields('n', array('tid'))
      ->execute()
      ->fetchField();

    $nid = db_select('field_data_field_product_categories', 'n')
      ->condition('field_product_categories_tid', $category)
      ->fields('n', array('entity_id'))
      ->execute()
      ->fetchField();

    $table_name = 'field_data_field_product_tags';
    $row = new stdClass();
    $row->entity_type = 'node';
    $row->bundle = 'product';
    $row->deleted = 0;
    $row->entity_id = $nid;
    $row->revision_id = $nid;
    $row->language = 'und';
    $row->delta = $key;
    $row->field_product_tags_tid = $tag;
    drupal_write_record($table_name, $row);
  }
}
