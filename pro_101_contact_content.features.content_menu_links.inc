<?php
/**
 * @file
 * pro_101_contact_content.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function pro_101_contact_content_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/32
  $menu_links['main-menu:node/32'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/contact',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');


  return $menu_links;
}
