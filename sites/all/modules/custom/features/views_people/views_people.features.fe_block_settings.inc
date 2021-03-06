<?php
/**
 * @file
 * views_people.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function views_people_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-team_home_banner'] = array(
    'cache' => -1,
    'css_class' => 'cta c-4',
    'custom' => 0,
    'machine_name' => 'team_home_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team',
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
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -59,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-team_home_cta1'] = array(
    'cache' => -1,
    'css_class' => 'cta c-1',
    'custom' => 0,
    'machine_name' => 'team_home_cta1',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team',
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
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -58,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-team_home_cta2'] = array(
    'cache' => -1,
    'css_class' => 'cta c-2',
    'custom' => 0,
    'machine_name' => 'team_home_cta2',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team',
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
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -57,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-team_home_cta3'] = array(
    'cache' => -1,
    'css_class' => 'cta c-3',
    'custom' => 0,
    'machine_name' => 'team_home_cta3',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team',
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
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -56,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-team_listing_edinburgh'] = array(
    'cache' => -1,
    'css_class' => 'cta c-1',
    'custom' => 0,
    'machine_name' => 'team_listing_edinburgh',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team/*/*
the-watermans-team/scott-whyte',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -66,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-team_listing_firm'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'team_listing_firm',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team/*/*',
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
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -57,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-team_listing_glasgow'] = array(
    'cache' => -1,
    'css_class' => 'cta c-1',
    'custom' => 0,
    'machine_name' => 'team_listing_glasgow',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team/*/*
the-watermans-team/scott-whyte',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -65,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-team_listing_management'] = array(
    'cache' => -1,
    'css_class' => 'cta c-1',
    'custom' => 0,
    'machine_name' => 'team_listing_management',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'the-watermans-team/*/*
the-watermans-team/scott-whyte',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -67,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['cck_blocks-field_image'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'field_image',
    'module' => 'cck_blocks',
    'node_types' => array(
      0 => 'person',
    ),
    'pages' => '',
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
        'region' => 'menu_sub',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -73,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['cck_blocks-field_job_title'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'field_job_title',
    'module' => 'cck_blocks',
    'node_types' => array(
      0 => 'person',
    ),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -64,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['cck_blocks-field_thumbnail'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'field_thumbnail',
    'module' => 'cck_blocks',
    'node_types' => array(
      0 => 'person',
    ),
    'pages' => '',
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
        'region' => 'menu_sub',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -74,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['multiblock-1'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'multiblock',
    'node_types' => array(
      0 => 'person',
    ),
    'pages' => '',
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
        'region' => 'menu_sub',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -75,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-client_testimonials-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'client_testimonials-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'person',
    ),
    'pages' => '',
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
        'weight' => -42,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-people_listing-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'people_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'the-watermans-team',
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
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -54,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-people_listing-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'people_listing-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'the-watermans-team/edinburgh',
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
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -51,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-people_listing-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'people_listing-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'the-watermans-team/glasgow',
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
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -49,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-people_listing-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'people_listing-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'the-watermans-team/firm-management',
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
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -50,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-person_contact-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'person_contact-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'person',
    ),
    'pages' => '',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -68,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
