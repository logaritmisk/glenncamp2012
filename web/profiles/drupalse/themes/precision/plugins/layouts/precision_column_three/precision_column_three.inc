<?php
// $Id: precision_column_three.inc,v 1.1.2.2 2011/02/14 10:32:23 fabsor Exp $

$plugin = array(
  'title' => t('Precision three columns'),
  'theme' => 'precision_column_three',
  'icon' => 'precision-column-three.png',
  'category' => 'Precision',
  'panels' => array(
    'header_alpha' => t('Header alpha'),
    'header_beta' => t('Header beta'),
    'main' => t('Main'),
    'aside_alpha' => t('Aside alpha'),
    'aside_beta' => t('Aside beta'),
    'footer_alpha' => t('Footer alpha'),
    'footer_beta' => t('Footer beta'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_column_three().
 */
function precision_preprocess_precision_column_three(&$vars) {
  precision_check_layout_variables($vars);
}
