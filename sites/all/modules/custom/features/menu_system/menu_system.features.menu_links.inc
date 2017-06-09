<?php
/**
 * @file
 * menu_system.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_system_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_aberdeen:node/43.
  $menu_links['main-menu_aberdeen:node/43'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Aberdeen',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_aberdeen:node/43',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/178',
  );
  // Exported menu link: main-menu_about-business-connect:node/204.
  $menu_links['main-menu_about-business-connect:node/204'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/204',
    'router_path' => 'node/%',
    'link_title' => 'About Business Connect',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_about-business-connect:node/204',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_business-connect:node/202',
  );
  // Exported menu link: main-menu_accidents-at-school:node/69.
  $menu_links['main-menu_accidents-at-school:node/69'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/69',
    'router_path' => 'node/%',
    'link_title' => 'Accidents at School',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_accidents-at-school:node/69',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
    'parent_identifier' => 'main-menu_slips--trips:node/15',
  );
  // Exported menu link: main-menu_accidents-at-work:node/14.
  $menu_links['main-menu_accidents-at-work:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Accidents at Work',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_accidents-at-work:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_types-of-accident:node/247',
  );
  // Exported menu link: main-menu_accidents-from-height:node/59.
  $menu_links['main-menu_accidents-from-height:node/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Accidents From Height',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_accidents-from-height:node/59',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_ankle-injuries:node/88.
  $menu_links['main-menu_ankle-injuries:node/88'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/88',
    'router_path' => 'node/%',
    'link_title' => 'Ankle Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_ankle-injuries:node/88',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_arm-injuries:node/148.
  $menu_links['main-menu_arm-injuries:node/148'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/148',
    'router_path' => 'node/%',
    'link_title' => 'Arm Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_arm-injuries:node/148',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_bike-accidents:node/25.
  $menu_links['main-menu_bike-accidents:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Bike Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_bike-accidents:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_blog:http://www.watermans.co.uk/blog.
  $menu_links['main-menu_blog:http://www.watermans.co.uk/blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.watermans.co.uk/blog',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_blog:http://www.watermans.co.uk/blog',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_brain-injuries:node/82.
  $menu_links['main-menu_brain-injuries:node/82'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/82',
    'router_path' => 'node/%',
    'link_title' => 'Brain Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_brain-injuries:node/82',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_broken-leg:node/87.
  $menu_links['main-menu_broken-leg:node/87'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/87',
    'router_path' => 'node/%',
    'link_title' => 'Broken Leg',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_broken-leg:node/87',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_bus-accidents:node/56.
  $menu_links['main-menu_bus-accidents:node/56'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Bus Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_bus-accidents:node/56',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_business-connect:node/202.
  $menu_links['main-menu_business-connect:node/202'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/202',
    'router_path' => 'node/%',
    'link_title' => 'Business Connect',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_business-connect:node/202',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_car-accidents:node/22.
  $menu_links['main-menu_car-accidents:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Car Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_car-accidents:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_claiming-for-a-child:node/166.
  $menu_links['main-menu_claiming-for-a-child:node/166'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/166',
    'router_path' => 'node/%',
    'link_title' => 'Claiming For A Child',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_claiming-for-a-child:node/166',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_how-to-claim:node/21',
  );
  // Exported menu link: main-menu_claiming-for-someone-else:node/164.
  $menu_links['main-menu_claiming-for-someone-else:node/164'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/164',
    'router_path' => 'node/%',
    'link_title' => 'Claiming For Someone Else',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_claiming-for-someone-else:node/164',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_how-to-claim:node/21',
  );
  // Exported menu link: main-menu_claims-against-the-council:node/67.
  $menu_links['main-menu_claims-against-the-council:node/67'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/67',
    'router_path' => 'node/%',
    'link_title' => 'Claims Against The Council',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_claims-against-the-council:node/67',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
    'parent_identifier' => 'main-menu_slips--trips:node/15',
  );
  // Exported menu link: main-menu_claims-for-loss-of-earnings:node/167.
  $menu_links['main-menu_claims-for-loss-of-earnings:node/167'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/167',
    'router_path' => 'node/%',
    'link_title' => 'Claims For Loss Of Earnings',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_claims-for-loss-of-earnings:node/167',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_how-to-claim:node/21',
  );
  // Exported menu link: main-menu_cognitive-behavioural-therapy-cbt:node/98.
  $menu_links['main-menu_cognitive-behavioural-therapy-cbt:node/98'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/98',
    'router_path' => 'node/%',
    'link_title' => 'Cognitive Behavioural Therapy (CBT)',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_cognitive-behavioural-therapy-cbt:node/98',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_confidence-video-results-menu-position-rule:menu-position/9.
  $menu_links['main-menu_confidence-video-results-menu-position-rule:menu-position/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/9',
    'router_path' => 'menu-position/%',
    'link_title' => 'Confidence Video results (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_confidence-video-results-menu-position-rule:menu-position/9',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_testimonials:node/19',
  );
  // Exported menu link: main-menu_construction-site-accidents:node/27.
  $menu_links['main-menu_construction-site-accidents:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Construction Site Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_construction-site-accidents:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_contact-us:node/178.
  $menu_links['main-menu_contact-us:node/178'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/178',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_contact-us:node/178',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_counselling:node/96.
  $menu_links['main-menu_counselling:node/96'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/96',
    'router_path' => 'node/%',
    'link_title' => 'Counselling',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_counselling:node/96',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_deafness:node/89.
  $menu_links['main-menu_deafness:node/89'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/89',
    'router_path' => 'node/%',
    'link_title' => 'Deafness',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_deafness:node/89',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_dog-bite-compensation:node/70.
  $menu_links['main-menu_dog-bite-compensation:node/70'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/70',
    'router_path' => 'node/%',
    'link_title' => 'Dog Bite Compensation',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_dog-bite-compensation:node/70',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
    'parent_identifier' => 'main-menu_slips--trips:node/15',
  );
  // Exported menu link: main-menu_dundee:node/108.
  $menu_links['main-menu_dundee:node/108'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/108',
    'router_path' => 'node/%',
    'link_title' => 'Dundee',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_dundee:node/108',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/178',
  );
  // Exported menu link: main-menu_during--aftercare:node/41.
  $menu_links['main-menu_during--aftercare:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'During & Aftercare',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_during--aftercare:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_total-care:node/36',
  );
  // Exported menu link: main-menu_edinburgh:node/106.
  $menu_links['main-menu_edinburgh:node/106'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/106',
    'router_path' => 'node/%',
    'link_title' => 'Edinburgh',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_edinburgh:node/106',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/178',
  );
  // Exported menu link: main-menu_edinburgh:node/262.
  $menu_links['main-menu_edinburgh:node/262'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/262',
    'router_path' => 'node/%',
    'link_title' => 'Edinburgh',
    'options' => array(
      'identifier' => 'main-menu_edinburgh:node/262',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-team:node/17',
  );
  // Exported menu link: main-menu_electrical-accidents:node/100.
  $menu_links['main-menu_electrical-accidents:node/100'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/100',
    'router_path' => 'node/%',
    'link_title' => 'Electrical Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_electrical-accidents:node/100',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_construction-site-accidents:node/27',
  );
  // Exported menu link: main-menu_equipment-accidents:node/103.
  $menu_links['main-menu_equipment-accidents:node/103'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/103',
    'router_path' => 'node/%',
    'link_title' => 'Equipment Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_equipment-accidents:node/103',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_factory-accidents:node/57.
  $menu_links['main-menu_factory-accidents:node/57'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/57',
    'router_path' => 'node/%',
    'link_title' => 'Factory Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_factory-accidents:node/57',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_falls:node/104.
  $menu_links['main-menu_falls:node/104'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'Falls',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_falls:node/104',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_faq-menu-position-rule:menu-position/6.
  $menu_links['main-menu_faq-menu-position-rule:menu-position/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/6',
    'router_path' => 'menu-position/%',
    'link_title' => 'FAQ (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_faq-menu-position-rule:menu-position/6',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_faq:node/18',
  );
  // Exported menu link: main-menu_faq-search-results-menu-position-rule:menu-position/7.
  $menu_links['main-menu_faq-search-results-menu-position-rule:menu-position/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/7',
    'router_path' => 'menu-position/%',
    'link_title' => 'FAQ Search results (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_faq-search-results-menu-position-rule:menu-position/7',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_faq:node/18',
  );
  // Exported menu link: main-menu_faq:node/18.
  $menu_links['main-menu_faq:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_faq:node/18',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_fatal-accidents:node/50.
  $menu_links['main-menu_fatal-accidents:node/50'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Fatal Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_fatal-accidents:node/50',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_firm-management:node/264.
  $menu_links['main-menu_firm-management:node/264'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/264',
    'router_path' => 'node/%',
    'link_title' => 'Firm Management',
    'options' => array(
      'identifier' => 'main-menu_firm-management:node/264',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-team:node/17',
  );
  // Exported menu link: main-menu_fork-lift-truck-accidents:node/58.
  $menu_links['main-menu_fork-lift-truck-accidents:node/58'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Fork Lift Truck Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_fork-lift-truck-accidents:node/58',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_glasgow:node/107.
  $menu_links['main-menu_glasgow:node/107'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/107',
    'router_path' => 'node/%',
    'link_title' => 'Glasgow',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_glasgow:node/107',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/178',
  );
  // Exported menu link: main-menu_glasgow:node/263.
  $menu_links['main-menu_glasgow:node/263'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/263',
    'router_path' => 'node/%',
    'link_title' => 'Glasgow',
    'options' => array(
      'identifier' => 'main-menu_glasgow:node/263',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-team:node/17',
  );
  // Exported menu link: main-menu_gordon-andersons-story---accident-at-work:node/129.
  $menu_links['main-menu_gordon-andersons-story---accident-at-work:node/129'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/129',
    'router_path' => 'node/%',
    'link_title' => 'Gordon Anderson\'s story - accident at work',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_gordon-andersons-story---accident-at-work:node/129',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_testimonials:node/19',
  );
  // Exported menu link: main-menu_hand-injuries:node/86.
  $menu_links['main-menu_hand-injuries:node/86'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/86',
    'router_path' => 'node/%',
    'link_title' => 'Hand Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_hand-injuries:node/86',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_head-injuries:node/39.
  $menu_links['main-menu_head-injuries:node/39'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Head Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_head-injuries:node/39',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_hit--run-accidents:node/53.
  $menu_links['main-menu_hit--run-accidents:node/53'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'Hit & Run Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_hit--run-accidents:node/53',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_how-to-claim:node/21.
  $menu_links['main-menu_how-to-claim:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'How To Claim',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_how-to-claim:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_injury-calculator:node/16.
  $menu_links['main-menu_injury-calculator:node/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Injury Calculator',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_injury-calculator:node/16',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_inverness:node/110.
  $menu_links['main-menu_inverness:node/110'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/110',
    'router_path' => 'node/%',
    'link_title' => 'Inverness',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_inverness:node/110',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/178',
  );
  // Exported menu link: main-menu_ladder-accidents:node/60.
  $menu_links['main-menu_ladder-accidents:node/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Ladder Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_ladder-accidents:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_motorcycle-accidents:node/24.
  $menu_links['main-menu_motorcycle-accidents:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Motorcycle Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_motorcycle-accidents:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_mywatermans-login:https://my.watermans.ws.
  $menu_links['main-menu_mywatermans-login:https://my.watermans.ws'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://my.watermans.ws',
    'router_path' => '',
    'link_title' => 'MyWatermans Login',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'identifier' => 'main-menu_mywatermans-login:https://my.watermans.ws',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_office-accidents:node/63.
  $menu_links['main-menu_office-accidents:node/63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Office Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_office-accidents:node/63',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_oil-industry-accidents:node/105.
  $menu_links['main-menu_oil-industry-accidents:node/105'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/105',
    'router_path' => 'node/%',
    'link_title' => 'Oil Industry Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_oil-industry-accidents:node/105',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_osteopathy:node/95.
  $menu_links['main-menu_osteopathy:node/95'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/95',
    'router_path' => 'node/%',
    'link_title' => 'Osteopathy',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_osteopathy:node/95',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_our-team:node/17.
  $menu_links['main-menu_our-team:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Our Team',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'main-menu_our-team:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_pavement-defects:node/26.
  $menu_links['main-menu_pavement-defects:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Pavement Defects',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_pavement-defects:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_slips--trips:node/15',
  );
  // Exported menu link: main-menu_pedestrian-accidents:node/52.
  $menu_links['main-menu_pedestrian-accidents:node/52'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/52',
    'router_path' => 'node/%',
    'link_title' => 'Pedestrian Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_pedestrian-accidents:node/52',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_person-page-menu-position-rule:menu-position/5.
  $menu_links['main-menu_person-page-menu-position-rule:menu-position/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/5',
    'router_path' => 'menu-position/%',
    'link_title' => 'Person Page (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_person-page-menu-position-rule:menu-position/5',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-team:node/17',
  );
  // Exported menu link: main-menu_personal-injury-calculator:node/16.
  $menu_links['main-menu_personal-injury-calculator:node/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Personal injury calculator',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_personal-injury-calculator:node/16',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_personal-injury-solicitors-scotland:node/168.
  $menu_links['main-menu_personal-injury-solicitors-scotland:node/168'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/168',
    'router_path' => 'node/%',
    'link_title' => 'Personal Injury Solicitors Scotland',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_personal-injury-solicitors-scotland:node/168',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/178',
  );
  // Exported menu link: main-menu_physiotherapy:node/94.
  $menu_links['main-menu_physiotherapy:node/94'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/94',
    'router_path' => 'node/%',
    'link_title' => 'Physiotherapy',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_physiotherapy:node/94',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_playground-accident:node/68.
  $menu_links['main-menu_playground-accident:node/68'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/68',
    'router_path' => 'node/%',
    'link_title' => 'Playground Accident',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_playground-accident:node/68',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
    'parent_identifier' => 'main-menu_slips--trips:node/15',
  );
  // Exported menu link: main-menu_post-traumatic-stress-disorder-treatment-ptsd:node/97.
  $menu_links['main-menu_post-traumatic-stress-disorder-treatment-ptsd:node/97'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/97',
    'router_path' => 'node/%',
    'link_title' => 'Post Traumatic Stress Disorder Treatment (PTSD)',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_post-traumatic-stress-disorder-treatment-ptsd:node/97',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_potholes:node/66.
  $menu_links['main-menu_potholes:node/66'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/66',
    'router_path' => 'node/%',
    'link_title' => 'Potholes',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_potholes:node/66',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_slips--trips:node/15',
  );
  // Exported menu link: main-menu_private-surgery:node/93.
  $menu_links['main-menu_private-surgery:node/93'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/93',
    'router_path' => 'node/%',
    'link_title' => 'Private Surgery',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_private-surgery:node/93',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_psychological-therapy:node/99.
  $menu_links['main-menu_psychological-therapy:node/99'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/99',
    'router_path' => 'node/%',
    'link_title' => 'Psychological Therapy',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_psychological-therapy:node/99',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_rehabilitation:node/92.
  $menu_links['main-menu_rehabilitation:node/92'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/92',
    'router_path' => 'node/%',
    'link_title' => 'Rehabilitation',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_rehabilitation:node/92',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_during--aftercare:node/41',
  );
  // Exported menu link: main-menu_repetitive-strain-injury-rsi:node/62.
  $menu_links['main-menu_repetitive-strain-injury-rsi:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Repetitive Strain Injury (RSI)',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_repetitive-strain-injury-rsi:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_road-defects:node/64.
  $menu_links['main-menu_road-defects:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Road Defects',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_road-defects:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_slips--trips:node/15',
  );
  // Exported menu link: main-menu_road-traffic-accidents:node/13.
  $menu_links['main-menu_road-traffic-accidents:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Road Traffic Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_road-traffic-accidents:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_types-of-accident:node/247',
  );
  // Exported menu link: main-menu_scaffolding-accidents:node/101.
  $menu_links['main-menu_scaffolding-accidents:node/101'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/101',
    'router_path' => 'node/%',
    'link_title' => 'Scaffolding Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_scaffolding-accidents:node/101',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_construction-site-accidents:node/27',
  );
  // Exported menu link: main-menu_shoulder-injuries:node/85.
  $menu_links['main-menu_shoulder-injuries:node/85'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/85',
    'router_path' => 'node/%',
    'link_title' => 'Shoulder Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_shoulder-injuries:node/85',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_slips--trips:node/15.
  $menu_links['main-menu_slips--trips:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Slips & Trips',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_slips--trips:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_types-of-accident:node/247',
  );
  // Exported menu link: main-menu_spinal-injuries:node/84.
  $menu_links['main-menu_spinal-injuries:node/84'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/84',
    'router_path' => 'node/%',
    'link_title' => 'Spinal Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_spinal-injuries:node/84',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_stirling:node/109.
  $menu_links['main-menu_stirling:node/109'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/109',
    'router_path' => 'node/%',
    'link_title' => 'Stirling',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_stirling:node/109',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/178',
  );
  // Exported menu link: main-menu_taxi-accidents:node/55.
  $menu_links['main-menu_taxi-accidents:node/55'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Taxi Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_taxi-accidents:node/55',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_testimonials:node/19.
  $menu_links['main-menu_testimonials:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Testimonials',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'main-menu_testimonials:node/19',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_total-care:node/36.
  $menu_links['main-menu_total-care:node/36'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Total Care',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_total-care:node/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_types-of-accident:node/247.
  $menu_links['main-menu_types-of-accident:node/247'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/247',
    'router_path' => 'node/%',
    'link_title' => 'Types of Accident',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_types-of-accident:node/247',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_types-of-injury:node/38.
  $menu_links['main-menu_types-of-injury:node/38'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Types Of injury',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_types-of-injury:node/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_total-care:node/36',
  );
  // Exported menu link: main-menu_uninsured-drivers:node/54.
  $menu_links['main-menu_uninsured-drivers:node/54'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/54',
    'router_path' => 'node/%',
    'link_title' => 'Uninsured Drivers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_uninsured-drivers:node/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_vibration-white-finger:node/61.
  $menu_links['main-menu_vibration-white-finger:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Vibration White Finger',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_vibration-white-finger:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
    'parent_identifier' => 'main-menu_accidents-at-work:node/14',
  );
  // Exported menu link: main-menu_welding-accidents:node/102.
  $menu_links['main-menu_welding-accidents:node/102'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/102',
    'router_path' => 'node/%',
    'link_title' => 'Welding Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_welding-accidents:node/102',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_construction-site-accidents:node/27',
  );
  // Exported menu link: main-menu_what-can-you-claim-for:node/128.
  $menu_links['main-menu_what-can-you-claim-for:node/128'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/128',
    'router_path' => 'node/%',
    'link_title' => 'What Can You Claim For',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_what-can-you-claim-for:node/128',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 0,
    'parent_identifier' => 'main-menu_how-to-claim:node/21',
  );
  // Exported menu link: main-menu_what-is-watermans-total-care:node/144.
  $menu_links['main-menu_what-is-watermans-total-care:node/144'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/144',
    'router_path' => 'node/%',
    'link_title' => 'What is Watermans Total Care?',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_what-is-watermans-total-care:node/144',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_total-care:node/36',
  );
  // Exported menu link: main-menu_whiplash-injuries:node/83.
  $menu_links['main-menu_whiplash-injuries:node/83'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/83',
    'router_path' => 'node/%',
    'link_title' => 'Whiplash Injuries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_whiplash-injuries:node/83',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: main-menu_whiplash-injury:node/23.
  $menu_links['main-menu_whiplash-injury:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Whiplash Injury',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_whiplash-injury:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_road-traffic-accidents:node/13',
  );
  // Exported menu link: main-menu_wrongful-death:node/91.
  $menu_links['main-menu_wrongful-death:node/91'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/91',
    'router_path' => 'node/%',
    'link_title' => 'Wrongful Death',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_wrongful-death:node/91',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 0,
    'parent_identifier' => 'main-menu_types-of-injury:node/38',
  );
  // Exported menu link: menu-footer-menu-1_accidents-at-work:node/14.
  $menu_links['menu-footer-menu-1_accidents-at-work:node/14'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Accidents At Work',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_accidents-at-work:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_road-traffic-accidents:node/13.
  $menu_links['menu-footer-menu-1_road-traffic-accidents:node/13'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Road Traffic Accidents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_road-traffic-accidents:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_slips--trips:node/15.
  $menu_links['menu-footer-menu-1_slips--trips:node/15'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Slips & Trips',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_slips--trips:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-2_how-to-claim:node/21.
  $menu_links['menu-footer-menu-2_how-to-claim:node/21'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'How To Claim',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-2_how-to-claim:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-2_injury-calculator:node/16.
  $menu_links['menu-footer-menu-2_injury-calculator:node/16'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Injury Calculator',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-2_injury-calculator:node/16',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-3_about-watermans:node/10.
  $menu_links['menu-footer-menu-3_about-watermans:node/10'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'About Watermans',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-3_about-watermans:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-3_careers:node/48.
  $menu_links['menu-footer-menu-3_careers:node/48'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-3_careers:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-3_hannah-miley:node/200.
  $menu_links['menu-footer-menu-3_hannah-miley:node/200'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'node/200',
    'router_path' => 'node/%',
    'link_title' => 'Hannah Miley',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-3_hannah-miley:node/200',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu-3_sports-ambassadors:node/194',
  );
  // Exported menu link: menu-footer-menu-3_john-maccrone:node/201.
  $menu_links['menu-footer-menu-3_john-maccrone:node/201'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'node/201',
    'router_path' => 'node/%',
    'link_title' => 'John MacCrone',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-3_john-maccrone:node/201',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu-3_sports-ambassadors:node/194',
  );
  // Exported menu link: menu-footer-menu-3_lewis-benson:node/199.
  $menu_links['menu-footer-menu-3_lewis-benson:node/199'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'node/199',
    'router_path' => 'node/%',
    'link_title' => 'Lewis Benson',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-3_lewis-benson:node/199',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu-3_sports-ambassadors:node/194',
  );
  // Exported menu link: menu-footer-menu-3_news-items-menu-position-rule:menu-position/1.
  $menu_links['menu-footer-menu-3_news-items-menu-position-rule:menu-position/1'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'menu-position/1',
    'router_path' => 'menu-position/%',
    'link_title' => 'News Items (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'menu-footer-menu-3_news-items-menu-position-rule:menu-position/1',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-footer-menu-3_news:node/8',
  );
  // Exported menu link: menu-footer-menu-3_news-search-results-menu-position-rule:menu-position/3.
  $menu_links['menu-footer-menu-3_news-search-results-menu-position-rule:menu-position/3'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'menu-position/3',
    'router_path' => 'menu-position/%',
    'link_title' => 'News search results (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'menu-footer-menu-3_news-search-results-menu-position-rule:menu-position/3',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-footer-menu-3_news:node/8',
  );
  // Exported menu link: menu-footer-menu-3_news:node/8.
  $menu_links['menu-footer-menu-3_news:node/8'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-3_news:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-3_sports-ambassadors:node/194.
  $menu_links['menu-footer-menu-3_sports-ambassadors:node/194'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'link_path' => 'node/194',
    'router_path' => 'node/%',
    'link_title' => 'Sports Ambassadors',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-3_sports-ambassadors:node/194',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-4_eu-cookie-law:node/7.
  $menu_links['menu-footer-menu-4_eu-cookie-law:node/7'] = array(
    'menu_name' => 'menu-footer-menu-4',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'EU Cookie Law',
    'options' => array(
      'attributes' => array(),
      'fragment' => 'cookies',
      'identifier' => 'menu-footer-menu-4_eu-cookie-law:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-4_privacy-statement:node/7.
  $menu_links['menu-footer-menu-4_privacy-statement:node/7'] = array(
    'menu_name' => 'menu-footer-menu-4',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Statement',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-4_privacy-statement:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-4_sitemap:node/132.
  $menu_links['menu-footer-menu-4_sitemap:node/132'] = array(
    'menu_name' => 'menu-footer-menu-4',
    'link_path' => 'node/132',
    'router_path' => 'node/%',
    'link_title' => 'Sitemap',
    'options' => array(
      'identifier' => 'menu-footer-menu-4_sitemap:node/132',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aberdeen');
  t('About Business Connect');
  t('About Watermans');
  t('Accidents At Work');
  t('Accidents From Height');
  t('Accidents at School');
  t('Accidents at Work');
  t('Ankle Injuries');
  t('Arm Injuries');
  t('Bike Accidents');
  t('Blog');
  t('Brain Injuries');
  t('Broken Leg');
  t('Bus Accidents');
  t('Business Connect');
  t('Car Accidents');
  t('Careers');
  t('Claiming For A Child');
  t('Claiming For Someone Else');
  t('Claims Against The Council');
  t('Claims For Loss Of Earnings');
  t('Cognitive Behavioural Therapy (CBT)');
  t('Confidence Video results (menu position rule)');
  t('Construction Site Accidents');
  t('Contact Us');
  t('Counselling');
  t('Deafness');
  t('Dog Bite Compensation');
  t('Dundee');
  t('During & Aftercare');
  t('EU Cookie Law');
  t('Edinburgh');
  t('Electrical Accidents');
  t('Equipment Accidents');
  t('FAQ');
  t('FAQ (menu position rule)');
  t('FAQ Search results (menu position rule)');
  t('Factory Accidents');
  t('Falls');
  t('Fatal Accidents');
  t('Firm Management');
  t('Fork Lift Truck Accidents');
  t('Glasgow');
  t('Gordon Anderson\'s story - accident at work');
  t('Hand Injuries');
  t('Hannah Miley');
  t('Head Injuries');
  t('Hit & Run Accidents');
  t('Home');
  t('How To Claim');
  t('Injury Calculator');
  t('Inverness');
  t('John MacCrone');
  t('Ladder Accidents');
  t('Lewis Benson');
  t('Motorcycle Accidents');
  t('MyWatermans Login');
  t('News');
  t('News Items (menu position rule)');
  t('News search results (menu position rule)');
  t('Office Accidents');
  t('Oil Industry Accidents');
  t('Osteopathy');
  t('Our Team');
  t('Pavement Defects');
  t('Pedestrian Accidents');
  t('Person Page (menu position rule)');
  t('Personal Injury Solicitors Scotland');
  t('Personal injury calculator');
  t('Physiotherapy');
  t('Playground Accident');
  t('Post Traumatic Stress Disorder Treatment (PTSD)');
  t('Potholes');
  t('Privacy Statement');
  t('Private Surgery');
  t('Psychological Therapy');
  t('Rehabilitation');
  t('Repetitive Strain Injury (RSI)');
  t('Road Defects');
  t('Road Traffic Accidents');
  t('Scaffolding Accidents');
  t('Shoulder Injuries');
  t('Sitemap');
  t('Slips & Trips');
  t('Spinal Injuries');
  t('Sports Ambassadors');
  t('Stirling');
  t('Taxi Accidents');
  t('Testimonials');
  t('Total Care');
  t('Types Of injury');
  t('Types of Accident');
  t('Uninsured Drivers');
  t('Vibration White Finger');
  t('Welding Accidents');
  t('What Can You Claim For');
  t('What is Watermans Total Care?');
  t('Whiplash Injuries');
  t('Whiplash Injury');
  t('Wrongful Death');

  return $menu_links;
}
