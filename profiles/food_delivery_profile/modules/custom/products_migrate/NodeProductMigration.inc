<?php

/**
 * @file
 * NodeProductMigration class.
 */

/**
 * Import product nodes.
 */
class NodeProductMigration extends Migration {

  function csvcolumns() {
    $columns[0] = array('nid', 'nid');
    $columns[1] = array('title', 'title');
    $columns[2] = array('status', 'status');
    $columns[3] = array('body', 'body');
    $columns[4] = array('field_product', 'field_product');
    $columns[5] = array('field_product_featured', 'field_product_featured');
    $columns[6] = array('field_product_of_the_day', 'field_product_of_the_day');
    $columns[7] = array('field_product_special_offer', 'field_product_special_offer');
    $columns[8] = array('uuid', 'uuid');
    $columns[9] = array('field_product_categories', 'field_product_categories');
    $columns[10] = array('field_product_tags', 'field_product_tags');
    $columns[11] = array('field_weight', 'field_weight');

    return $columns;
  }

  public function __construct($arguments = array()) {
    parent::__construct($arguments);
    $this->description = t('Import product nodes from CSV.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'length' => 14,
          'not null' => TRUE,
          'description' => 'Node ID',
        ),
      ),
      MigrateDestinationNode::getKeySchema('product')
    );

    $csv_file = drupal_get_path('module', 'products_migrate') . '/product-nodes.csv';
    $this->source = new MigrateSourceCSV($csv_file, $this->csvcolumns());

    $this->destination = new MigrateDestinationNode('product');

    $this->addUnmigratedDestinations(array(
      'nid', 'sticky', 'created', 'changed', 'revision', 'log', 'language', 'tnid', 'translate',
      'revision_uid', 'is_new', 'body:format', 'body:summary', 'path', 'comment',
    ));
    $this->addUnmigratedSources(array(
      'uuid', 'field_product_categories', 'field_product', 'field_product_tags'
    ), t('Do Not Migrate'));

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_product', 'field_product');
    $this->addFieldMapping('field_product_featured', 'field_product_featured');
    $this->addFieldMapping('field_product_of_the_day', 'field_product_of_the_day');
    $this->addFieldMapping('field_product_special_offer', 'field_product_special_offer');
    $this->addFieldMapping('field_product_categories', 'field_product_categories')->callbacks(array($this, 'getProductTid'));
    $this->addFieldMapping('field_product_categories:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_product_categories:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_product_categories:ignore_case')->defaultValue(TRUE);
    $this->addFieldMapping('field_product_tags', 'field_product_tags')->callbacks(array($this, 'getProductTid'));
    $this->addFieldMapping('field_product_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_product_tags:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_product_tags:ignore_case')->defaultValue(TRUE);
    $this->addFieldMapping('field_weight','field_weight');
    $this->addFieldMapping('field_weight:unit')->defaultValue('kg');
  }

  protected function getProductTid($value) {
    $result = db_select('taxonomy_term_data', 'n')
      ->condition('uuid', $value)
      ->fields('n', array('tid'))
      ->execute()
      ->fetchField();
    return $result;
  }

}
