<?php
/**
 * @file
 * stanford_program_service.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_program_service_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'program_service_nodes';
  $context->description = 'Context for all Program/Service nodes';
  $context->tag = 'Programs and Services';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_program_service' => 'stanford_program_service',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_program_service-block' => array(
          'module' => 'views',
          'delta' => 'stanford_program_service-block',
          'region' => 'main_top',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all Program/Service nodes');
  t('Programs and Services');
  $export['program_service_nodes'] = $context;

  return $export;
}
