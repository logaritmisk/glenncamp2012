<?php
// $Id: precision_naked.inc,v 1.1.2.1 2011/02/14 10:32:23 fabsor Exp $

$plugin = array(
  'title' => t('Precision naked'),
  'theme' => 'precision_naked',
  'icon' => 'precision-naked.png',
  'category' => 'Precision',
  'panels' => array(
    'main' => t('Main'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_naked().
 */
function precision_preprocess_precision_naked(&$vars) {
  precision_check_layout_variables($vars);
}
