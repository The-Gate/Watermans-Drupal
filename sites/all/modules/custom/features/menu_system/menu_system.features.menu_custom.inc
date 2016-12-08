<?php
/**
 * @file
 * menu_system.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_system_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-featured-menu.
  $menus['menu-featured-menu'] = array(
    'menu_name' => 'menu-featured-menu',
    'title' => 'Featured Menu',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-1.
  $menus['menu-footer-menu-1'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'title' => 'Footer Menu 1',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-2.
  $menus['menu-footer-menu-2'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'title' => 'Footer Menu 2',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-3.
  $menus['menu-footer-menu-3'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'title' => 'Footer Menu 3',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-4.
  $menus['menu-footer-menu-4'] = array(
    'menu_name' => 'menu-footer-menu-4',
    'title' => 'Footer Menu 4',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Menu');
  t('Footer Menu 1');
  t('Footer Menu 2');
  t('Footer Menu 3');
  t('Footer Menu 4');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
