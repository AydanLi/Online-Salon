<?php
/**
 * @file
 * blocks_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function blocks_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-about_banner'] = array(
    'cache' => -1,
    'css_class' => 'page-banner about-page',
    'custom' => 0,
    'machine_name' => 'about_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'about-company',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-about_facts'] = array(
    'cache' => -1,
    'css_class' => 'about-facts about-page',
    'custom' => 0,
    'machine_name' => 'about_facts',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'about-company',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-about_our_team'] = array(
    'cache' => -1,
    'css_class' => 'our-team about-page',
    'custom' => 0,
    'machine_name' => 'about_our_team',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'about-company',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-block_mobile_banner'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'block_mobile_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'slider',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-cart_banner'] = array(
    'cache' => -1,
    'css_class' => 'shopping-cart-page page-banner',
    'custom' => 0,
    'machine_name' => 'cart_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'cart',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-catalog_banner'] = array(
    'cache' => -1,
    'css_class' => 'page-banner catalog-page',
    'custom' => 0,
    'machine_name' => 'catalog_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'catalog
catalog/*',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-contact_banner'] = array(
    'cache' => -1,
    'css_class' => 'contact-us-page page-banner',
    'custom' => 0,
    'machine_name' => 'contact_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact-us',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-contact_info'] = array(
    'cache' => -1,
    'css_class' => 'contact-us-page info-blocks',
    'custom' => 0,
    'machine_name' => 'contact_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact-us',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'How to get in touch with us?',
    'visibility' => 1,
  );

  $export['block-copyright_info'] = array(
    'cache' => -1,
    'css_class' => 'menu__copyright',
    'custom' => 0,
    'machine_name' => 'copyright_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'copyright_info',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-copyright_map'] = array(
    'cache' => -1,
    'css_class' => 'map contact-us-page',
    'custom' => 0,
    'machine_name' => 'copyright_map',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact-us',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'map',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-discovery_banner'] = array(
    'cache' => -1,
    'css_class' => '.banner-catalog-1',
    'custom' => 0,
    'machine_name' => 'discovery_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-featured_products_banner'] = array(
    'cache' => -1,
    'css_class' => 'page-banner catalog-page',
    'custom' => 0,
    'machine_name' => 'featured_products_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'featured-products',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-footer_first_column'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'footer_first_column',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'footer_firstcolumn',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-how_it_works_banner'] = array(
    'cache' => -1,
    'css_class' => 'page-banner how-it-works-page',
    'custom' => 0,
    'machine_name' => 'how_it_works_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'how-it-works',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-how_it_works_contact'] = array(
    'cache' => -1,
    'css_class' => 'contact-us-banner how-it-works-page',
    'custom' => 0,
    'machine_name' => 'how_it_works_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'how-it-works
how-it-works-2',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -40,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-how_it_works_steps'] = array(
    'cache' => -1,
    'css_class' => 'how-it-works steps-block',
    'custom' => 0,
    'machine_name' => 'how_it_works_steps',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'how-it-works
how-it-works-2',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -41,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-new_products_banner'] = array(
    'cache' => -1,
    'css_class' => 'page-banner catalog-page',
    'custom' => 0,
    'machine_name' => 'new_products_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'new-products',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-sale_banner'] = array(
    'cache' => -1,
    'css_class' => 'page-banner catalog-page',
    'custom' => 0,
    'machine_name' => 'sale_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'sale',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-sidebar_banner_tablet'] = array(
    'cache' => -1,
    'css_class' => 'best-deals-banners sidebar-banner ',
    'custom' => 0,
    'machine_name' => 'sidebar_banner_tablet',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'catalog
catalog/*
new-products
featured-products
sale',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content_aside',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-sopping_cart_footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'sopping_cart_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'cart',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-steps_of_checkout'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'steps_of_checkout',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'checkout/*/checkout
checkout/*/shipping
checkout/*/review',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_banner'] = array(
    'cache' => -1,
    'css_class' => 'page-banner typography-page',
    'custom' => 0,
    'machine_name' => 'typography_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'page_banner',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_blockquote'] = array(
    'cache' => -1,
    'css_class' => 'blockquote-example typograhy-page',
    'custom' => 0,
    'machine_name' => 'typography_blockquote',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_breadcrumbs'] = array(
    'cache' => -1,
    'css_class' => 'breadcrumbs-example typography-page',
    'custom' => 0,
    'machine_name' => 'typography_breadcrumbs',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_buttons'] = array(
    'cache' => -1,
    'css_class' => 'buttons-example typography-page',
    'custom' => 0,
    'machine_name' => 'typography_buttons',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_h1'] = array(
    'cache' => -1,
    'css_class' => 'h1-heading',
    'custom' => 0,
    'machine_name' => 'typography_h1',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -38,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_h2'] = array(
    'cache' => -1,
    'css_class' => 'h2-heading',
    'custom' => 0,
    'machine_name' => 'typography_h2',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_h3'] = array(
    'cache' => -1,
    'css_class' => 'h3-heading',
    'custom' => 0,
    'machine_name' => 'typography_h3',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_highlights'] = array(
    'cache' => -1,
    'css_class' => 'highlights-example typography-page',
    'custom' => 0,
    'machine_name' => 'typography_highlights',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_lists'] = array(
    'cache' => -1,
    'css_class' => 'typography-page lists-block',
    'custom' => 0,
    'machine_name' => 'typography_lists',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-typography_tables'] = array(
    'cache' => -1,
    'css_class' => 'tables-example typography-page',
    'custom' => 0,
    'machine_name' => 'typography_tables',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'typography',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['boxes-boxes_add__simple'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'boxes_add__simple',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cart',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'checkout*',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-devel'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'editor',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['current_search-standard'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'standard',
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-front_banner_1'] = array(
    'cache' => -1,
    'css_class' => 'best-deals-banners home-banner',
    'custom' => 0,
    'machine_name' => 'front_banner_1',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -45,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-front_banner_2'] = array(
    'cache' => -1,
    'css_class' => 'best-deals-banners home-banner',
    'custom' => 0,
    'machine_name' => 'front_banner_2',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -44,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-sidebar_banner'] = array(
    'cache' => -1,
    'css_class' => 'best-deals-banners sidebar-banner',
    'custom' => 0,
    'machine_name' => 'sidebar_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'catalog
catalog/*
new-products
featured-products
sale',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-trlD3W12QP8U9RNa6DQX0DW8hbibQBsg'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'trlD3W12QP8U9RNa6DQX0DW8hbibQBsg',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'catalog
catalog/*
new-products
featured-products
sale',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Price',
    'visibility' => 1,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-special-offers'] = array(
    'cache' => -1,
    'css_class' => 'footer-menu',
    'custom' => 0,
    'delta' => 'menu-footer-special-offers',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'footer_thirdcolumn',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Special offers',
    'visibility' => 0,
  );

  $export['menu-menu-special-offers'] = array(
    'cache' => -1,
    'css_class' => 'special-offers-menu',
    'custom' => 0,
    'delta' => 'menu-special-offers',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>
catalog
catalog/*
new-products
featured-products
sale',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu-menu-userful-links'] = array(
    'cache' => -1,
    'css_class' => 'footer-menu',
    'custom' => 0,
    'delta' => 'menu-userful-links',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'footer_fourthcolumn',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search-sorts',
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['simplenews-0'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 0,
    'module' => 'simplenews',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['simplenews-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'simplenews',
    'node_types' => array(),
    'pages' => '<front>
catalog
catalog/*
about-company',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'subscribe',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Subscribe to our newsletter!',
    'visibility' => 1,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => 'footer-menu',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'footer_secondcolumn',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Navigation',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'deliveryfood',
        'weight' => 7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['webform-client-block-7'] = array(
    'cache' => -1,
    'css_class' => 'contact-us-page contact-form',
    'custom' => 0,
    'delta' => 'client-block-7',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'contact-us',
    'roles' => array(),
    'themes' => array(
      'deliveryfood' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'deliveryfood',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
