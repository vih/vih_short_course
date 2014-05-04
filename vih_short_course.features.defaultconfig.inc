<?php
/**
 * @file
 * vih_short_course.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_short_course_defaultconfig_features() {
  return array(
    'vih_short_course' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_short_course_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create short_course content'.
  $permissions['create short_course content'] = array(
    'name' => 'create short_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any short_course content'.
  $permissions['delete any short_course content'] = array(
    'name' => 'delete any short_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own short_course content'.
  $permissions['delete own short_course content'] = array(
    'name' => 'delete own short_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any short_course content'.
  $permissions['edit any short_course content'] = array(
    'name' => 'edit any short_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own short_course content'.
  $permissions['edit own short_course content'] = array(
    'name' => 'edit own short_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
