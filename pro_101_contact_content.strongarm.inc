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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contactinfo';
  $strongarm->value = array(
    'type' => 'business',
    'fn_n' => array(
      'given-name' => 'John',
      'family-name' => 'Doe',
    ),
    'org' => 'Demo & Demo',
    'use_site_name' => 0,
    'tagline' => 'We represent your best interest.',
    'use_site_slogan' => 0,
    'adr' => array(
      'street-address' => '35 Journal Square Plaza',
      'locality' => 'Jersey City',
      'region' => 'NJ',
      'postal-code' => '07306',
      'country-name' => 'United States',
    ),
    'location' => array(
      'longitude' => '40.731178',
      'latitude' => '-74.06461',
    ),
    'phone' => array(
      'voice' => '201-777-9999',
      'fax' => '201-888-4444',
    ),
    'email' => 'johndoe@domain.com',
  );
  $export['contactinfo'] = $strongarm;

  return $export;
}
