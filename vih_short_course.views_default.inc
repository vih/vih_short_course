<?php
/**
 * @file
 * vih_short_course.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vih_short_course_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'short_course_types';
  $view->description = 'Used to show a block with short course types.';
  $view->tag = 'VIH';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Short course types';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'short-course-types';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'panopoly_image_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_view'] = 'self';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'short_course_type' => 'short_course_type',
  );
  /* Filter criterion: Taxonomy term: Klæbrig (field_sticky) */
  $handler->display->display_options['filters']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['filters']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_sticky_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_sticky_value']['group'] = '0';

  /* Display: Overview Block */
  $handler = $view->new_display('block', 'Overview Block', 'block');
  $handler->display->display_options['display_description'] = 'Only sticky is chosen making it possible to have other types saved.';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block - tekst */
  $handler = $view->new_display('block', 'Block - tekst', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Only sticky is chosen making it possible to have other types saved.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['block_description'] = 'Korte kurser';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kursustype';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_featured_image' => 'field_featured_image',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Taxonomy term */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Klæbrig */
  $handler->display->display_options['fields']['field_sticky']['id'] = 'field_sticky';
  $handler->display->display_options['fields']['field_sticky']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['fields']['field_sticky']['field'] = 'field_sticky';
  $handler->display->display_options['fields']['field_sticky']['label'] = 'Synlig';
  $handler->display->display_options['fields']['field_sticky']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_sticky']['settings'] = array(
    'clickable' => 0,
    'display_type' => '1',
  );
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'VIH Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Overview Pane */
  $handler = $view->new_display('panel_pane', 'Overview Pane', 'panel_pane_2');
  $handler->display->display_options['pane_category']['name'] = 'VIH Short Course';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['short_course_types'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Overview Block'),
    t('Only sticky is chosen making it possible to have other types saved.'),
    t('more'),
    t('Block - tekst'),
    t('Korte kurser'),
    t('Content pane'),
    t('Kursustype'),
    t('Name'),
    t('Synlig'),
    t('VIH Admin'),
    t('Overview Pane'),
    t('VIH Short Course'),
  );
  $export['short_course_types'] = $view;

  $view = new view();
  $view->name = 'short_courses';
  $view->description = 'Show short courses';
  $view->tag = 'VIH';
  $view->base_table = 'node';
  $view->human_name = 'Short courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_featured_image' => 'field_featured_image',
    'title' => 'title',
    'body' => 'body',
    'field_course_time' => 'field_course_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Tidspunkt -  start date (field_course_time) */
  $handler->display->display_options['sorts']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['sorts']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['sorts']['field_course_time_value']['field'] = 'field_course_time_value';
  /* Contextual filter: Content: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_course_type_tid']['validate_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'short_course' => 'short_course',
    'short_course_basic' => 'short_course_basic',
    'vih_short_course_family' => 'vih_short_course_family',
    'vih_short_course_golf' => 'vih_short_course_golf',
    'vih_short_course_kajak' => 'vih_short_course_kajak',
    'vih_short_course_sport_camp' => 'vih_short_course_sport_camp',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Tidspunkt -  start date (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = '0';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator_id'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['label'] = 'Tidspunkt -  startdato (field_course_time)';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['identifier'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Korte kurser';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Kursustype */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'tilmeldinger';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/registrations';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_course_type_tid']['validate_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'short_course' => 'short_course',
    'short_course_basic' => 'short_course_basic',
    'vih_short_course_family' => 'vih_short_course_family',
    'vih_short_course_golf' => 'vih_short_course_golf',
    'vih_short_course_kajak' => 'vih_short_course_kajak',
    'vih_short_course_sport_camp' => 'vih_short_course_sport_camp',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tidspunkt -  start date (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_course_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator_id'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['label'] = 'Vis fra';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['identifier'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-10:+3';
  $handler->display->display_options['path'] = 'admin/dashboard/short_courses/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Alle kurser';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Blok - course type */
  $handler = $view->new_display('block', 'Blok - course type', 'block_short_course_depends_type');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Used with taxonomy display on the taxonomy page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = '<p><strong>Vi har i øjeblikket ikke nogen aktuelle kurser af den pågældende type. <a href="/nyhedsbrev">Tilmeld dig nyhedsbrevet</a> for at blive opdateret, når vi igen har aktuelle kurser.</strong></p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Korte kurser';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_course_time.field_course_time_value';
  $handler->display->display_options['path'] = 'kortekurser.xml';
  $handler->display->display_options['displays'] = array(
    'block_short_course_depends_type' => 'block_short_course_depends_type',
    'block_short_courses_quotes' => 'block_short_courses_quotes',
    'block_all_short_courses' => 'block_all_short_courses',
    'default' => 0,
    'block_short_courses_sidebar' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Ical */
  $handler = $view->new_display('feed', 'Ical', 'feed_ical');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Korte kurser';
  $handler->display->display_options['display_description'] = 'Feed i iCal format';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_course_time.field_course_time_value';
  $handler->display->display_options['path'] = 'kortekurser.ics';
  $handler->display->display_options['displays'] = array(
    'block_short_course_depends_type' => 'block_short_course_depends_type',
    'block_short_courses_quotes' => 'block_short_courses_quotes',
    'block_all_short_courses' => 'block_all_short_courses',
    'default' => 0,
    'block_short_courses_sidebar' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Sidebar blok */
  $handler = $view->new_display('block', 'Sidebar blok', 'block_short_courses_sidebar');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'short-courses-sidebar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['label'] = '';
  $handler->display->display_options['fields']['field_course_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Kursustype */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_course_type_tid']['validate_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Blok - quotes */
  $handler = $view->new_display('block', 'Blok - quotes', 'block_short_courses_quotes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relaterede kurser';
  $handler->display->display_options['display_description'] = 'Used to show related courses on the quotes pages.';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Blok - all courses */
  $handler = $view->new_display('block', 'Blok - all courses', 'block_all_short_courses');
  $handler->display->display_options['display_description'] = 'Used to show all courses';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_featured_image' => 'field_featured_image',
    'title' => 'title',
    'body' => 'title',
    'field_course_time' => 'field_course_time',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['summary'] = 'Korte kurser på Vejle Idrætshøjskole - sommerhøjskole, familiehøjskole, familiekurser, golfhøjskole, golfkurser';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Tilmelding';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]#add-to-cart-form-registration';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Tilmelding til [title]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'short_course' => 'short_course',
    'short_course_basic' => 'short_course_basic',
    'vih_short_course_family' => 'vih_short_course_family',
    'vih_short_course_golf' => 'vih_short_course_golf',
    'vih_short_course_kajak' => 'vih_short_course_kajak',
    'vih_short_course_sport_camp' => 'vih_short_course_sport_camp',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Tidspunkt -  start date (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = '0';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator_id'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['label'] = 'Tidspunkt -  startdato (field_course_time)';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['identifier'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Blok - teachers */
  $handler = $view->new_display('block', 'Blok - teachers', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Underviser på følgende korte kurser';
  $handler->display->display_options['display_description'] = 'Shows which courses the teacher teaches.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_leader_target_id']['id'] = 'field_course_leader_target_id';
  $handler->display->display_options['relationships']['field_course_leader_target_id']['table'] = 'field_data_field_course_leader';
  $handler->display->display_options['relationships']['field_course_leader_target_id']['field'] = 'field_course_leader_target_id';
  $handler->display->display_options['relationships']['field_course_leader_target_id']['label'] = 'Indhold entity referenced from field_course_leader';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['id'] = 'field_employee_reference_target_id';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['table'] = 'field_data_field_employee_reference';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['field'] = 'field_employee_reference_target_id';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['relationship'] = 'field_course_leader_target_id';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['label'] = 'Indhold entity referenced from field_employee_reference';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Hvilken lærer? (field_employee_reference) */
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['id'] = 'field_employee_reference_target_id';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['table'] = 'field_data_field_employee_reference';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['field'] = 'field_employee_reference_target_id';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['relationship'] = 'field_course_leader_target_id';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Admin pane */
  $handler = $view->new_display('panel_pane', 'Admin pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Aktuelle korte kurser';
  $handler->display->display_options['display_description'] = 'Administrative view of short courses';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er i øjeblikket ingen aktuelle kurser.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'tilmeldinger';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/registrations';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'short_course' => 'short_course',
    'short_course_basic' => 'short_course_basic',
    'vih_short_course_family' => 'vih_short_course_family',
    'vih_short_course_golf' => 'vih_short_course_golf',
    'vih_short_course_kajak' => 'vih_short_course_kajak',
    'vih_short_course_sport_camp' => 'vih_short_course_sport_camp',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Tidspunkt -  start date (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = '0';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator_id'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['label'] = 'Tidspunkt -  startdato (field_course_time)';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['identifier'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  $handler->display->display_options['pane_category']['name'] = 'VIH Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Short Course Pane */
  $handler = $view->new_display('panel_pane', 'Short Course Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="vih-box-highlight-pane"><h3>Kursusbeskrivelser er klar i starten af november</h3><p>Vi arbejder i øjeblikket på beskrivelserne af de korte kurser. Du kan finde yderligere oplysninger her på siden i starten af november. Hvis du vil have besked, når tilmeldingen åbner, kan du <a href="/nyhedsbrev">tilmelde dig vores nyhedsbrev</a> eller <a href="http://facebook.com/vejleih">følge os på Facebook</a>.</p></div>';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Tilmelding';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]#add-to-cart-form-registration';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Tilmelding til [title]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_course_type_tid']['validate_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['pane_category']['name'] = 'VIH Short Course';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['short_courses'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Navn'),
    t('<h3>[title]</h3>'),
    t('Tidspunkt'),
    t('Alle'),
    t('Tidspunkt -  startdato (field_course_time)'),
    t('Side'),
    t('Korte kurser'),
    t('more'),
    t('Kursustype'),
    t('Published'),
    t('Nid'),
    t('tilmeldinger'),
    t('Vis fra'),
    t('Blok - course type'),
    t('Used with taxonomy display on the taxonomy page.'),
    t('<p><strong>Vi har i øjeblikket ikke nogen aktuelle kurser af den pågældende type. <a href="/nyhedsbrev">Tilmeld dig nyhedsbrevet</a> for at blive opdateret, når vi igen har aktuelle kurser.</strong></p>'),
    t('Feed'),
    t('Ical'),
    t('Feed i iCal format'),
    t('Sidebar blok'),
    t('Blok - quotes'),
    t('Relaterede kurser'),
    t('Used to show related courses on the quotes pages.'),
    t('Blok - all courses'),
    t('Used to show all courses'),
    t('Tilmelding'),
    t('Tilmelding til [title]'),
    t('Blok - teachers'),
    t('Underviser på følgende korte kurser'),
    t('Shows which courses the teacher teaches.'),
    t('Indhold entity referenced from field_course_leader'),
    t('Indhold entity referenced from field_employee_reference'),
    t('Admin pane'),
    t('Aktuelle korte kurser'),
    t('Administrative view of short courses'),
    t('Der er i øjeblikket ingen aktuelle kurser.'),
    t('VIH Admin'),
    t('Short Course Pane'),
    t('<div class="vih-box-highlight-pane"><h3>Kursusbeskrivelser er klar i starten af november</h3><p>Vi arbejder i øjeblikket på beskrivelserne af de korte kurser. Du kan finde yderligere oplysninger her på siden i starten af november. Hvis du vil have besked, når tilmeldingen åbner, kan du <a href="/nyhedsbrev">tilmelde dig vores nyhedsbrev</a> eller <a href="http://facebook.com/vejleih">følge os på Facebook</a>.</p></div>'),
    t('VIH Short Course'),
  );
  $export['short_courses'] = $view;

  $view = new view();
  $view->name = 'vih_short_course_orders';
  $view->description = '';
  $view->tag = 'VIH';
  $view->base_table = 'commerce_order';
  $view->human_name = 'VIH Short Course Orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'order_id' => 'order_id',
    'status' => 'status',
    'title' => 'title',
    'title_1' => 'title_1',
    'uid' => 'uid',
    'balance' => 'balance',
    'field_registrant_name' => 'field_registrant_name',
    'field_cpr_nummer' => 'field_cpr_nummer',
    'field_dgu_medlemsnummer' => 'field_dgu_medlemsnummer',
    'field_golf_handicap' => 'field_golf_handicap',
    'field_roommate' => 'field_roommate',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'balance' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_cpr_nummer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dgu_medlemsnummer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_golf_handicap' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_roommate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er endnu ikke nogen tilmeldinger.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Forbindelse: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Forbindelse: Commerce Product: Referencing Indhold */
  $handler->display->display_options['relationships']['field_golf_product']['id'] = 'field_golf_product';
  $handler->display->display_options['relationships']['field_golf_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_golf_product']['field'] = 'field_golf_product';
  $handler->display->display_options['relationships']['field_golf_product']['relationship'] = 'commerce_product_product_id';
  /* Forbindelse: Commerce Ordre: Ejer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Forbindelse: Commerce Order: Refereret kundeprofil */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Felt: Commerce Ordre: Ordre ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Felt: Commerce Ordre: Ordrestatus */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Felt: Commerce Product: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_golf_product';
  /* Felt: Commerce Ordre: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Felt: Commerce Ordre: Ordrebalance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Felt: Commerce Line item: Navn */
  $handler->display->display_options['fields']['field_registrant_name']['id'] = 'field_registrant_name';
  $handler->display->display_options['fields']['field_registrant_name']['table'] = 'field_data_field_registrant_name';
  $handler->display->display_options['fields']['field_registrant_name']['field'] = 'field_registrant_name';
  $handler->display->display_options['fields']['field_registrant_name']['relationship'] = 'commerce_line_items_line_item_id';
  /* Felt: Commerce Line item: CPR-nummer */
  $handler->display->display_options['fields']['field_cpr_nummer']['id'] = 'field_cpr_nummer';
  $handler->display->display_options['fields']['field_cpr_nummer']['table'] = 'field_data_field_cpr_nummer';
  $handler->display->display_options['fields']['field_cpr_nummer']['field'] = 'field_cpr_nummer';
  $handler->display->display_options['fields']['field_cpr_nummer']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['field_cpr_nummer']['type'] = 'vih_cpr_formatter';
  /* Felt: Commerce Line item: DGU-medlemsnummer */
  $handler->display->display_options['fields']['field_dgu_medlemsnummer']['id'] = 'field_dgu_medlemsnummer';
  $handler->display->display_options['fields']['field_dgu_medlemsnummer']['table'] = 'field_data_field_dgu_medlemsnummer';
  $handler->display->display_options['fields']['field_dgu_medlemsnummer']['field'] = 'field_dgu_medlemsnummer';
  $handler->display->display_options['fields']['field_dgu_medlemsnummer']['relationship'] = 'commerce_line_items_line_item_id';
  /* Felt: Commerce Line item: Golf handicap */
  $handler->display->display_options['fields']['field_golf_handicap']['id'] = 'field_golf_handicap';
  $handler->display->display_options['fields']['field_golf_handicap']['table'] = 'field_data_field_golf_handicap';
  $handler->display->display_options['fields']['field_golf_handicap']['field'] = 'field_golf_handicap';
  $handler->display->display_options['fields']['field_golf_handicap']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['field_golf_handicap']['label'] = 'Golfhandicap';
  $handler->display->display_options['fields']['field_golf_handicap']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Felt: Commerce Line item: Sambo */
  $handler->display->display_options['fields']['field_roommate']['id'] = 'field_roommate';
  $handler->display->display_options['fields']['field_roommate']['table'] = 'field_data_field_roommate';
  $handler->display->display_options['fields']['field_roommate']['field'] = 'field_roommate';
  $handler->display->display_options['fields']['field_roommate']['relationship'] = 'commerce_line_items_line_item_id';
  /* Sorteringskriterie: Commerce Ordre: Ordre ID */
  $handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
  $handler->display->display_options['sorts']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
  /* Filterkriterie: Commerce Ordre: Ordrestatus */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'completed' => 'completed',
    'checkout_complete' => 'checkout_complete',
  );
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Ordrestatus';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );

  /* Display: Short courses */
  $handler = $view->new_display('page', 'Short courses', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tilmeldinger';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'I alt @total tilmeldinger til kurset';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_golf_product';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'short_course_basic' => 'short_course_basic',
    'vih_short_course_family' => 'vih_short_course_family',
    'vih_short_course_golf' => 'vih_short_course_golf',
    'vih_short_course_kajak' => 'vih_short_course_kajak',
    'vih_short_course_sommercamp' => 'vih_short_course_sommercamp',
    'vih_short_course_sport_camp' => 'vih_short_course_sport_camp',
  );
  $handler->display->display_options['path'] = 'node/%/registrations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Tilmeldinger';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Dashboard */
  $handler = $view->new_display('page', 'Dashboard', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/commerce/registrations';

  /* Display: Email */
  $handler = $view->new_display('page', 'Email', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tilmeldinger';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Resumé af resultat */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'I alt @current_record_count tilmeldinger til kurset';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Global: Send besked */
  $handler->display->display_options['fields']['views_send']['id'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['table'] = 'views';
  $handler->display->display_options['fields']['views_send']['field'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['label'] = '';
  $handler->display->display_options['fields']['views_send']['element_label_colon'] = FALSE;
  /* Felt: Commerce Ordre: Ordre ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['group_type'] = 'count_distinct';
  /* Felt: Commerce Ordre: Ordrestatus */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Felt: Commerce Line item: Navn */
  $handler->display->display_options['fields']['field_registrant_name']['id'] = 'field_registrant_name';
  $handler->display->display_options['fields']['field_registrant_name']['table'] = 'field_data_field_registrant_name';
  $handler->display->display_options['fields']['field_registrant_name']['field'] = 'field_registrant_name';
  $handler->display->display_options['fields']['field_registrant_name']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['field_registrant_name']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_registrant_name']['separator'] = ', ';
  /* Felt: Commerce Ordre: E-mail */
  $handler->display->display_options['fields']['mail_1']['id'] = 'mail_1';
  $handler->display->display_options['fields']['mail_1']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail_1']['field'] = 'mail';
  $handler->display->display_options['fields']['mail_1']['group_type'] = 'min';
  $handler->display->display_options['fields']['mail_1']['render_as_link'] = 0;
  /* Felt: Commerce Product: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_golf_product';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_golf_product';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'short_course_basic' => 'short_course_basic',
    'vih_short_course_family' => 'vih_short_course_family',
    'vih_short_course_golf' => 'vih_short_course_golf',
    'vih_short_course_kajak' => 'vih_short_course_kajak',
    'vih_short_course_sommercamp' => 'vih_short_course_sommercamp',
    'vih_short_course_sport_camp' => 'vih_short_course_sport_camp',
  );
  $handler->display->display_options['path'] = 'node/%/email';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'E-mail';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['vih_short_course_orders'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Der er endnu ikke nogen tilmeldinger.'),
    t('Line items referenced by commerce_line_items'),
    t('Products referenced by commerce_product'),
    t('Indhold referencing products from field_golf_product'),
    t('Ordreejer'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Ordre ID'),
    t('E-mail'),
    t('Ordrestatus'),
    t('Titel'),
    t('Uid'),
    t('Ordrebalance'),
    t('Navn'),
    t('CPR-nummer'),
    t('DGU-medlemsnummer'),
    t('Golfhandicap'),
    t('Sambo'),
    t('Fag'),
    t('Short courses'),
    t('Tilmeldinger'),
    t('I alt @total tilmeldinger til kurset'),
    t('Alle'),
    t('Dashboard'),
    t('Email'),
    t('I alt @current_record_count tilmeldinger til kurset'),
  );
  $export['vih_short_course_orders'] = $view;

  return $export;
}
