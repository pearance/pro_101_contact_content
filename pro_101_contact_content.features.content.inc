<?php
/**
 * @file
 * pro_101_contact_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_contact_content_content_defaults() {
  $content = array();

  $content['contact'] = (object) array(
    'exported_path' => 'contact',
    'webform' => array(
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
          'nid' => '12',
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
        0 => array(
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
        1 => array(
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
        2 => array(
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
        3 => array(
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
    'title' => 'Contact',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1336098439',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'contact',
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
  );

return $content;
}
