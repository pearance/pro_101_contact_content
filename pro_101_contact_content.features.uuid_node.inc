<?php
/**
 * @file
 * pro_101_contact_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function pro_101_contact_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Contact',
  'log' => '',
  'status' => '1',
  'comment' => '0',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '4fb5bb8b-000b-07c4-f116-3edd834eee22',
  'type' => 'webform',
  'language' => 'und',
  'created' => '1336098439',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'db1c0d1e-48a8-28c4-4994-4057d95e72c3',
  'revision_uid' => '0',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Contact</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<h2>Contact</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '19',
    'confirmation' => '<p style="text-align: center;">Your message has been sent successfully.<br />Thank you for contacting us.<br />We will respond shortly.</p>',
    'confirmation_format' => 'plain_text',
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '1',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => 'Inquire',
    'submit_limit' => '3',
    'submit_interval' => '3600',
    'total_submit_limit' => '10',
    'total_submit_interval' => '3600',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      1 => array(
        'nid' => '19',
        'eid' => '1',
        'email' => 'fontaine.cook@pearance.com',
        'subject' => '3',
        'from_name' => '1',
        'from_address' => '2',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => '0',
        'attachments' => '0',
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 19,
        'cid' => '1',
        'pid' => '0',
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'maxlength' => '60',
          'conditional_operator' => '=',
          'width' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '0',
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 19,
        'cid' => '2',
        'pid' => '0',
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '%useremail',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '1',
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 19,
        'cid' => '3',
        'pid' => '0',
        'form_key' => 'subject',
        'name' => 'Subject',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '2',
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 19,
        'cid' => '4',
        'pid' => '0',
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '3',
        'page_num' => 1,
      ),
    ),
  ),
  'machine_name' => 'contact',
  'name' => 'Developer',
  'picture' => '0',
  'data' => 'a:2:{s:12:"admin_select";s:10:"admin_menu";s:7:"overlay";i:1;}',
  'date' => '2012-05-03 22:27:19 -0400',
);
  return $nodes;
}
