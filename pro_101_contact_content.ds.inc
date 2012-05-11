<?php
/**
 * @file
 * pro_101_contact_content.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pro_101_contact_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'webform',
      ),
      'right' => array(
        0 => 'field_map_address',
        1 => 'field_title_graphic',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'webform' => 'left',
      'field_map_address' => 'right',
      'field_title_graphic' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|webform|default'] = $ds_layout;

  return $export;
}
