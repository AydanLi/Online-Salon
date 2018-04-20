<?php
/**
 * @file
 * search_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function search_settings_default_search_api_index() {
  $items = array();
  $items['product_index'] = entity_import('search_api_index', '{
    "name" : "Product index",
    "machine_name" : "product_index",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "product" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_product" : { "type" : "integer", "entity_type" : "commerce_product" },
        "field_product:commerce_price:amount_decimal" : { "type" : "decimal" },
        "field_product:field_commerce_saleprice_on_sale" : { "type" : "boolean" },
        "field_product_categories" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_product_categories:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_product_categories:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_product_featured" : { "type" : "boolean" },
        "field_product_special_offer" : { "type" : "boolean" },
        "field_product_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_product_tags:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_product_tags:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "nid" : { "type" : "integer" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 1, "weight" : "-50", "settings" : { "fields" : [] } },
        "commerce_search_api_product_display_filter" : { "status" : 1, "weight" : "-10", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "commerce_search_api_alter_product_status" : { "status" : 1, "weight" : "-9", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Product search",
                "type" : "fulltext",
                "fields" : [ "title" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_product_categories:parents_all" : "field_product_categories:parents_all" } }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function search_settings_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "Database server",
    "machine_name" : "database_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "product_index" : {
          "nid" : {
            "table" : "search_api_db_product_index",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_product_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_product_index",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_product_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_product_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_product" : {
            "table" : "search_api_db_product_index",
            "column" : "field_product",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_product_featured" : {
            "table" : "search_api_db_product_index",
            "column" : "field_product_featured",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_product_special_offer" : {
            "table" : "search_api_db_product_index",
            "column" : "field_product_special_offer",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_product_tags" : {
            "table" : "search_api_db_product_index_field_product_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_product_categories" : {
            "table" : "search_api_db_product_index_field_product_categories",
            "column" : "field_product_categories",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_product_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_product:field_commerce_saleprice_on_sale" : {
            "table" : "search_api_db_product_index",
            "column" : "field_product_field_commerce_saleprice_on_sale",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_product:commerce_price:amount_decimal" : {
            "table" : "search_api_db_product_index",
            "column" : "field_product_commerce_price_amount_decimal",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_product_categories:parent" : {
            "table" : "search_api_db_product_index_field_product_categories_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_product_categories:name" : {
            "table" : "search_api_db_product_index_field_product_categories_name",
            "column" : "field_product_categories_name",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_product_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_product_tags:name" : {
            "table" : "search_api_db_product_index_field_product_tags_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_product_tags:tid" : {
            "table" : "search_api_db_product_index_field_product_tags_tid",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}