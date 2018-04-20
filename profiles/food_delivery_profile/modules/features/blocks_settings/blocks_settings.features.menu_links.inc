<?php
/**
 * @file
 * blocks_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function blocks_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_newsletters:admin/config/services/simplenews.
  $menu_links['management_newsletters:admin/config/services/simplenews'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/simplenews',
    'router_path' => 'admin/config/services/simplenews',
    'link_title' => 'Newsletters',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure your sites newsletters.',
      ),
      'identifier' => 'management_newsletters:admin/config/services/simplenews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: navigation_simplenews-newsletter:node/add/simplenews.
  $menu_links['navigation_simplenews-newsletter:node/add/simplenews'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/simplenews',
    'router_path' => 'node/add/simplenews',
    'link_title' => 'Simplenews newsletter',
    'options' => array(
      'attributes' => array(
        'title' => 'A newsletter issue to be sent to subscribed email addresses.',
      ),
      'identifier' => 'navigation_simplenews-newsletter:node/add/simplenews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Newsletters');
  t('Simplenews newsletter');

  return $menu_links;
}
