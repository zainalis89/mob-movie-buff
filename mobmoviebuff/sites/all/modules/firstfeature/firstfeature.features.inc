<?php
/**
 * @file
 * firstfeature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function firstfeature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function firstfeature_node_info() {
  $items = array(
    'movie' => array(
      'name' => t('Movie'),
      'base' => 'node_content',
      'description' => t('Content type for movie content of site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
