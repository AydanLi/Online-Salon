<?php
/**
 * @file
 * blocks_settings.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function blocks_settings_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Food Delivery newsletter',
    'description' => 'Food Delivery newsletter categories.',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7b464a26-fee5-4a15-94b5-2fefe243e17c',
    'vocabulary_machine_name' => 'newsletter',
  );
  return $terms;
}
