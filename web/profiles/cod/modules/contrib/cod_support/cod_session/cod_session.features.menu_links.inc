<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function cod_session_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-quick-links:program/session-schedule/your-schedule
  $menu_links['menu-quick-links:program/session-schedule/your-schedule'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'program/session-schedule/your-schedule',
    'router_path' => 'program/session-schedule/your-schedule',
    'link_title' => 'Your schedule',
    'options' => array(
      'attributes' => array(
        'title' => 'Your personal conference schedule',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Your schedule');


  return $menu_links;
}
