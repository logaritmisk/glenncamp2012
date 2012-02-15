<?php

/**
 * Implementation of hook_strongarm().
 */
function drupalse_contenttypes_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_drupalse_nomination';
  $strongarm->value = 0;
  $export['comment_anonymous_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_drupalse_nomination';
  $strongarm->value = '3';
  $export['comment_controls_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_drupalse_nomination';
  $strongarm->value = '4';
  $export['comment_default_mode_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_drupalse_nomination';
  $strongarm->value = '1';
  $export['comment_default_order_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_drupalse_nomination';
  $strongarm->value = '50';
  $export['comment_default_per_page_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_drupalse_nomination';
  $strongarm->value = '2';
  $export['comment_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_drupalse_nomination';
  $strongarm->value = '0';
  $export['comment_form_location_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_drupalse_nomination';
  $strongarm->value = '1';
  $export['comment_preview_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_drupalse_nomination';
  $strongarm->value = '1';
  $export['comment_subject_field_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_drupalse_nomination';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-3',
    'author' => '-2',
    'options' => '-1',
    'comment_settings' => '2',
    'menu' => '-4',
    'path' => '0',
    'path_redirect' => '1',
  );
  $export['content_extra_weights_drupalse_nomination'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_drupalse_nomination';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_drupalse_nomination'] = $strongarm;

  return $export;
}
