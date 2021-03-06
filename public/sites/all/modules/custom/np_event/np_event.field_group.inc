<?php
/**
 * @file
 * np_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function np_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sources|node|event|default';
  $field_group->group_name = 'group_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sources',
    'weight' => '10',
    'children' => array(
      0 => 'field_sources',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sources',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sources|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_verification|node|event|default';
  $field_group->group_name = 'group_verification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Verification',
    'weight' => '7',
    'children' => array(
      0 => 'field_verification_narrative',
      1 => 'field_verification_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Verification',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_verification|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_what|node|event|default';
  $field_group->group_name = 'group_what';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What',
    'weight' => '13',
    'children' => array(
      0 => 'field_what_description',
      1 => 'field_what_never_empty',
      2 => 'field_what_posts',
      3 => 'field_what_v_narrative',
      4 => 'field_what_v_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_what|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_what|node|event|form';
  $field_group->group_name = 'group_what';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What Happened',
    'weight' => '21',
    'children' => array(
      0 => 'field_what_description',
      1 => 'field_what_posts',
      2 => 'field_what_v_narrative',
      3 => 'field_what_v_status',
      4 => 'field_where_never_empty',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'What Happened',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_what|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when|node|event|default';
  $field_group->group_name = 'group_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '11',
    'children' => array(
      0 => 'field_when_date',
      1 => 'field_when_never_empty',
      2 => 'field_when_posts',
      3 => 'field_when_v_narrative',
      4 => 'field_when_v_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'When',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_when|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when|node|event|form';
  $field_group->group_name = 'group_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '19',
    'children' => array(
      0 => 'field_when_date',
      1 => 'field_when_never_empty',
      2 => 'field_when_posts',
      3 => 'field_when_v_narrative',
      4 => 'field_when_v_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'When',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_when|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where|node|event|default';
  $field_group->group_name = 'group_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '12',
    'children' => array(
      0 => 'field_where_location',
      1 => 'field_where_never_empty',
      2 => 'field_where_posts',
      3 => 'field_where_v_narrative',
      4 => 'field_where_v_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Where',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_where|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where|node|event|form';
  $field_group->group_name = 'group_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '20',
    'children' => array(
      0 => 'field_what_never_empty',
      1 => 'field_where_location',
      2 => 'field_where_posts',
      3 => 'field_where_v_narrative',
      4 => 'field_where_v_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Where',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_where|node|event|form'] = $field_group;

  return $export;
}
