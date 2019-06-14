<?php

/**
 * @file
 * wfs_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wfs_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: registered.
  $roles['registered'] = array(
    'name' => 'registered',
    'weight' => 4,
  );

  return $roles;
}
