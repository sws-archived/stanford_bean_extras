<?php
/**
 * @file
 * stanford_bean_extras.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function stanford_bean_extras_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'stanford_image_card';
  $bean_type->label = 'stanford_image_card';
  $bean_type->options = '';
  $bean_type->description = 'Stanford Image Card provides an image, title and url.';
  $export['stanford_image_card'] = $bean_type;
  
  

  return $export;
}
