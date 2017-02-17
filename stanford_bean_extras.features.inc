<?php

/**
 * @file
 * stanford_bean_extras.features.inc
 */

 /**
 * Implements hook_bean_types_api_info().
 */
function stanford_bean_extras_bean_types_api_info($module = NULL, $api = NULL) {
  if ($module == "bean" && $api == "types") {
    return array("version" => "5");
  }
}

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_bean_extras_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function stanford_bean_extras_image_default_styles() {
  $styles = array();

  // Exported image style: image-card.
  $styles['image-card'] = array(
    'label' => 'image-card',
    'effects' => array(),
  );

  return $styles;
}
