<?php
/**
 * @file
 * blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-cta_abuse'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'cta_abuse',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'abuse-criminal-injury-claims
abuse-criminal-injury-claims/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'watermans_2013_10' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
