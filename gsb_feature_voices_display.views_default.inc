<?php
/**
 * @file
 * gsb_feature_voices_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_voices_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gsb_voices_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB Voices Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Voices of Stanford Business';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'Faculty ER';
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'image_style' => '566x_variable',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = '';
  $handler->display->display_options['fields']['field_degree_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['text'] = '<div class="views-field-field-degree-year">[field_degree_year]</div>';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Endowed Title OR Appointment */
  $handler->display->display_options['fields']['field_endowed_title_appointment']['id'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['table'] = 'field_data_field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['field'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['label'] = '';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['text'] = '<div class="views-field-field-endowed-title-appointment">[field_endowed_title_appointment-title]</div>';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Background Color */
  $handler->display->display_options['fields']['field_background_color']['id'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['table'] = 'field_data_field_background_color';
  $handler->display->display_options['fields']['field_background_color']['field'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['label'] = '';
  $handler->display->display_options['fields']['field_background_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_background_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_color']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_background_color']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="bg-[field_background_color]">
<div class="views-field-field-image-single-public">[field_image_single_public]</div>
<div class="views-field-field-quote">[field_quote]</div>
<div class="views-field-title">[title]</div>
[field_degree_year]
[field_endowed_title_appointment]
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices' => 'voices',
  );

  /* Display: Homepage Voices */
  $handler = $view->new_display('panel_pane', 'Homepage Voices', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Voices of Stanford GSB';
  $handler->display->display_options['display_description'] = 'Homepage Voices List';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['pane_title'] = 'Voices: Homepage Three Across';
  $handler->display->display_options['pane_description'] = 'Homepage latest three voices';
  $handler->display->display_options['pane_category']['name'] = 'Homepage Elements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['gsb_voices_listing'] = $view;

  $view = new view();
  $view->name = 'voices_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Voices Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_person_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_industry_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_region_of_interest_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Faculty ER */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['ui_name'] = 'Faculty ER';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'Faculty ER';
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'image_style' => '270x270',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Faculty Name */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Faculty Name';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = '';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Endowed Title OR Appointment */
  $handler->display->display_options['fields']['field_endowed_title_appointment']['id'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['table'] = 'field_data_field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['field'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['label'] = '';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices' => 'voices',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_person_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator_id'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['label'] = 'Person Type';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['identifier'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_person_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Full Name (field_voices_full_name) */
  $handler->display->display_options['filters']['field_voices_full_name_value']['id'] = 'field_voices_full_name_value';
  $handler->display->display_options['filters']['field_voices_full_name_value']['table'] = 'field_data_field_voices_full_name';
  $handler->display->display_options['filters']['field_voices_full_name_value']['field'] = 'field_voices_full_name_value';
  $handler->display->display_options['filters']['field_voices_full_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_voices_full_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['operator_id'] = 'field_voices_full_name_value_op';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['label'] = 'Full Name';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['operator'] = 'field_voices_full_name_value_op';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['identifier'] = 'field_voices_full_name_value';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_dependent'] = 1;

  /* Display: Voices Filters */
  $handler = $view->new_display('panel_pane', 'Voices Filters', 'voices_filters_pane');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_person_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_industry_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_region_of_interest_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 0;
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Faculty ER */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['ui_name'] = 'Faculty ER';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'Faculty ER';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'image_style' => '566x_variable',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = '';
  $handler->display->display_options['fields']['field_degree_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['text'] = '<div class="views-field-field-degree-year">[field_degree_year]</div>';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'fieldable_panels_pane',
        ),
      ),
    ),
  );
  /* Field: Content: Endowed Title OR Appointment */
  $handler->display->display_options['fields']['field_endowed_title_appointment']['id'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['table'] = 'field_data_field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['field'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['label'] = '';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['text'] = '<div class="views-field-field-endowed-title-appointment">[field_endowed_title_appointment-title]</div>';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'fieldable_panels_pane',
        ),
      ),
    ),
  );
  /* Field: Content: Background Color */
  $handler->display->display_options['fields']['field_background_color']['id'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['table'] = 'field_data_field_background_color';
  $handler->display->display_options['fields']['field_background_color']['field'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['label'] = '';
  $handler->display->display_options['fields']['field_background_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_background_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_color']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_background_color']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="bg-[field_background_color]">
<div class="views-field-field-image-single-public">[field_image_single_public]</div>
<div class="views-field-field-quote">[field_quote]</div>
<div class="views-field-title">[title]</div>
[field_degree_year]
[field_endowed_title_appointment]
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices' => 'voices',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_person_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator_id'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['label'] = 'Person Type';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['identifier'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_person_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Industry (field_industry) */
  $handler->display->display_options['filters']['field_industry_tid']['id'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['table'] = 'field_data_field_industry';
  $handler->display->display_options['filters']['field_industry_tid']['field'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator_id'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['identifier'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_industry_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_industry_tid']['vocabulary'] = 'industry';
  $handler->display->display_options['filters']['field_industry_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Region of Interest (field_region_of_interest) */
  $handler->display->display_options['filters']['field_region_of_interest_tid']['id'] = 'field_region_of_interest_tid';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['table'] = 'field_data_field_region_of_interest';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['field'] = 'field_region_of_interest_tid';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_of_interest_tid']['expose']['operator_id'] = 'field_region_of_interest_tid_op';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['expose']['operator'] = 'field_region_of_interest_tid_op';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['expose']['identifier'] = 'field_region_of_interest_tid';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_region_of_interest_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_region_of_interest_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['vocabulary'] = 'region_interest';
  $handler->display->display_options['filters']['field_region_of_interest_tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Voices: Multiple Criteria + Filters';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['set_view_mode'] = 0;
  $handler->display->display_options['allow']['set_style_plugin'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_person_type_tid' => '',
      'field_industry_tid' => 'exposed',
      'field_region_of_interest_tid' => 'exposed',
    ),
  );

  /* Display: Voices List with CTA */
  $handler = $view->new_display('panel_pane', 'Voices List with CTA', 'voices_list_cta_panel_pane');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'faculty relation';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'image_style' => '566x_variable',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = '';
  $handler->display->display_options['fields']['field_degree_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['text'] = '<div class="views-field-field-degree-year">[field_degree_year]</div>';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'fieldable_panels_pane',
        ),
      ),
    ),
  );
  /* Field: Faculty Endowed Title */
  $handler->display->display_options['fields']['field_endowed_title_appointment']['id'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['table'] = 'field_data_field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['field'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['ui_name'] = 'Faculty Endowed Title';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['label'] = '';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['text'] = '<div class="views-field-field-endowed-title-appointment">[field_endowed_title_appointment-title]</div>';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'fieldable_panels_pane',
        ),
      ),
    ),
  );
  /* Field: Content: Background Color */
  $handler->display->display_options['fields']['field_background_color']['id'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['table'] = 'field_data_field_background_color';
  $handler->display->display_options['fields']['field_background_color']['field'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['label'] = '';
  $handler->display->display_options['fields']['field_background_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_background_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_color']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_background_color']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="bg-[field_background_color]">
<div class="views-field-field-image-single-public">[field_image_single_public]</div>
<div class="views-field-field-quote">[field_quote]</div>
<div class="views-field-title">[title]</div>
[field_degree_year]
[field_endowed_title_appointment]
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices' => 'voices',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_person_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator_id'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['label'] = 'Type of Voice';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['identifier'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_person_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Circle (Centers and Research Programs) (field_centers_research_programs) */
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['id'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['table'] = 'field_data_field_centers_research_programs';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['field'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator_id'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['label'] = 'Circle Affiliation';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['identifier'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['vocabulary'] = 'centers_research_programs';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: Keywords (field_tag) */
  $handler->display->display_options['filters']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['filters']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tag_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator_id'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['identifier'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['vocabulary'] = 'tag';
  $handler->display->display_options['filters']['field_tag_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Academic Area (field_academic_area_single) */
  $handler->display->display_options['filters']['field_academic_area_single_tid']['id'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['table'] = 'field_data_field_academic_area_single';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['field'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['operator_id'] = 'field_academic_area_single_tid_op';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['label'] = 'Academic Area';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['operator'] = 'field_academic_area_single_tid_op';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['identifier'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_academic_area_single_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['vocabulary'] = 'academic_area';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Field of Study (field_field_of_study) */
  $handler->display->display_options['filters']['field_field_of_study_tid']['id'] = 'field_field_of_study_tid';
  $handler->display->display_options['filters']['field_field_of_study_tid']['table'] = 'field_data_field_field_of_study';
  $handler->display->display_options['filters']['field_field_of_study_tid']['field'] = 'field_field_of_study_tid';
  $handler->display->display_options['filters']['field_field_of_study_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_field_of_study_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_field_of_study_tid']['expose']['operator_id'] = 'field_field_of_study_tid_op';
  $handler->display->display_options['filters']['field_field_of_study_tid']['expose']['label'] = 'Field of Study';
  $handler->display->display_options['filters']['field_field_of_study_tid']['expose']['operator'] = 'field_field_of_study_tid_op';
  $handler->display->display_options['filters']['field_field_of_study_tid']['expose']['identifier'] = 'field_field_of_study_tid';
  $handler->display->display_options['filters']['field_field_of_study_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_field_of_study_tid']['group_info']['label'] = 'Field of Study (field_field_of_study)';
  $handler->display->display_options['filters']['field_field_of_study_tid']['group_info']['identifier'] = 'field_field_of_study_tid';
  $handler->display->display_options['filters']['field_field_of_study_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_field_of_study_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_field_of_study_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_field_of_study_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_field_of_study_tid']['vocabulary'] = 'field_of_study';
  $handler->display->display_options['filters']['field_field_of_study_tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Voices: Multiple Criteria with CTA';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['set_view_mode'] = 0;
  $handler->display->display_options['allow']['set_style_plugin'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_person_type_tid' => '',
      'field_centers_research_programs_tid' => '',
      'field_tag_tid' => '',
      'field_academic_area_single_tid' => '',
      'field_field_of_study_tid' => '',
    ),
  );

  /* Display: Voices Single Teaser */
  $handler = $view->new_display('panel_pane', 'Voices Single Teaser', 'voices_single_teaser_pane');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'image_style' => '566x_variable',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = '';
  $handler->display->display_options['fields']['field_degree_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['text'] = '<div class="views-field-field-degree-year">[field_degree_year]</div>';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'file',
        ),
      ),
    ),
  );
  /* Field: Content: Endowed Title OR Appointment */
  $handler->display->display_options['fields']['field_endowed_title_appointment']['id'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['table'] = 'field_data_field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['field'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['label'] = '';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['text'] = '<div class="views-field-field-endowed-title-appointment">[field_endowed_title_appointment-title]</div>';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'fieldable_panels_pane',
        ),
      ),
    ),
  );
  /* Field: Content: Background Color */
  $handler->display->display_options['fields']['field_background_color']['id'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['table'] = 'field_data_field_background_color';
  $handler->display->display_options['fields']['field_background_color']['field'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['label'] = '';
  $handler->display->display_options['fields']['field_background_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_background_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_color']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_background_color']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="bg-[field_background_color]">
<div class="views-field-field-image-single-public">[field_image_single_public]</div>
<div class="views-field-field-quote">[field_quote]</div>
<div class="views-field-title">[title]</div>
[field_degree_year]
[field_endowed_title_appointment]
</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_voices_full_name']['id'] = 'field_voices_full_name';
  $handler->display->display_options['fields']['field_voices_full_name']['table'] = 'field_data_field_voices_full_name';
  $handler->display->display_options['fields']['field_voices_full_name']['field'] = 'field_voices_full_name';
  $handler->display->display_options['fields']['field_voices_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_voices_full_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voices_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_voices_full_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices' => 'voices',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Full Name (field_voices_full_name) */
  $handler->display->display_options['filters']['field_voices_full_name_value']['id'] = 'field_voices_full_name_value';
  $handler->display->display_options['filters']['field_voices_full_name_value']['table'] = 'field_data_field_voices_full_name';
  $handler->display->display_options['filters']['field_voices_full_name_value']['field'] = 'field_voices_full_name_value';
  $handler->display->display_options['filters']['field_voices_full_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_voices_full_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_voices_full_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['operator_id'] = 'field_voices_full_name_value_op';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['label'] = 'Full Name';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['operator'] = 'field_voices_full_name_value_op';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['identifier'] = 'field_voices_full_name_value';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_field'] = 'field_voices_full_name';
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_voices_full_name_value']['expose']['autocomplete_dependent'] = 1;
  $handler->display->display_options['pane_title'] = 'Voices: Single Teaser';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['set_view_mode'] = 0;
  $handler->display->display_options['allow']['set_style_plugin'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_person_type_tid' => '',
    ),
  );

  /* Display: Voices All List with CTA */
  $handler = $view->new_display('panel_pane', 'Voices All List with CTA', 'all_voices_list_panel_pane');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'faculty relation';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'image_style' => '566x_variable',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = '';
  $handler->display->display_options['fields']['field_degree_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_degree_year']['alter']['text'] = '<div class="views-field-field-degree-year">[field_degree_year]</div>';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'fieldable_panels_pane',
        ),
      ),
    ),
  );
  /* Field: Faculty Endowed Title */
  $handler->display->display_options['fields']['field_endowed_title_appointment']['id'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['table'] = 'field_data_field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['field'] = 'field_endowed_title_appointment';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['ui_name'] = 'Faculty Endowed Title';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['label'] = '';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['alter']['text'] = '<div class="views-field-field-endowed-title-appointment">[field_endowed_title_appointment-title]</div>';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_endowed_title_appointment']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_endowed_title_appointment']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'fieldable_panels_pane',
        ),
      ),
    ),
  );
  /* Field: Content: Background Color */
  $handler->display->display_options['fields']['field_background_color']['id'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['table'] = 'field_data_field_background_color';
  $handler->display->display_options['fields']['field_background_color']['field'] = 'field_background_color';
  $handler->display->display_options['fields']['field_background_color']['label'] = '';
  $handler->display->display_options['fields']['field_background_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_background_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_color']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_background_color']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="bg-[field_background_color]">
<div class="views-field-field-image-single-public">[field_image_single_public]</div>
<div class="views-field-field-quote">[field_quote]</div>
<div class="views-field-title">[title]</div>
[field_degree_year]
[field_endowed_title_appointment]
</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices' => 'voices',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_person_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator_id'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['label'] = 'Type of Voice';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['operator'] = 'field_person_type_tid_op';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['identifier'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    71 => 0,
    216 => 0,
    31 => 0,
    21 => 0,
    151 => 0,
    241 => 0,
    61 => 0,
    56 => 0,
    66 => 0,
    16 => 0,
    171 => 0,
    256 => 0,
    326 => 0,
    201 => 0,
    221 => 0,
    146 => 0,
    246 => 0,
    226 => 0,
    36 => 0,
    231 => 0,
    41 => 0,
    236 => 0,
    91 => 0,
    26 => 0,
    136 => 0,
    86 => 0,
    96 => 0,
    81 => 0,
    106 => 0,
    116 => 0,
    51 => 0,
    46 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_person_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Voices: Single Criteria with CTA';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['set_view_mode'] = 0;
  $handler->display->display_options['allow']['set_style_plugin'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_person_type_tid' => '',
      'field_centers_research_programs_tid' => '',
      'field_tag_tid' => '',
      'field_academic_area_single_tid' => '',
      'field_field_of_study_tid' => '',
    ),
  );
  $export['voices_filters'] = $view;

  return $export;
}
