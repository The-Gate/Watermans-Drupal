<?php
/**
 * @file
 * menu_system.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function menu_system_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-featured-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-featured-menu',
    'module' => 'menu',
    'node_types' => array(),
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
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu-1',
    'module' => 'menu',
    'node_types' => array(),
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
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu-2',
    'module' => 'menu',
    'node_types' => array(),
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
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu-3',
    'module' => 'menu',
    'node_types' => array(),
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
        'weight' => -38,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu-4',
    'module' => 'menu',
    'node_types' => array(),
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
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
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
        'weight' => 0,
      ),
    ),
    'title' => 'Common Areas For Claims',
    'visibility' => 0,
  );

  $export['menu_block-10'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 10,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'how-claim/*',
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
        'weight' => -58,
      ),
    ),
    'title' => 'How To Claim',
    'visibility' => 1,
  );

  $export['menu_block-11'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 11,
    'module' => 'menu_block',
    'node_types' => array(),
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
        'region' => 'menu',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-12'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 12,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'total-care
total-care/*
total-care/*/*',
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
        'weight' => -69,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu_block-13'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 13,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'total-care
total-care/*
total-care/*/*',
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

  $export['menu_block-14'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 14,
    'module' => 'menu_block',
    'node_types' => array(),
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
        'region' => 'branding_first',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -42,
      ),
    ),
    'title' => 'Menu',
    'visibility' => 0,
  );

  $export['menu_block-15'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 15,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'contact-us/*',
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
        'weight' => -69,
      ),
    ),
    'title' => 'Start your claim by contacting us now',
    'visibility' => 1,
  );

  $export['menu_block-16'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 16,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'sitemap
not-found',
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
        'weight' => -52,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-17'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 17,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'sitemap
not-found',
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
        'weight' => -51,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-18'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 18,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'sitemap',
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
        'weight' => -50,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-19'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 19,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'sitemap
not-found',
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
        'weight' => -49,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
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
        'weight' => 0,
      ),
    ),
    'title' => 'Start Making a Claim',
    'visibility' => 0,
  );

  $export['menu_block-20'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 20,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'sitemap
not-found',
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
        'weight' => -48,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-21'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 21,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'sitemap
not-found',
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
        'weight' => -47,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-22'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 22,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'business-connect/*
business-connect/*/*',
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
        'weight' => -65,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu_block-23'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 23,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'total-care/during-aftercare
total-care/types-personal-injury',
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
    'title' => 'Total Care',
    'visibility' => 1,
  );

  $export['menu_block-24'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 24,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'types-accident
types-accident/*',
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
        'weight' => -72,
      ),
    ),
    'title' => 'Types of Accident',
    'visibility' => 1,
  );

  $export['menu_block-25'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 25,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'total-care/during-aftercare
total-care/types-injury',
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
        'weight' => 0,
      ),
    ),
    'title' => 'Meet the team',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'module' => 'menu_block',
    'node_types' => array(),
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
        'weight' => 0,
      ),
    ),
    'title' => 'Watermans Company Info',
    'visibility' => 0,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 4,
    'module' => 'menu_block',
    'node_types' => array(),
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
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => 0,
      ),
    ),
    'title' => ' Tel: 0303 0300 119',
    'visibility' => 0,
  );

  $export['menu_block-5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 5,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'news
news/*
about-watermans-accidents-claims-and-care
awards',
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
        'weight' => -73,
      ),
    ),
    'title' => 'In this section',
    'visibility' => 1,
  );

  $export['menu_block-6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 6,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'road-traffic-accidents
road-traffic-accidents/*',
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
        'weight' => -74,
      ),
    ),
    'title' => 'Road Traffic Accidents',
    'visibility' => 1,
  );

  $export['menu_block-8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 8,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'accidents-at-work
accidents-at-work/*
accidents-at-work/*/*',
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
        'weight' => -71,
      ),
    ),
    'title' => 'Accidents At Work',
    'visibility' => 1,
  );

  $export['menu_block-9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 9,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'slips-trips
slips-trips/*',
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
        'weight' => -70,
      ),
    ),
    'title' => 'Slips & Trip',
    'visibility' => 1,
  );

  $export['om_maximenu-om-maximenu-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'om-maximenu-1',
    'module' => 'om_maximenu',
    'node_types' => array(),
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
        'region' => 'menu',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
