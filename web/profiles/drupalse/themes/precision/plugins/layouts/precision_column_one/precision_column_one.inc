<?php
// $Id: precision_column_one.inc,v 1.1.2.1 2011/02/14 10:32:22 fabsor Exp $

$plugin = array(
  'title' => t('Precision one column'),
  'theme' => 'precision_column_one',
  'icon' => 'precision-column-one.png',
  'category' => 'Precision',
  'panels' => array(
    'header_alpha' => t('Header alpha'),
    'header_beta' => t('Header beta'),
    'main' => t('Main'),
    'footer_alpha' => t('Footer alpha'),
    'footer_beta' => t('Footer beta'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_column_one().
 */
function precision_preprocess_precision_column_one(&$vars) {
  precision_check_layout_variables($vars);
}
