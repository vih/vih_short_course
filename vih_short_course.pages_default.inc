<?php
/**
 * @file
 * vih_short_course.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vih_short_course_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Short courses External',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'short_course' => 'short_course',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 7,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Video',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'introduction',
        ),
        'parent' => '4',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'picture',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'picture' => array(
        'type' => 'region',
        'title' => 'Picture',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      'introduction' => array(
        'type' => 'region',
        'title' => 'Introduction',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'information',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'information' => array(
        'type' => 'region',
        'title' => 'Information',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a73cd44a-7de3-4940-ba52-e67ad6feafb3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5293ea3f-8f4d-4599-a3a9-5f5eba67a692';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_spotlight',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '5293ea3f-8f4d-4599-a3a9-5f5eba67a692';
  $display->content['new-5293ea3f-8f4d-4599-a3a9-5f5eba67a692'] = $pane;
  $display->panels['contentmain'][0] = 'new-5293ea3f-8f4d-4599-a3a9-5f5eba67a692';
  $pane = new stdClass();
  $pane->pid = 'new-7ba18917-42ed-40f4-8de0-b5279d00e2f7';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_course_time';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'formatter_settings' => array(
      'format_type' => 'long',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7ba18917-42ed-40f4-8de0-b5279d00e2f7';
  $display->content['new-7ba18917-42ed-40f4-8de0-b5279d00e2f7'] = $pane;
  $display->panels['contentmain'][1] = 'new-7ba18917-42ed-40f4-8de0-b5279d00e2f7';
  $pane = new stdClass();
  $pane->pid = 'new-7b32be61-3018-44cf-b74c-b095edbbfc1d';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '%title %node:title',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '7b32be61-3018-44cf-b74c-b095edbbfc1d';
  $display->content['new-7b32be61-3018-44cf-b74c-b095edbbfc1d'] = $pane;
  $display->panels['contentmain'][2] = 'new-7b32be61-3018-44cf-b74c-b095edbbfc1d';
  $pane = new stdClass();
  $pane->pid = 'new-f3f38d98-1e7f-49c2-a652-7e64f3999f7f';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_vih_schedule';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'pdf_reader_file',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'pdf_width' => '600',
      'pdf_height' => '480',
      'renderer' => '0',
      'download' => 1,
      'colorbox' => 0,
      'colorbox_link_text' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f3f38d98-1e7f-49c2-a652-7e64f3999f7f';
  $display->content['new-f3f38d98-1e7f-49c2-a652-7e64f3999f7f'] = $pane;
  $display->panels['contentmain'][3] = 'new-f3f38d98-1e7f-49c2-a652-7e64f3999f7f';
  $pane = new stdClass();
  $pane->pid = 'new-2a6db6ff-44b7-427f-aaa2-f172ee38d02b';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'vih_lectures-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2a6db6ff-44b7-427f-aaa2-f172ee38d02b';
  $display->content['new-2a6db6ff-44b7-427f-aaa2-f172ee38d02b'] = $pane;
  $display->panels['contentmain'][4] = 'new-2a6db6ff-44b7-427f-aaa2-f172ee38d02b';
  $pane = new stdClass();
  $pane->pid = 'new-c6be5730-c832-4a1e-be8e-583df0b91601';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'employees_context-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Undervisere',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'style' => 'alternate',
    ),
    'style' => 'vih_box_highlight',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c6be5730-c832-4a1e-be8e-583df0b91601';
  $display->content['new-c6be5730-c832-4a1e-be8e-583df0b91601'] = $pane;
  $display->panels['contentmain'][5] = 'new-c6be5730-c832-4a1e-be8e-583df0b91601';
  $pane = new stdClass();
  $pane->pid = 'new-15f16d11-64bf-4b63-94d0-d217e0300d6c';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_registration';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '15f16d11-64bf-4b63-94d0-d217e0300d6c';
  $display->content['new-15f16d11-64bf-4b63-94d0-d217e0300d6c'] = $pane;
  $display->panels['contentmain'][6] = 'new-15f16d11-64bf-4b63-94d0-d217e0300d6c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Short Course Type',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'short_course_type' => 'short_course_type',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a06f889b-08b8-43a9-ac18-fe25edc98104';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c1f98193-fb94-4063-a520-c4670d649dd9';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_view';
  $pane->subtype = 'taxonomy_term';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c1f98193-fb94-4063-a520-c4670d649dd9';
  $display->content['new-c1f98193-fb94-4063-a520-c4670d649dd9'] = $pane;
  $display->panels['contentmain'][0] = 'new-c1f98193-fb94-4063-a520-c4670d649dd9';
  $pane = new stdClass();
  $pane->pid = 'new-608a4c71-326f-4931-8909-df158f689616';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'short_courses-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'vih_box_highlight',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '608a4c71-326f-4931-8909-df158f689616';
  $display->content['new-608a4c71-326f-4931-8909-df158f689616'] = $pane;
  $display->panels['contentmain'][1] = 'new-608a4c71-326f-4931-8909-df158f689616';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
