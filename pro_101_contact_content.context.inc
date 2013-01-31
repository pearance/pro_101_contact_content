<?php
/**
 * @file
 * pro_101_contact_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_contact_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'defaultcontent' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-contact_image' => array(
          'module' => 'nodeblock',
          'delta' => 'contact_image',
          'region' => 'main_sidebar_1',
          'weight' => 0,
        ),
        'contactinfo-hcard' => array(
          'module' => 'contactinfo',
          'delta' => 'hcard',
          'region' => 'main_sidebar_1',
          'weight' => 1,
        ),
        'nodeblock-googlemap' => array(
          'module' => 'nodeblock',
          'delta' => 'googlemap',
          'region' => 'main_sidebar_1',
          'weight' => 2,
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'double_column',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['contact'] = $context;

  return $export;
}
