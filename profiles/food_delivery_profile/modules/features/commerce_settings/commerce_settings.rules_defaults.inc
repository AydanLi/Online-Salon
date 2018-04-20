<?php
/**
 * @file
 * commerce_settings.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_settings_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_paypal_wpp'] = entity_import('rules_config', '{ "commerce_payment_paypal_wpp" : {
      "LABEL" : "PayPal WPP - Credit Card",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_wpp" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "paypal_wpp"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_paypal_wps'] = entity_import('rules_config', '{ "commerce_payment_paypal_wps" : {
      "LABEL" : "PayPal WPS",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "test@test.test",
                  "currency_code" : "USD",
                  "allow_supported_currencies" : 1,
                  "language" : "US",
                  "server" : "sandbox",
                  "payment_action" : "sale",
                  "ipn_logging" : "notification",
                  "receiver_emails" : "",
                  "ipn_create_billing_profile" : 0,
                  "show_payment_instructions" : 1
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_shipping'] = entity_import('rules_config', '{ "commerce_shipping_service_shipping" : {
      "LABEL" : "Rate Shipping",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "shipping",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_vat_taxes'] = entity_import('rules_config', '{ "commerce_tax_rate_vat_taxes" : {
      "LABEL" : "Calculate SALE taxes",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "sales_tax" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "vat_taxes"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  $items['commerce_cart_add_to_cart_message'] = entity_import('rules_config', '{ "commerce_cart_add_to_cart_message" : {
    "LABEL" : "Display an Add to Cart message",
    "PLUGIN" : "reaction rule",
    "ACTIVE" : false,
    "OWNER" : "rules",
    "TAGS" : [ "Commerce Cart" ],
    "REQUIRES" : [ "commerce_cart" ],
    "ON" : { "commerce_cart_product_add" : [] },
    "DO" : [
      { "commerce_cart_add_to_cart_message" : { "commerce_product" : [ "commerce-product" ] } }
    ]
   }
  }');
  $items['rules_commerce_saleprice_rule'] = entity_import('rules_config', '{ "rules_commerce_saleprice_rule" : {
      "LABEL" : "Sale price",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_product_reference" ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "DO" : [
        { "component_rules_commerce_saleprice_component" : { "line_item" : [ "commerce-line-item" ] } }
      ]
    }
  }');

  return $items;
}
