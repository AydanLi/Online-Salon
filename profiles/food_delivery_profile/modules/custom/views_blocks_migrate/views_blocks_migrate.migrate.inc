<?php

/**
 * @file
 * Migration description.
 */

/*
 * Implements hook_migrate_api().
 */
function views_blocks_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'views_blocks' => array(
        'title' => t('Import of Views Blocks'),
      ),
    ),
    'migrations' => array(
      'ViewsBlocks' => array(
        'class_name' => 'ViewsBlocksMigration',
        'group' => 'views_blocks',
      ),
    ),
  );

  return $api;
}