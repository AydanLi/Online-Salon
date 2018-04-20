<?php
/**
 * @file
 * menus_and_breadcrumbs.features.menu_links.inc
 */

/**
 * Get NID by UUID.
 */
function _get_normal_path_for_uuid($uuid) {
  $nid = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('n.uuid', $uuid, '=')
    ->execute()
    ->fetchField();
  return 'node/' . $nid;
}

/**
 * Implements hook_menu_default_menu_links().
 */
function menus_and_breadcrumbs_menu_default_menu_links() {
  $menu_links = array();

  $about_link = _get_normal_path_for_uuid('bf4d394d-a15c-4d4a-9c25-d8b7567208b3');
  $contact_link = _get_normal_path_for_uuid('03bd6a67-5ff3-4f18-bd63-d4a9dfeba10b');
  $typography_link = _get_normal_path_for_uuid('79e96810-3754-42de-a5f8-fdc6df593928');
  $how_it_works_link = _get_normal_path_for_uuid('e661ba77-6147-4622-8d67-61b24a4ed41f');

  // Exported menu link: main-menu_how-it-works.
  $menu_links['main-menu_how-it-works:' . $how_it_works_link] = array(
    'menu_name' => 'main-menu',
    'link_path' => $how_it_works_link,
    'router_path' => '',
    'link_title' => 'How it works',
    'options' => array(
      'identifier' => 'main-menu_how-it-works:' . $how_it_works_link,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );

  // Exported menu link: main-menu_about-company.
  $menu_links['main-menu_about-company:' . $about_link] = array(
    'menu_name' => 'main-menu',
    'link_path' => $about_link,
    'router_path' => '',
    'link_title' => 'About company',
    'options' => array(
      'identifier' => 'main-menu_about-company:' . $about_link,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us.
  $menu_links['main-menu_contact-us:' . $contact_link] = array(
    'menu_name' => 'main-menu',
    'link_path' => $contact_link,
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:' . $contact_link,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_shopping-cart:cart.
  $menu_links['main-menu_shopping-cart:cart'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'cart',
    'router_path' => 'cart',
    'link_title' => 'Shopping cart',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shopping-cart:cart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: main-menu_typography.
  $menu_links['main-menu_typography' . $typography_link] = array(
    'menu_name' => 'main-menu',
    'link_path' => $typography_link,
    'router_path' => '',
    'link_title' => 'Typography',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_typography:' . $typography_link,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 18,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-special-offers_featured-products:featured-products.
  $menu_links['menu-footer-special-offers_featured-products:featured-products'] = array(
    'menu_name' => 'menu-footer-special-offers',
    'link_path' => 'featured-products',
    'router_path' => 'featured-products',
    'link_title' => 'Featured products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-special-offers_featured-products:featured-products',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-special-offers_new-products:new-products.
  $menu_links['menu-footer-special-offers_new-products:new-products'] = array(
    'menu_name' => 'menu-footer-special-offers',
    'link_path' => 'new-products',
    'router_path' => 'new-products',
    'link_title' => 'New products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-special-offers_new-products:new-products',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-special-offers_sale:sale.
  $menu_links['menu-footer-special-offers_sale:sale'] = array(
    'menu_name' => 'menu-footer-special-offers',
    'link_path' => 'sale',
    'router_path' => 'sale',
    'link_title' => 'Sale',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-special-offers_sale:sale',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-special-offers_featured-products:<front>.
  $menu_links['menu-special-offers_featured-products:<front>'] = array(
    'menu_name' => 'menu-special-offers',
    'link_path' => 'featured-products',
    'router_path' => '',
    'link_title' => 'Featured products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-special-offers_featured-products:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-special-offers_new-products:<front>.
  $menu_links['menu-special-offers_new-products:<front>'] = array(
    'menu_name' => 'menu-special-offers',
    'link_path' => 'new-products',
    'router_path' => '',
    'link_title' => 'New products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-special-offers_new-products:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-special-offers_sale:<front>.
  $menu_links['menu-special-offers_sale:<front>'] = array(
    'menu_name' => 'menu-special-offers',
    'link_path' => 'sale',
    'router_path' => '',
    'link_title' => 'Sale',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-special-offers_sale:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-userful-links_frequently-asked-questions:node/17.
  $menu_links['menu-userful-links_frequently-asked-questions:node/17'] = array(
    'menu_name' => 'menu-userful-links',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Frequently asked questions',
    'options' => array(
      'identifier' => 'menu-userful-links_frequently-asked-questions:node/17',
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-userful-links_how-to-buy:node/17.
  $menu_links['menu-userful-links_how-to-buy:node/17'] = array(
    'menu_name' => 'menu-userful-links',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'How to buy',
    'options' => array(
      'identifier' => 'menu-userful-links_how-to-buy:node/17',
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'how-to-buy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-userful-links_payments:node/17.
  $menu_links['menu-userful-links_payments:node/17'] = array(
    'menu_name' => 'menu-userful-links',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Payments',
    'options' => array(
      'identifier' => 'menu-userful-links_payments:node/17',
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'payments',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-userful-links_policy:node/17.
  $menu_links['menu-userful-links_policy:node/17'] = array(
    'menu_name' => 'menu-userful-links',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Policy',
    'options' => array(
      'identifier' => 'menu-userful-links_policy:node/17',
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-userful-links_transport-and-deliveries:node/17.
  $menu_links['menu-userful-links_transport-and-deliveries:node/17'] = array(
    'menu_name' => 'menu-userful-links',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Transport and Deliveries',
    'options' => array(
      'identifier' => 'menu-userful-links_transport-and-deliveries:node/17',
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'transport-and-deliveries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About company');
  t('Contact Us');
  t('Featured products');
  t('Frequently asked questions');
  t('Home');
  t('How to buy');
  t('New products');
  t('Payments');
  t('Policy');
  t('Sale');
  t('Shopping cart');
  t('Transport and Deliveries');
  t('Typography');

  return $menu_links;
}
