<?php
/**
 * @file
 * btm_features_hp_slideshow_simple.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function btm_features_hp_slideshow_simple_field_default_fields() {
  $fields = array();

  // Exported field: 'node-slideshow-field_slideshow_image'
  $fields['node-slideshow-field_slideshow_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slideshow_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow',
      'deleted' => '0',
      'description' => 'This image must be at least 948px X 406px (W x H) and no more than 1896px X 812px. It will be scaled and cropped to 948px X 406px  for display in the slideshow.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_slideshow_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => 'images/slideshow',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '1M',
        'max_resolution' => '1896x812',
        'min_resolution' => '948x406',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('This image must be at least 948px X 406px (W x H) and no more than 1896px X 812px. It will be scaled and cropped to 948px X 406px  for display in the slideshow.');

  return $fields;
}
