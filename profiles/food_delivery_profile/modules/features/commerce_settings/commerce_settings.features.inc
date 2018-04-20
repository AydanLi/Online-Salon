<?php
/**
 * @file
 * commerce_settings.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function commerce_settings_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function commerce_settings_commerce_flat_rate_default_services() {
  $items = array(
    'shipping' => array(
      'name' => 'shipping',
      'base' => 'shipping',
      'display_title' => 'Shipping',
      'description' => 'A flat rate sercise with express delivery available.',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_shipping',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'shipping_details_form',
        'details_form_validate' => 'shipping_details_form_validate',
        'details_form_submit' => 'shipping_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Shipping',
      'base_rate' => array(
        'amount' => 199,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_default_commerce_discount().
 */
function commerce_settings_default_commerce_discount() {
  $items = array();
  $items['discount_discount_of_berry'] = entity_import('commerce_discount', '{
    "name" : "discount_discount_of_berry",
    "label" : "discount of  berry",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "50.00" } ] },
      "rdf_mapping" : []
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "any" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_contains_products",
          "condition_settings" : { "sku" : [ { "product_id" : "40" } ], "condition_logic_operator" : null },
          "condition_negate" : 0
        },
        {
          "condition_name" : "commerce_product_contains_products",
          "condition_settings" : { "sku" : [ { "product_id" : "34" } ] },
          "condition_negate" : 0,
          "condition_logic_operator" : "0"
        },
        {
          "condition_name" : "commerce_product_contains_products",
          "condition_settings" : { "sku" : [ { "product_id" : "20" } ] },
          "condition_negate" : 0,
          "condition_logic_operator" : "0"
        },
        {
          "condition_name" : "commerce_product_contains_products",
          "condition_settings" : { "sku" : [ { "product_id" : "41" } ] },
          "condition_negate" : 0,
          "condition_logic_operator" : "0"
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : [],
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function commerce_settings_commerce_tax_default_types() {
  $items = array(
    'discount_prices' => array(
      'name' => 'discount_prices',
      'display_title' => 'Discount',
      'description' => '',
      'display_inclusive' => 1,
      'round_mode' => 0,
      'rule' => 'commerce_tax_type_discount_prices',
      'module' => 'commerce_tax_ui',
      'title' => 'Discount prices',
      'admin_list' => TRUE,
    ),
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Sales tax',
      'description' => 'A basic type for taxes that do not display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 0,
      'rule' => 'commerce_tax_type_sales_tax',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales tax',
      'admin_list' => TRUE,
    ),
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 1,
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}