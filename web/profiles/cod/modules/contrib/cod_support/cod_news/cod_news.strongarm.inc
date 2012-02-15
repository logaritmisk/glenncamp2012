<?php

/**
 * Implementation of hook_strongarm().
 */
function cod_news_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_news';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'comment_settings' => '4',
    'menu' => '-4',
    'path' => '3',
    'path_redirect' => '2',
  );
  $export['content_extra_weights_news'] = $strongarm;

  return $export;
}
