<?php

/**
 * @file
 * CommerceMigrateProductMigration class.
 */

/**
 * A simple base class that contains things common to all
 * CommerceMigrateExample classes.
 */
abstract class CommerceMigrateMigration extends Migration {

  public function __construct($arguments = array()) {
    // Always call the parent constructor first for basic setup.
    parent::__construct($arguments);
  }

  /**
   * Provide the names of the incoming CSV file columns.
   */
  function csvcolumns() {
    $columns[0] = array('SKU', 'SKU');
    $columns[1] = array('Status', 'Status');
    $columns[2] = array('Title', 'Title');
    $columns[3] = array('Image', 'Image');
    $columns[4] = array('Price', 'Price');
    $columns[5] = array('Sale price', 'Sale price');
    $columns[6] = array('On sale', 'On sale');
    $columns[7] = array('Type', 'Type');
    return $columns;
  }

}

/**
 * Import Products into the "product" commerce product type.
 */
class CommerceMigrateProductMigration extends CommerceMigrateMigration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments);
    $this->description = t('Import products from CSV file (with no header).');

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        // The 'SKU' field in the CSV file is the key.
        'SKU' => array(
          'type' => 'varchar',
          'length' => 24,
          'not null' => TRUE,
          'description' => 'SKU',
        ),
      ),
      // Rather than specifying the type directly here, we would probably use
      // arguments, but instead this just specifies the 'product' product type
      // to make it obvious what's going on.
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'product')
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $csv_file = drupal_get_path('module', 'products_migrate') . '/products.csv';
    $this->source = new MigrateSourceCSV($csv_file, $this->csvcolumns());

    // Again here we're hardwiring the product type to 'product'.
    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'product');

    $this->addFieldMapping('sku', 'SKU');
    $this->addFieldMapping('status', 'Status');
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('field_commerce_image', 'Image');
    $this->addFieldMapping('field_commerce_image:source_dir')->defaultValue('sites/default/files/products');
    $this->addFieldMapping('commerce_price', 'Price');
    $this->addFieldMapping('field_commerce_saleprice', 'Sale price');
    $this->addFieldMapping('field_commerce_saleprice_on_sale', 'On sale');
    $this->addFieldMapping('type', 'Type');
  }

}
