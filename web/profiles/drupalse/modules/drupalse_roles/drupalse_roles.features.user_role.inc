<?php

/**
 * Implementation of hook_user_default_roles().
 */
function drupalse_roles_user_default_roles() {
  $roles = array();

  // Exported role: ticket attendee
  $roles['ticket attendee'] = array(
    'name' => 'ticket attendee',
  );

  return $roles;
}
