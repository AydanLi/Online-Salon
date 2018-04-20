<?php
/**
 * @file
 * menus_and_breadcrumbs.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function menus_and_breadcrumbs_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'basic_pages';
  $path_breadcrumb->name = 'Basic Pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:title',
    ),
    'paths' => array(
      0 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['basic_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'cart';
  $path_breadcrumb->name = 'Cart';
  $path_breadcrumb->path = 'cart';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => 'cart',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['cart'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'catalog';
  $path_breadcrumb->name = 'Catalog';
  $path_breadcrumb->path = 'catalog/%page';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Categories',
      1 => '%page:parent',
      2 => '%page:name',
    ),
    'paths' => array(
      0 => 'catalog',
      1 => '<none>',
      2 => '%page:vocabulary:name',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'page' => array(
        'position' => 1,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'term',
          'vocabularies' => array(
            'products_categories' => 'products_categories',
            'newsletter' => 0,
            'tags' => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['catalog'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'catalog_path';
  $path_breadcrumb->name = 'Catalog';
  $path_breadcrumb->path = 'catalog';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => 'catalog',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -100;
  $export['catalog_path'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'chekout';
  $path_breadcrumb->name = 'Chekout';
  $path_breadcrumb->path = 'checkout/%checkout/%step';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Shopping Cart',
      1 => 'Chekout',
    ),
    'paths' => array(
      0 => 'cart',
      1 => 'checkout/%checkout:order-id/%checkout:state',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'checkout' => array(
        'position' => 1,
        'argument' => 'entity_id:commerce_order',
        'settings' => array(
          'identifier' => 'Commerce Order: ID',
        ),
      ),
      'step' => array(
        'position' => 2,
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['chekout'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'featured_products';
  $path_breadcrumb->name = 'Featured products';
  $path_breadcrumb->path = 'featured-products';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Categories',
      1 => 'Featured products',
    ),
    'paths' => array(
      0 => 'catalog',
      1 => 'featured-products',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -96;
  $export['featured_products'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'new_products';
  $path_breadcrumb->name = 'New products';
  $path_breadcrumb->path = 'new-products';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Categories',
      1 => 'New products',
    ),
    'paths' => array(
      0 => 'catalog',
      1 => 'new-products',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -97;
  $export['new_products'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'product';
  $path_breadcrumb->name = 'Product';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Categories',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'catalog',
      1 => '%node:nid',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['product'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'sale';
  $path_breadcrumb->name = 'Sale';
  $path_breadcrumb->path = 'sale';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Categories',
      1 => 'Sale',
    ),
    'paths' => array(
      0 => 'catalog',
      1 => 'sale',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -98;
  $export['sale'] = $path_breadcrumb;

  return $export;
}
