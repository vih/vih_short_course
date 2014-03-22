<?php
/**
 * @file
 * vih_short_course.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vih_short_course_taxonomy_default_vocabularies() {
  return array(
    'short_course_type' => array(
      'name' => 'Short Course Type',
      'machine_name' => 'short_course_type',
      'description' => 'Used to group the short courses',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
