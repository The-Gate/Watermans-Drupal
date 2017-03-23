<?php
/**
 * @file
 * user_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: CMS Admin.
  $roles['CMS Admin'] = array(
    'name' => 'CMS Admin',
    'weight' => 3,
  );

  // Exported role: CMS Editor.
  $roles['CMS Editor'] = array(
    'name' => 'CMS Editor',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
