<?php
/**
 * @file
 * btm_features_hp_slideshow_simple.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function btm_features_hp_slideshow_simple_user_default_permissions() {
  $permissions = array();

  // Exported permission: create slideshow content
  $permissions['create slideshow content'] = array(
    'name' => 'create slideshow content',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slideshow content
  $permissions['delete any slideshow content'] = array(
    'name' => 'delete any slideshow content',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slideshow content
  $permissions['delete own slideshow content'] = array(
    'name' => 'delete own slideshow content',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any slideshow content
  $permissions['edit any slideshow content'] = array(
    'name' => 'edit any slideshow content',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own slideshow content
  $permissions['edit own slideshow content'] = array(
    'name' => 'edit own slideshow content',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
