<?php
// $Id: precision_column_two.inc,v 1.1.2.1 2011/02/14 10:32:23 fabsor Exp $

$plugin = array(
  'title' => t('Precision two columns'),
  'theme' => 'precision_column_two',
  'icon' => 'precision-column-two.png',
  'category' => 'Precision',
  'panels' => array(
    'header_alpha' => t('Header alpha'),
    'header_beta' => t('Header beta'),
    'main' => t('Main'),
    'aside_beta' => t('Aside beta'),
    'footer_alpha' => t('Footer alpha'),
    'footer_beta' => t('Footer beta'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_column_two().
 */
function precision_preprocess_precision_column_two(&$vars) {
  precision_check_layout_variables($vars);
}
