<?php
/**
 * @file
 * btm_features_hp_slideshow_simple.features.inc
 */

/**
 * Implements hook_views_api().
 */
function btm_features_hp_slideshow_simple_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function btm_features_hp_slideshow_simple_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '948',
          'height' => '406',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function btm_features_hp_slideshow_simple_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('A slideshow - holds all the images to be displayed in the slideshow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Add the images, re-order if desired.'),
    ),
  );
  return $items;
}
