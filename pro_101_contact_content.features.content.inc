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
      'confirmation' => '<p style="text-align: center;">Your message has been sent successfully.<br />
	Thank you for contacting us.<br />
	We will respond shortly.</p>
',
      'confirmation_format' => 'plain_text',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => 'Inquire',
      'submit_limit' => '2',
      'submit_interval' => '3600',
      'total_submit_limit' => '10',
      'total_submit_interval' => '3600',
      'webform_ajax' => '1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(
        1 => array(
          'nid' => '3',
          'eid' => '1',
          'email' => '2',
          'subject' => '4',
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
            'width' => '46',
            'disabled' => 0,
            'unique' => 0,
            'maxlength' => '60',
            'conditional_operator' => '=',
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
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '46',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
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
          'form_key' => 'phone',
          'name' => 'Phone (optional)',
          'type' => 'phone',
          'value' => '',
          'extra' => array(
            'country' => 'ca',
            'phone_country_code' => 0,
            'phone_default_country_code' => '1',
            'phone_int_max_length' => '15',
            'ca_phone_separator' => '-',
            'ca_phone_parentheses' => 0,
            'title_display' => 'before',
            'private' => 0,
            'conditional_operator' => '=',
            'attributes' => array(),
            'description' => '',
            'conditional_component' => '',
            'conditional_values' => '',
            'width' => '',
            'disabled' => FALSE,
          ),
          'mandatory' => '0',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'subject',
          'name' => 'Subject',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '46',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '3',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'message',
          'name' => 'Message',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'cols' => '46',
            'rows' => '10',
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '4',
          'page_num' => 1,
        ),
        5 => array(
          'pid' => '0',
          'form_key' => 'disclaimer',
          'name' => 'Disclaimer',
          'type' => 'markup',
          'value' => '<p>
	Use of this form for communication with the firm or any individual member of the firm does NOT establish a professional-client relationship. Confidential or time-sensitive information should not be sent through this form.
</p>
',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'plain_text',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '5',
          'page_num' => 1,
        ),
      ),
    ),
    'link' => array(
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
      'identifier' => 'main-menu:node-name/contact',
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
          'value' => '<h2 class="block-title">General Inquiries</h2>

<p>Call us at 201-777-9999 or use the form below to schedule a free consultation with one of our lawyers. All cases are handled in a highly professional manner developed through years of skill and expertise.</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

  $content['contact_image'] = (object) array(
    'exported_path' => 'block/contact-image',
    'title' => 'Contact Image',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1359032024',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'contact_image',
    'body' => array(),
    'field_block_image' => array(
      'und' => array(
        0 => NULL,
      ),
    ),
  );

  $content['googlemap'] = (object) array(
    'exported_path' => 'block/map-directions',
    'title' => 'Map & Directions',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1359025025',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'googlemap',
    'body' => array(),
    'field_map_address' => array(
      'und' => array(
        0 => array(
          'value' => '35 Journal Square, Suite 426, Jersey City, NJ 07306',
          'format' => NULL,
          'safe_value' => '35 Journal Square, Suite 426, Jersey City, NJ 07306',
        ),
      ),
    ),
  );

return $content;
}
