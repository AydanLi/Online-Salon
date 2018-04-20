<?php

/**
 * @file
 * Descriptions for migrations classes.
 */

/*
 * Implements hook_migrate_api().
 */
function products_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'products' => array(
        'title' => t('Import of Commerce products'),
      ),
    ),
    'migrations' => array(
      'CommerceProduct' => array(
        'class_name' => 'CommerceMigrateProductMigration',
        'group' => 'products',
      ),
      'NodeProduct' => array(
        'class_name' => 'NodeProductMigration',
        'group' => 'products',
      ),
    ),
  );

  return $api;
}
