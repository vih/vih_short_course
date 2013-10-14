<?php
/**
 * @file
 * vih_short_course.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_short_course_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_short_course_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_short_course_node_info() {
  $items = array(
    'short_course' => array(
      'name' => t('Short Course'),
      'base' => 'node_content',
      'description' => t('Use <em>Short course</em> for short courses where registration is handled by external provider which you can add a link for.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
