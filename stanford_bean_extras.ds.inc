<?php
/**
 * @file
 * image_card.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_bean_extras_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_image_card';
  $ds_view_mode->label = 'Stanford Image Card';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
  );
  $export['stanford_image_card'] = $ds_view_mode;

  return $export;
}
