<?php

/**
 * Implementation of theme_settings().
 */
function phptemplate_settings($saved_settings) {
  $defaults = array(
    'precision_show_overlay' => 0,
  );
  // Merge the saved variables and their default values.
  $settings = array_merge($defaults, $saved_settings);
  $form['precision_show_overlay'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show grid overlay'),
    '#default_value' => $settings['precision_show_overlay'],
    '#description' => t('Shows the precision grid debug overlay.'),
  );
  // Return the additional form widgets
  return $form;
}
