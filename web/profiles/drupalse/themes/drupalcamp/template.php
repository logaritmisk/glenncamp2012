<?php
/**
* Implementation of theme_panels_default_style_render_region().
*/
function drupalcamp_panels_default_style_render_region($display, $region_id, $panes, $settings) {
  $output = '';
  foreach ($panes as $pane_id => $pane_output) {
    $output .= $pane_output;
  }
  return $output;
}
