<?php
/**
 * @file
 * gsb_feature_voices_display.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_voices_display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|voices|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'voices';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_single_public',
        1 => 'field_quote',
        2 => 'field_slideshow_style',
        3 => 'field_person_fac_single_ref',
        4 => 'field_full_name',
        5 => 'field_degree_year',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'ds_content',
      'field_quote' => 'ds_content',
      'field_slideshow_style' => 'ds_content',
      'field_person_fac_single_ref' => 'ds_content',
      'field_full_name' => 'ds_content',
      'field_degree_year' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|voices|teaser'] = $ds_layout;

  return $export;
}
