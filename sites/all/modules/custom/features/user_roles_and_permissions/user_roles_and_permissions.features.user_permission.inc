<?php
/**
 * @file
 * user_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin node search exlusions'.
  $permissions['admin node search exlusions'] = array(
    'name' => 'admin node search exlusions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'administer @font-your-face'.
  $permissions['administer @font-your-face'] = array(
    'name' => 'administer @font-your-face',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fontyourface',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer delta'.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: 'administer delta blocks'.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer om maximenu'.
  $permissions['administer om maximenu'] = array(
    'name' => 'administer om maximenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'om_maximenu',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create banner_content content'.
  $permissions['create banner_content content'] = array(
    'name' => 'create banner_content content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog_entry content'.
  $permissions['create blog_entry content'] = array(
    'name' => 'create blog_entry content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq_item content'.
  $permissions['create faq_item content'] = array(
    'name' => 'create faq_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news_item content'.
  $permissions['create news_item content'] = array(
    'name' => 'create news_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create vacancy content'.
  $permissions['create vacancy content'] = array(
    'name' => 'create vacancy content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any banner_content content'.
  $permissions['delete any banner_content content'] = array(
    'name' => 'delete any banner_content content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog_entry content'.
  $permissions['delete any blog_entry content'] = array(
    'name' => 'delete any blog_entry content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq_item content'.
  $permissions['delete any faq_item content'] = array(
    'name' => 'delete any faq_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_item content'.
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vacancy content'.
  $permissions['delete any vacancy content'] = array(
    'name' => 'delete any vacancy content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own banner_content content'.
  $permissions['delete own banner_content content'] = array(
    'name' => 'delete own banner_content content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog_entry content'.
  $permissions['delete own blog_entry content'] = array(
    'name' => 'delete own blog_entry content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq_item content'.
  $permissions['delete own faq_item content'] = array(
    'name' => 'delete own faq_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_item content'.
  $permissions['delete own news_item content'] = array(
    'name' => 'delete own news_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vacancy content'.
  $permissions['delete own vacancy content'] = array(
    'name' => 'delete own vacancy content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in banner_section'.
  $permissions['delete terms in banner_section'] = array(
    'name' => 'delete terms in banner_section',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in department'.
  $permissions['delete terms in department'] = array(
    'name' => 'delete terms in department',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in faq_category'.
  $permissions['delete terms in faq_category'] = array(
    'name' => 'delete terms in faq_category',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in job_title'.
  $permissions['delete terms in job_title'] = array(
    'name' => 'delete terms in job_title',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_categories'.
  $permissions['delete terms in news_categories'] = array(
    'name' => 'delete terms in news_categories',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in video_section'.
  $permissions['delete terms in video_section'] = array(
    'name' => 'delete terms in video_section',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in video_type'.
  $permissions['delete terms in video_type'] = array(
    'name' => 'delete terms in video_type',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any banner_content content'.
  $permissions['edit any banner_content content'] = array(
    'name' => 'edit any banner_content content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog_entry content'.
  $permissions['edit any blog_entry content'] = array(
    'name' => 'edit any blog_entry content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq_item content'.
  $permissions['edit any faq_item content'] = array(
    'name' => 'edit any faq_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_item content'.
  $permissions['edit any news_item content'] = array(
    'name' => 'edit any news_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vacancy content'.
  $permissions['edit any vacancy content'] = array(
    'name' => 'edit any vacancy content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own banner_content content'.
  $permissions['edit own banner_content content'] = array(
    'name' => 'edit own banner_content content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog_entry content'.
  $permissions['edit own blog_entry content'] = array(
    'name' => 'edit own blog_entry content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own faq_item content'.
  $permissions['edit own faq_item content'] = array(
    'name' => 'edit own faq_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_item content'.
  $permissions['edit own news_item content'] = array(
    'name' => 'edit own news_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vacancy content'.
  $permissions['edit own vacancy content'] = array(
    'name' => 'edit own vacancy content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in banner_section'.
  $permissions['edit terms in banner_section'] = array(
    'name' => 'edit terms in banner_section',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in department'.
  $permissions['edit terms in department'] = array(
    'name' => 'edit terms in department',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in faq_category'.
  $permissions['edit terms in faq_category'] = array(
    'name' => 'edit terms in faq_category',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in job_title'.
  $permissions['edit terms in job_title'] = array(
    'name' => 'edit terms in job_title',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_categories'.
  $permissions['edit terms in news_categories'] = array(
    'name' => 'edit terms in news_categories',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in video_section'.
  $permissions['edit terms in video_section'] = array(
    'name' => 'edit terms in video_section',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in video_type'.
  $permissions['edit terms in video_type'] = array(
    'name' => 'edit terms in video_type',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search all content'.
  $permissions['search all content'] = array(
    'name' => 'search all content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search all excluded entities'.
  $permissions['search all excluded entities'] = array(
    'name' => 'search all excluded entities',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search banner_content content'.
  $permissions['search banner_content content'] = array(
    'name' => 'search banner_content content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search blog_entry content'.
  $permissions['search blog_entry content'] = array(
    'name' => 'search blog_entry content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'search faq_item content'.
  $permissions['search faq_item content'] = array(
    'name' => 'search faq_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search news_item content'.
  $permissions['search news_item content'] = array(
    'name' => 'search news_item content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search page content'.
  $permissions['search page content'] = array(
    'name' => 'search page content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search person content'.
  $permissions['search person content'] = array(
    'name' => 'search person content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search vacancy content'.
  $permissions['search vacancy content'] = array(
    'name' => 'search vacancy content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search video content'.
  $permissions['search video content'] = array(
    'name' => 'search video content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search webform content'.
  $permissions['search webform content'] = array(
    'name' => 'search webform content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'CMS Editor' => 'CMS Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'CMS Admin' => 'CMS Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
