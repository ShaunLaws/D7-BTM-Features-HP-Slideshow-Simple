<?php
/**
 * @file
 * btm_features_hp_slideshow_simple.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function btm_features_hp_slideshow_simple_user_default_roles() {
  $roles = array();

  // Exported role: Site Admin
  $roles['Site Admin'] = array(
    'name' => 'Site Admin',
    'weight' => '3',
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
