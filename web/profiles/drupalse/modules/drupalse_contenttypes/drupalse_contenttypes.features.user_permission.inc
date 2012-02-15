<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function drupalse_contenttypes_user_default_permissions() {
  $permissions = array();

  // Exported permission: create drupalse_nomination content
  $permissions['create drupalse_nomination content'] = array(
    'name' => 'create drupalse_nomination content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'site administrator',
    ),
  );

  return $permissions;
}
