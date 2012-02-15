<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function drupalse_imagestyles_imagecache_default_presets() {
  $items = array(
    'drupalse_gold' => array(
      'presetname' => 'drupalse_gold',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '280',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'drupalse_logosmall' => array(
      'presetname' => 'drupalse_logosmall',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '40',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'drupalse_organizing' => array(
      'presetname' => 'drupalse_organizing',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '155',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '80',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'drupalse_pagecontent' => array(
      'presetname' => 'drupalse_pagecontent',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '544',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'drupalse_profile' => array(
      'presetname' => 'drupalse_profile',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_desaturate',
          'data' => array(),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '65',
            'height' => '65',
          ),
        ),
      ),
    ),
    'drupalse_silver' => array(
      'presetname' => 'drupalse_silver',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '140',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '50',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
