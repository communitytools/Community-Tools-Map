<?php
/**
 * @file
 * cmtls_map.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function cmtls_map_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'CT Map';
  $context->description = 'Community Tools map';
  $context->tag = 'cmtls';
  $context->conditions = array(
    'cmtls_app_type' => array(
      'values' => array(
        'cmtls_map' => 'cmtls_map',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node' => array(
      'values' => array(
        'cmtls_app' => 'cmtls_app',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cmtls_map-block_1' => array(
          'module' => 'views',
          'delta' => 'cmtls_map-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Community Tools map');
  t('cmtls');
  $export['CT Map'] = $context;

  return $export;
}
