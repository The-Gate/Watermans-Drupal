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
	if($form['#id'] == 'views-exposed-form-people-listing-page-1') {
		foreach ($form['tid']['#options'] as $key => &$option) {
			if ($key == 'All') {
				$option = 'Select Department';
			} 
		}
	}
	if($form['#id'] == 'views-exposed-form-news-listing-page-1') {
		foreach ($form['news-id']['#options'] as $key => &$option) {
			if ($key == 'All') {
				$option = 'Select Category';
			} 
		}
	}
	if($form['#id'] == 'views-exposed-form-faq-page-1') {
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