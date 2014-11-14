<?php
/**
 * @file
 * stanford_program_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_program_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_program_service_node_info() {
  $items = array(
    'stanford_program_service' => array(
      'name' => t('Program/Service'),
      'base' => 'node_content',
      'description' => t('Cardinal at Work Programs and Services'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
