<?php
// $Id: template.php,v 1.2.2.1 2011/02/14 10:29:27 fabsor Exp $

/**
 * Implementation of theme_panels_default_style_render_region().
 */
function precision_panels_default_style_render_region($display, $region_id, $panes, $settings) {
  $output = '';
  foreach ($panes as $pane_id => $pane_output) {
    $output .= $pane_output;
  }
  return $output;
}

/**
 * Generic function that modifies some variables in all Precision layouts.
 */
function precision_check_layout_variables(&$vars) {
  $vars['css_id'] = strtr($vars['css_id'], '_', '-');
}

/**
 * Implementation of theme_preprocess_page().
 */
function precision_preprocess_page(&$vars){
  // Get theme setting for debug overlay.
  $grid_overlay = theme_get_setting('precision_show_overlay');
  // Check if overlay is activated.
  if ($grid_overlay == 1) {
    // Extract the body classes.
    $body_classes = explode(' ', $vars['body_classes']);
    // Add overlay class to body.
    $body_classes[] = 'show-grid';
    $vars['body_classes'] = implode(' ', $body_classes);
    // Add the overlay css to the page.
    $path = drupal_get_path('theme', 'precision');
    $styles = drupal_add_css($path . '/debug/debug.css', 'theme');
    $vars['styles'] = drupal_get_css($styles);
  }
}
