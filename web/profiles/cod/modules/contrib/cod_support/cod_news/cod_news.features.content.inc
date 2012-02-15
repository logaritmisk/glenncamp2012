<?php

/**
 * Implementation of hook_content_default_fields().
 */
function cod_news_content_default_fields() {
  $fields = array();

  // Exported field: field_news_image
  $fields['news-field_news_image'] = array(
    'field_name' => 'field_news_image',
    'type_name' => 'news',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'drupalse_pagecontent_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'drupalse_pagecontent_default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'news',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $fields;
}
