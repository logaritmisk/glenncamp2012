<?php

/**
 * Implementation of hook_strongarm().
 */
function drupalse_social_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_cache_js';
  $strongarm->value = 0;
  $export['addthis_cache_js'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_config';
  $strongarm->value = array(
    'services_toolbox' => 'google_plusone, twitter, facebook',
    'services_compact' => '',
    'services_expanded' => '',
    'ui_cobrand' => '',
    'ui_header_color' => '#000000',
    'ui_header_background' => '#FFFFFF',
    'ui_click' => 0,
    'ui_delay' => '',
    'ui_use_addressbook' => 0,
    'pubid' => '',
    'data_track_clickback' => 0,
    'data_ga_tracker' => 'pageTracker',
    'ui_use_css' => TRUE,
    'data_use_cookies' => TRUE,
  );
  $export['addthis_config'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_display_in_links';
  $strongarm->value = 1;
  $export['addthis_display_in_links'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_display_in_teasers';
  $strongarm->value = 0;
  $export['addthis_display_in_teasers'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_node_types';
  $strongarm->value = array(
    'news' => 'news',
    'page' => 'page',
    'session' => 'session',
    'event' => 0,
    'drupalse_nomination' => 0,
    'product' => 0,
    'room' => 0,
    'schedule_item' => 0,
    'sponsor' => 0,
    'time_slot' => 0,
  );
  $export['addthis_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_toolbox_classes';
  $strongarm->value = '';
  $export['addthis_toolbox_classes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_widget_type';
  $strongarm->value = 'addthis_toolbox';
  $export['addthis_widget_type'] = $strongarm;

  return $export;
}
