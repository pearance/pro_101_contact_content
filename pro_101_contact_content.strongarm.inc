<?php
/**
 * @file
 * pro_101_contact_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_contact_content_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contactinfo';
  $strongarm->value = array(
    'type' => 'personal',
    'fn_n' => array(
      'given-name' => '',
      'family-name' => '',
    ),
    'org' => '',
    'use_site_name' => 0,
    'tagline' => '',
    'adr' => array(
      'street-address' => '',
      'locality' => '',
      'region' => '',
      'postal-code' => '',
      'country-name' => '',
    ),
    'location' => array(
      'longitude' => '',
      'latitude' => '',
    ),
    'phone' => array(
      'voice' => '',
      'fax' => '',
    ),
    'email' => '',
  );
  $export['contactinfo'] = $strongarm;

  return $export;
}
