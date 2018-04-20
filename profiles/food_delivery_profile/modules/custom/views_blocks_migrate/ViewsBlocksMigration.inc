<?php

/**
 * @file
 * ViewsBlocksMigration class.
 */

/**
 * Import Products into the "product" product type.
 */
class ViewsBlocksMigration extends Migration {

  function csvcolumns() {
    $columns[0] = array('bid', 'bid');
    $columns[1] = array('module', 'module');
    $columns[2] = array('delta', 'delta');
    $columns[3] = array('theme', 'theme');
    $columns[4] = array('status', 'status');
    $columns[5] = array('weight', 'weight');
    $columns[6] = array('region', 'region');
    $columns[7] = array('custom', 'custom');
    $columns[8] = array('visibility', 'visibility');
    $columns[9] = array('pages', 'pages');
    $columns[10] = array('title', 'title');
    $columns[11] = array('cache', 'cache');
    $columns[12] = array('css_class', 'css_class');
    return $columns;
  }

  public function __construct($arguments = array()) {
    parent::__construct($arguments);
    $this->description = t('Import Views Blocks from CSV file.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'bid' => array(
          'type' => 'int',
          'length' => 11,
          'not null' => TRUE,
          'description' => 'Block ID',
        ),
      ),
      MigrateDestinationTable::getKeySchema('block')
    );

    $csv_file = drupal_get_path('module', 'views_blocks_migrate') . '/views-blocks.csv';
    $this->source = new MigrateSourceCSV($csv_file, $this->csvcolumns());

    $this->destination = new MigrateDestinationTable('block');

    $this->addFieldMapping('module', 'module');
    $this->addFieldMapping('delta', 'delta');
    $this->addFieldMapping('theme', 'theme');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('region', 'region');
    $this->addFieldMapping('custom', 'custom');
    $this->addFieldMapping('visibility', 'visibility');
    $this->addFieldMapping('pages', 'pages');
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('cache', 'cache');
    $this->addFieldMapping('css_class', 'css_class');
    $this->addUnmigratedDestinations(array('bid'));
  }

}
