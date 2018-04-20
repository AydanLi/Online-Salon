<?php
/**
 * @file
 * views_and_facets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_and_facets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_and_facets_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_gd_infinite_scroll_settings_info().
 */
function views_and_facets_gd_infinite_scroll_settings_info() {
  $items = array(
    'scroll_catalog' => array(
      'pager_selector' => 'div.item-list-pager',
      'next_selector' => 'li.pager-next a',
      'content_selector' => '.view-catalog .view-content',
      'items_selector' => '.views-row:not(.views-row .views-row)',
      'load_more' => 1,
      'load_more_markup' => '<button class="button button-fill-green load-more">MORE</button>',
      'ajax_pager' => 0,
      'database_override' => TRUE,
      'url' => 'catalog
catalog/*',
    ),
    'scroll_product_pages' => array(
      'pager_selector' => 'div.item-list-pager',
      'next_selector' => 'li.pager-next a:first',
      'content_selector' => '.view-products-pages .view-content',
      'items_selector' => '.views-row:not(.views-row .views-row)',
      'load_more' => 1,
      'load_more_markup' => '<button class="button button-fill-green load-more">MORE</button>',
      'ajax_pager' => 0,
      'database_override' => TRUE,
      'url' => 'featured-products
new-products
sale',
    ),
  );

  return $items;
}