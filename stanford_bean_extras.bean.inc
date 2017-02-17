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

/**
 * Implements hook_bean_types().
 */
function stanford_bean_extras_bean_types() {
  $plugins = array();
  $plugin_path = drupal_get_path('module', 'stanford_bean_extras') . '/plugins/bean';
  $plugins['stanford_image_card'] = array(
    'name' => 'stanford_image_card',
    'label' => 'stanford_image_card',
    'api_version' => 5,
    'description' => 'Stanford Image Card provides an image, title and url.',
    'handler' => array(
      'class' => 'StanfordImageCard',
      'parent' => 'bean',
    ),
    'path' => $plugin_path,
    'file' => 'StanfordImageCard.class.php',
  );
  return $plugins;
}
