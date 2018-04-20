<?php
/**
 * @file
 * basic_settings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function basic_settings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_info|profile2|main|form';
  $field_group->group_name = 'group_name_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name information',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Name information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-name-info field-group-tabs',
      ),
    ),
  );
  $field_groups['group_name_info|profile2|main|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Name information');

  return $field_groups;
}
