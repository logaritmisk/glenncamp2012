<?php
// $Id: precision_site_template.inc,v 1.1.2.1 2011/02/14 12:05:20 fabsor Exp $

$plugin = array(
  'title' => t('Precision site template'),
  'theme' => 'precision_site_template',
  'icon' => 'precision-site-template.png',
  'category' => 'Precision',
  'panels' => array(
    'branding' => t('Branding'),
    'nav' => t('Navigation'),
    'main' => t('Main'),
    'footer' => t('Footer'),
  ),
);

/**
 * Preprocess the site template layout.
 */
function precision_preprocess_precision_site_template(&$vars) {
  precision_check_layout_variables($vars);
}
