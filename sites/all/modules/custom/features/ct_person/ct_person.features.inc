<?php
/**
 * @file
 * ct_person.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_person_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ct_person_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Person\'s Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
