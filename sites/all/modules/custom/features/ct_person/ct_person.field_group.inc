<?php
/**
 * @file
 * ct_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_person_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_contact|node|person|default';
  $field_group->group_name = 'group_person_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '12',
    'children' => array(
      0 => 'field_link',
      1 => 'field_email',
      2 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'group-person-contact field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_person_full_group_person_contact',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_person_contact|node|person|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');

  return $field_groups;
}
