<?php
/**
 * @file
 * image_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "resp_img" && $api == "default_resp_img_suffixs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 100_square__mobile.
  $styles['100_square__mobile'] = array(
    'label' => '100_square__mobile',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 30,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 30,
          'height' => 30,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 100_square__normal.
  $styles['100_square__normal'] = array(
    'label' => '100_square__normal',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      8 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 150_square__mobile.
  $styles['150_square__mobile'] = array(
    'label' => '150_square__mobile',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 30,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 30,
          'height' => 30,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 150_square__normal.
  $styles['150_square__normal'] = array(
    'label' => '150_square__normal',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 220_wide__mobile.
  $styles['220_wide__mobile'] = array(
    'label' => '220x133__mobile',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 220_wide__normal.
  $styles['220_wide__normal'] = array(
    'label' => '220x133__normal',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      13 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 220,
          'height' => 133,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 220x169__mobile.
  $styles['220x169__mobile'] = array(
    'label' => '220x169__mobile',
    'effects' => array(
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 220x169__normal.
  $styles['220x169__normal'] = array(
    'label' => '220x169__normal',
    'effects' => array(
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      25 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 220,
          'height' => 169,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 300x230__mobile.
  $styles['300x230__mobile'] = array(
    'label' => '300x230__mobile',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      27 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 300,
          'height' => 230,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 300x230__normal.
  $styles['300x230__normal'] = array(
    'label' => '300x230__normal',
    'effects' => array(
      29 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      30 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 300,
          'height' => 230,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 375x233__mobile.
  $styles['375x233__mobile'] = array(
    'label' => '375x233__mobile',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      18 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 320,
          'height' => 198,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 375x233__normal.
  $styles['375x233__normal'] = array(
    'label' => '375x233__normal',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 375,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      20 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 375,
          'height' => 233,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 497x169__mobile.
  $styles['497x169__mobile'] = array(
    'label' => '497x169__mobile',
    'effects' => array(
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 109,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 497x169__normal.
  $styles['497x169__normal'] = array(
    'label' => '497x169__normal',
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 497,
          'height' => 169,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: cta_block_304x272.
  $styles['cta_block_304x272'] = array(
    'label' => 'CTA Block:304x272',
    'effects' => array(
      31 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 272,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      32 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 304,
          'height' => 272,
          'anchor' => 'right-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: fullwidth__mobile.
  $styles['fullwidth__mobile'] = array(
    'label' => 'fullwidth__mobile',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fullwidth__normal.
  $styles['fullwidth__normal'] = array(
    'label' => 'fullwidth__normal',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fullwidth_with_sidebar__mobile.
  $styles['fullwidth_with_sidebar__mobile'] = array(
    'label' => 'fullwidth_with_sidebar__mobile',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fullwidth_with_sidebar__normal.
  $styles['fullwidth_with_sidebar__normal'] = array(
    'label' => 'fullwidth_with_sidebar__normal',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_with_overlay.
  $styles['person_with_overlay'] = array(
    'label' => 'Person with overlay',
    'effects' => array(
      37 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 100,
        ),
        'weight' => -10,
      ),
      34 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 205,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      36 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 399,
          'height' => 205,
          'anchor' => 'right-center',
        ),
        'weight' => -8,
      ),
      33 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'scale' => '',
          'path' => 'sites/all/themes/watermans_2013_10/images/team/people-overlay.png',
        ),
        'weight' => -7,
      ),
    ),
  );

  return $styles;
}
