<?php

/**
 * @file
 * Listing bean plugin.
 */

class StanfordImageCard extends BeanPlugin {

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    drupal_add_css(drupal_get_path('module', 'stanford_bean_extras') . '/css/stanford_bean_extras.css');
    $img_uri = $bean->field_s_image_card_image['und'][0]['uri'];
    $img = theme('image_style', array('style_name' => 'image-card', 'path' => $img_uri));
    $link_title = $bean->field_s_image_card_link['und'][0]['title'];
    $link_url = $bean->field_s_image_card_link['und'][0]['url'];
    $markup .= "<div class='container'>";
    $markup .= "<div class='stanford-image-card'>";
    $markup .= "<a href='" . $link_url . "'>";
    $markup .=  $img;
    $markup .= "<span class='stanford-image-card-title'>";
    $markup .= "<h3>" . $link_title . "</h3>";
    $markup .= "</span>";
    $markup .= "</a>";
    $markup .= "</div>";
    $markup .= "</div>";

    $content['#markup'] = $markup;

    return $content;
  }
}
