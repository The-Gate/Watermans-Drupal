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

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
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
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'watermans_2013_10' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-breadcrumb'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'breadcrumb',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => 'total-care
sports-ambassadors
business-connect
how-claim
the-watermans-team
the-watermans-team/*',
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
        'weight' => -75,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-logo'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'logo',
    'module' => 'delta_blocks',
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
        'weight' => -41,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-page-title'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'page-title',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '<front>
news
the-watermans-team
the-watermans-team/*
total-care
ask-question
contact-us
careers
sports-ambassadors
sports-ambassadors/*
business-connect
how-claim',
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
        'weight' => -74,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
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
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-26'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 26,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'node/276
node/276/*
abuse-criminal-injury-claims
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -69,
      ),
    ),
    'title' => 'Abuse Claims',
    'visibility' => 1,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
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
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'watermans_2013_10' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
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
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'watermans_2013_10' => array(
        'region' => 'branding_second',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
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
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'watermans_2013_10' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'watermans_2013_10' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -72,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
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
        'weight' => -36,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
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
        'weight' => -35,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
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
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'watermans_2013_10' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -33,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
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
        'weight' => -26,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'watermans_2013_10' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
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
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'watermans_2013_10' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'watermans_2013_10',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-faq-page_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-faq-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'frequently-asked-questions
frequently-asked-questions/*',
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
        'weight' => -60,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-news_listing-page_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-news_listing-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news
news/*',
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
        'weight' => -59,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-people_listing-page_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-people_listing-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'the-watermans-team
the-watermans-team/department',
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
    'visibility' => 1,
  );

  $export['views--exp-videos-page_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-videos-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'personal-injury-video-testimonials
personal-injury-video-testimonials/*
personal-injury-video-testimonials/*/*',
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
        'weight' => -57,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-banner-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'banner-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => -60,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-banner-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'banner-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'total-care',
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
        'weight' => -67,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-banner-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'banner-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors',
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
        'weight' => -53,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-banner-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'banner-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'business-connect',
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
        'weight' => -44,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-banner_single-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'banner_single-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => -73,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-banner_single-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'banner_single-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'how-claim',
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
        'weight' => -43,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-blog_listing-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blog_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'postscript_fourth',
        'status' => 1,
        'theme' => 'watermans_2013_10',
        'weight' => -17,
      ),
    ),
    'title' => 'Keep up to date with Watermans',
    'visibility' => 1,
  );

  $export['views-faq-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'faq-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'frequently-asked-questions',
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
        'weight' => -66,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-news_listing-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
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
        'weight' => -71,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_listing-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
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
        'weight' => -70,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_listing-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/lewis-benson',
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

  $export['views-news_listing-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/lewis-benson',
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
    'title' => 'More Lewis Benson News',
    'visibility' => 1,
  );

  $export['views-news_listing-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/hannah-miley',
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

  $export['views-news_listing-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/hannah-miley',
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
    'title' => 'More Hanna Miley News',
    'visibility' => 1,
  );

  $export['views-news_listing-block_6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/john-maccrone',
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

  $export['views-news_listing-block_7'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/john-maccrone',
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
    'title' => 'More John MacCrone News',
    'visibility' => 1,
  );

  $export['views-news_listing-block_8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/glasgow-city-fc',
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
        'weight' => -46,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_listing-block_9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_listing-block_9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sports-ambassadors/glasgow-city-fc',
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
        'weight' => -45,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-vacancies-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vacancies-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'careers',
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
        'weight' => -68,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-videos-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'videos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'personal-injury-video-testimonials/*',
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
        'weight' => -63,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-videos-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'videos-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'personal-injury-video-testimonials',
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
        'weight' => -58,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['webform-client-block-48'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'client-block-48',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'careers/*',
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
        'weight' => -65,
      ),
    ),
    'title' => 'Apply for this position',
    'visibility' => 1,
  );

  return $export;
}
