<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
function watermans_2013_10_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Adding the title of the current page to the breadcrumb.
    $breadcrumb[] = drupal_get_title();
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}

function watermans_2013_10_form_alter(&$form, $form_state, $form_id) {
  if ($form['#id'] == 'views-exposed-form-people-listing-page-1') {
    foreach ($form['tid']['#options'] as $key => &$option) {
      if ($key == 'All') {
        $option = 'Select Department';
      }
    }
  }
  if ($form['#id'] == 'views-exposed-form-news-listing-page-1') {
    foreach ($form['news-id']['#options'] as $key => &$option) {
      if ($key == 'All') {
        $option = 'Select Category';
      }
    }
  }
  if ($form['#id'] == 'views-exposed-form-faq-page-1') {
    foreach ($form['faqid']['#options'] as $key => &$option) {
      if ($key == 'All') {
        $option = 'Select Category';
      }
    }
  }
  if ($form_id == 'search_block_form') {
    $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/button-search.gif');
  }
}

/**
 * add IE conditional CSS 
 */
function watermans_2013_10_preprocess_html(&$vars) {
  // add IE only CSS
  drupal_add_css(path_to_theme() . '/css/ie-lte-9.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE), 'preprocess' => FALSE));
  IF (arg(1) == 21) {
    drupal_add_js(libraries_get_path('colorbox') . '/jquery.colorbox-min.js', array('group' => JS_THEME, 'every_page' => TRUE));
    drupal_add_css(libraries_get_path('colorbox') . '/example3/colorbox.css', array('group' => CSS_THEME, 'preprocess' => TRUE));
    drupal_add_js(path_to_theme() . '/js/how-to-claim.js', array('group' => JS_THEME, 'every_page' => TRUE));
  }
}

function watermans_2013_10_preprocess_page(&$vars) {
  // add css for PI calc
  if (isset($vars['node'])) {
    if ($vars['node']->nid == 16) {
//    drupal_add_js('http://code.jquery.com/jquery-1.9.1.js', 'external');
//    drupal_add_js('http://code.jquery.com/ui/1.10.3/jquery-ui.js', 'external');   
//    drupal_add_js(path_to_theme() . '/js/pi-calc.js');   
//    drupal_add_css('http://code.jquery.com/ui/1.10.3/themes/smoothness/jquery-ui.css', array('type' => 'external', 'group' => CSS_THEME, 'weight' => 300, 'preprocess' => FALSE));
//    drupal_add_css(path_to_theme() . '/css/pi-calc.css', array('group' => CSS_THEME, 'weight' => 301, 'preprocess' => FALSE));
    }
  }
}
