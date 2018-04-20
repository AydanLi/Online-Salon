<?php
/**
 * @file
 * basic_settings.features.inc
 */

/**
 * Implements hook_default_colorized_gmap().
 */
function basic_settings_default_colorized_gmap() {
  $items = array();
  $items['colorized_gmap_1485764495'] = entity_import('colorized_gmap', '{
    "name" : "colorized_gmap_1485764495",
    "created" : "1485765200",
    "changed" : "1517076632",
    "uid" : "1",
    "latitude" : "48.853358000000",
    "longitude" : "2.348903000000",
    "additional_settings" : {
      "controls" : {
        "min_drag_width" : "0",
        "streetViewControl" : 0,
        "panControl" : 0,
        "mapTypeControl" : 0
      },
      "controls_position" : { "streetViewControl" : "1", "panControl" : "1", "mapTypeControl" : "3" },
      "marker_settings" : {
        "marker" : { "fid" : "24", "url" : "\\/sites\\/default\\/files\\/pin_2.png" },
        "markertitle" : "Destination",
        "info_window" : { "value" : "", "format" : "gmap" }
      },
      "zoom_control_settings" : {
        "zoom" : "15",
        "zoomControl" : 1,
        "scrollwheel" : 0,
        "zoomControlSize" : "2",
        "zoomControlPosition" : "10"
      }
    },
    "style" : {
      "1" : {
        "featureType" : "water",
        "elementType" : "all",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "2" : {
        "featureType" : "landscape",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#f0f0ef" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "3" : {
        "featureType" : "poi",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#d3d3d3" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "4" : {
        "featureType" : "administrative",
        "elementType" : "all",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "5" : {
        "featureType" : "transit",
        "elementType" : "all",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "6" : {
        "featureType" : "poi",
        "elementType" : "labels",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      }
    },
    "block_settings" : {
      "region" : { "deliveryfood" : "map", "seven" : -1 },
      "custom" : "0",
      "visibility" : "1",
      "pages" : "contact-us",
      "title" : "Map_color"
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function basic_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function basic_settings_image_default_styles() {
  $styles = array();

  // Exported image style: 140x140.
  $styles['140x140'] = array(
    'label' => '140x140',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 170x125.
  $styles['170x125'] = array(
    'label' => '170x125',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 170x170.
  $styles['170x170'] = array(
    'label' => '100x74',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 74,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 265_195.
  $styles['265_195'] = array(
    'label' => '265х195',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 265,
          'height' => 195,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 370x370.
  $styles['370x370'] = array(
    'label' => '370x370',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 370,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function basic_settings_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
