<?php
/**
 * @file
 * menus_and_breadcrumbs.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menus_and_breadcrumbs_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-special-offers.
  $menus['menu-footer-special-offers'] = array(
    'menu_name' => 'menu-footer-special-offers',
    'title' => 'Footer special offers',
    'description' => '',
  );
  // Exported menu: menu-special-offers.
  $menus['menu-special-offers'] = array(
    'menu_name' => 'menu-special-offers',
    'title' => 'Special Offers',
    'description' => '',
  );
  // Exported menu: menu-userful-links.
  $menus['menu-userful-links'] = array(
    'menu_name' => 'menu-userful-links',
    'title' => 'FAQ',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer special offers');
  t('Main menu');
  t('Special Offers');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('FAQ');

  return $menus;
}
