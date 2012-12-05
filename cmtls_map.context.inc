<?php
/**
 * @file
 * cmtls_map.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cmtls_map_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cmtls_map_page';
  $context->description = 'Community Tools map page';
  $context->tag = 'CT map';
  $context->conditions = array(
    'cmtls_app_type' => array(
      'values' => array(
        'cmtls_map' => 'cmtls_map',
      ),
      'options' => array(
        'node_form' => '1',
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
        'views-cmtls_map-cmtls_map_block' => array(
          'module' => 'views',
          'delta' => 'cmtls_map-cmtls_map_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CT map');
  t('Community Tools map page');
  $export['cmtls_map_page'] = $context;

  return $export;
}
