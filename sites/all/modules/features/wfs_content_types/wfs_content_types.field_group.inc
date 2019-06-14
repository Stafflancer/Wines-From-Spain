<?php

/**
 * @file
 * wfs_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wfs_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_disclaimer_note|node|winery|form';
  $field_group->group_name = 'group_disclaimer_note';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'winery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Disclaimer note',
    'weight' => '6',
    'children' => array(
      0 => 'field_text',
      1 => 'field_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-disclaimer-note field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_disclaimer_note|node|winery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|node|winery|form';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'winery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Left side',
    'weight' => '41',
    'children' => array(
      0 => 'field_image',
      1 => 'field_importers_contacts',
      2 => 'field_winery_contact',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_left_side|node|winery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|paragraphs_item|2_blocks_section|form';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_blocks_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Left side',
    'weight' => '3',
    'children' => array(
      0 => 'field_text',
      1 => 'field_image',
      2 => 'field_link',
      3 => 'field_share',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_left_side|paragraphs_item|2_blocks_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_tabs|node|winery|form';
  $field_group->group_name = 'group_main_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'winery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main tabs',
    'weight' => '6',
    'children' => array(
      0 => 'group_left_side',
      1 => 'group_right_side',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_tabs|node|winery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_tabs|paragraphs_item|2_blocks_section|form';
  $field_group->group_name = 'group_main_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_blocks_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main tabs',
    'weight' => '3',
    'children' => array(
      0 => 'group_left_side',
      1 => 'group_right_side',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_tabs|paragraphs_item|2_blocks_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|node|winery|form';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'winery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Right side',
    'weight' => '42',
    'children' => array(
      0 => 'field_brands_section',
      1 => 'field_logo',
      2 => 'field_presentation',
      3 => 'field_do',
      4 => 'group_disclaimer_note',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_right_side|node|winery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|paragraphs_item|2_blocks_section|form';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_blocks_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_tabs';
  $field_group->data = array(
    'label' => 'Right side',
    'weight' => '5',
    'children' => array(
      0 => 'field_text_2',
      1 => 'field_link_2',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-side field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_right_side|paragraphs_item|2_blocks_section|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Disclaimer note');
  t('Left side');
  t('Main tabs');
  t('Right side');

  return $field_groups;
}
