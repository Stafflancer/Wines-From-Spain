<?php

/**
 * @file
 * wfs_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wfs_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-banner-field_exclude_title_from_display'.
  $field_instances['bean-banner-field_exclude_title_from_display'] = array(
    'bundle' => 'banner',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_exclude_title_from_display',
    'label' => 'Exclude title from display',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-banner-field_sections'.
  $field_instances['bean-banner-field_sections'] = array(
    'bundle' => 'banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'contact_information_section' => -1,
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'title_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'contact_information_section' => 8,
        'image_l_text_r' => 9,
        'news_events_section' => 10,
        'text_l_image_r' => 11,
        'text_section' => 12,
        'title_section' => 13,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-footer-field_copyright_icp_number'.
  $field_instances['bean-footer-field_copyright_icp_number'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_copyright_icp_number',
    'label' => 'Copyright + ICP number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-footer-field_other_logos'.
  $field_instances['bean-footer-field_other_logos'] = array(
    'bundle' => 'footer',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image_link_formatter',
        'settings' => array(
          'image_link' => 'field_urls',
          'image_style' => 'footer_image',
        ),
        'type' => 'image_link_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_other_logos',
    'label' => 'Other logos',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-footer-field_urls'.
  $field_instances['bean-footer-field_urls'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_urls',
    'label' => 'URLs',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-logo-field_image'.
  $field_instances['bean-logo-field_image'] = array(
    'bundle' => 'logo',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image_link_formatter',
        'settings' => array(
          'image_link' => 'field_url',
          'image_style' => 'logo_simplecrop',
        ),
        'type' => 'image_link_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'bean-logo-field_url'.
  $field_instances['bean-logo-field_url'] = array(
    'bundle' => 'logo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_brands-field_description'.
  $field_instances['field_collection_item-field_fc_brands-field_description'] = array(
    'bundle' => 'field_fc_brands',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_brands-field_image'.
  $field_instances['field_collection_item-field_fc_brands-field_image'] = array(
    'bundle' => 'field_fc_brands',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 115,
              'width' => 160,
            ),
            'ratio' => array(
              'height' => 115,
              'width' => 160,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_brands-field_title'.
  $field_instances['field_collection_item-field_fc_brands-field_title'] = array(
    'bundle' => 'field_fc_brands',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_importers_contacts-field_contact_person'.
  $field_instances['field_collection_item-field_fc_importers_contacts-field_contact_person'] = array(
    'bundle' => 'field_fc_importers_contacts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contact_person',
    'label' => 'Contact person:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_importers_contacts-field_email_address'.
  $field_instances['field_collection_item-field_fc_importers_contacts-field_email_address'] = array(
    'bundle' => 'field_fc_importers_contacts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_email_address',
    'label' => 'Email address:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_importers_contacts-field_importer_name'.
  $field_instances['field_collection_item-field_fc_importers_contacts-field_importer_name'] = array(
    'bundle' => 'field_fc_importers_contacts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_importer_name',
    'label' => 'Importer name:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_importers_contacts-field_telephone_number'.
  $field_instances['field_collection_item-field_fc_importers_contacts-field_telephone_number'] = array(
    'bundle' => 'field_fc_importers_contacts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_telephone_number',
    'label' => 'Telephone number:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_importers_contacts-field_website'.
  $field_instances['field_collection_item-field_fc_importers_contacts-field_website'] = array(
    'bundle' => 'field_fc_importers_contacts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_website',
    'label' => 'Website:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_winery_contact-field_contact_person'.
  $field_instances['field_collection_item-field_fc_winery_contact-field_contact_person'] = array(
    'bundle' => 'field_fc_winery_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contact_person',
    'label' => 'Contact person:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_winery_contact-field_email_address'.
  $field_instances['field_collection_item-field_fc_winery_contact-field_email_address'] = array(
    'bundle' => 'field_fc_winery_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_email_address',
    'label' => 'Email address:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_winery_contact-field_telephone_number'.
  $field_instances['field_collection_item-field_fc_winery_contact-field_telephone_number'] = array(
    'bundle' => 'field_fc_winery_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_telephone_number',
    'label' => 'Telephone number:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_winery_contact-field_website'.
  $field_instances['field_collection_item-field_fc_winery_contact-field_website'] = array(
    'bundle' => 'field_fc_winery_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_website',
    'label' => 'Website:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-contact_us-field_sections'.
  $field_instances['node-contact_us-field_sections'] = array(
    'bundle' => 'contact_us',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'contact_information_section' => 'contact_information_section',
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'contact_information_section' => 19,
        'image_l_text_r' => 8,
        'news_events_section' => 9,
        'text_l_image_r' => 10,
        'text_section' => 11,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_category'.
  $field_instances['node-event-field_category'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event-field_content_approval'.
  $field_instances['node-event-field_content_approval'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content_approval',
    'label' => 'Content approval',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'content_approval_field',
      'settings' => array(),
      'type' => 'content_approval',
      'weight' => 41,
    ),
    'widget_type' => 'content_approval',
  );

  // Exported field_instance: 'node-event-field_date'.
  $field_instances['node-event-field_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event-field_description'.
  $field_instances['node-event-field_description'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 64,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event-field_link'.
  $field_instances['node-event-field_link'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-event-field_main_image_homepage'.
  $field_instances['node-event-field_main_image_homepage'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '500x530_simplecrop',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image_homepage',
    'label' => 'Main image (homepage)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 530,
              'width' => 500,
            ),
            'ratio' => array(
              'height' => 530,
              'width' => 500,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_main_image_list'.
  $field_instances['node-event-field_main_image_list'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image_list',
    'label' => 'Main image (list)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 338,
              'width' => 460,
            ),
            'ratio' => array(
              'height' => 338,
              'width' => 460,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_province_text'.
  $field_instances['node-event-field_province_text'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_province_text',
    'label' => 'Province',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_share'.
  $field_instances['node-event-field_share'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'button_size' => 'small',
          'extra_css' => '',
        ),
        'type' => 'addthis_basic_button',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_share',
    'label' => 'Share',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-event-field_status'.
  $field_instances['node-event-field_status'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 'waits_approve',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-event-field_type'.
  $field_instances['node-event-field_type'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-event-field_winery'.
  $field_instances['node-event-field_winery'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_winery',
    'label' => 'Winery',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-homepage-field_sections'.
  $field_instances['node-homepage-field_sections'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => '1_big_block_section',
        '1_big_image' => -1,
        '2_blocks_section' => '2_blocks_section',
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'image_l_text_r' => -1,
        'news_events_section' => 'news_events_section',
        'text_l_image_r' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => -18,
        '1_big_image' => -17,
        '2_blocks_section' => -12,
        '2_images_section' => -16,
        'banner_item_section' => -11,
        'banner_section' => -20,
        'image_l_text_r' => -15,
        'news_events_section' => -19,
        'text_l_image_r' => -14,
        'text_section' => -13,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-news-field_content_approval'.
  $field_instances['node-news-field_content_approval'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content_approval',
    'label' => 'Content approval',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'content_approval_field',
      'settings' => array(),
      'type' => 'content_approval',
      'weight' => 43,
    ),
    'widget_type' => 'content_approval',
  );

  // Exported field_instance: 'node-news-field_date'.
  $field_instances['node-news-field_date'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-news-field_description'.
  $field_instances['node-news-field_description'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 26,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-news-field_image'.
  $field_instances['node-news-field_image'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-news-field_link'.
  $field_instances['node-news-field_link'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-news-field_link_title'.
  $field_instances['node-news-field_link_title'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_title',
    'label' => 'Link title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-news-field_main_image_homepage'.
  $field_instances['node-news-field_main_image_homepage'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '420x338_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image_homepage',
    'label' => 'Main image (homepage)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 338,
              'width' => 420,
            ),
            'ratio' => array(
              'height' => 338,
              'width' => 420,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-news-field_main_image_list'.
  $field_instances['node-news-field_main_image_list'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image_list',
    'label' => 'Main image (list)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 219,
              'width' => 298,
            ),
            'ratio' => array(
              'height' => 219,
              'width' => 298,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );
  
  // Exported field_instance: 'node-news-field_main_image_list'.
  $field_instances['node-article-detail-field_main_image_list'] = array(
    'bundle' => 'article-detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image_list',
    'label' => 'Main image (list)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 219,
              'width' => 298,
            ),
            'ratio' => array(
              'height' => 219,
              'width' => 298,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-news-field_share'.
  $field_instances['node-news-field_share'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'button_size' => 'small',
          'extra_css' => '',
        ),
        'type' => 'addthis_basic_button',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_share',
    'label' => 'Share',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-news-field_status'.
  $field_instances['node-news-field_status'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'value' => 'waits_approve',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-news-field_text'.
  $field_instances['node-news-field_text'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-news-field_winery'.
  $field_instances['node-news-field_winery'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_winery',
    'label' => 'Winery',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-newsletter_detail-field_date'.
  $field_instances['node-newsletter_detail-field_date'] = array(
    'bundle' => 'newsletter_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-newsletter_detail-field_description'.
  $field_instances['node-newsletter_detail-field_description'] = array(
    'bundle' => 'newsletter_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 68,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-newsletter_detail-field_file'.
  $field_instances['node-newsletter_detail-field_file'] = array(
    'bundle' => 'newsletter_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_url_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-newsletter_detail-field_image'.
  $field_instances['node-newsletter_detail-field_image'] = array(
    'bundle' => 'newsletter_detail',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 219,
              'width' => 298,
            ),
            'ratio' => array(
              'height' => 219,
              'width' => 298,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-newsletter_detail-field_share'.
  $field_instances['node-newsletter_detail-field_share'] = array(
    'bundle' => 'newsletter_detail',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addthis',
        'settings' => array(),
        'type' => 'addthis_disabled',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'button_size' => 'small',
          'extra_css' => '',
        ),
        'type' => 'addthis_basic_button',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_share',
    'label' => 'Share',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-official_event-field_category'.
  $field_instances['node-official_event-field_category'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-official_event-field_date'.
  $field_instances['node-official_event-field_date'] = array(
    'bundle' => 'official_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-official_event-field_description'.
  $field_instances['node-official_event-field_description'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 64,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-official_event-field_link'.
  $field_instances['node-official_event-field_link'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-official_event-field_link_title'.
  $field_instances['node-official_event-field_link_title'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_title',
    'label' => 'Link title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-official_event-field_main_image_homepage'.
  $field_instances['node-official_event-field_main_image_homepage'] = array(
    'bundle' => 'official_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '500x530_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image_homepage',
    'label' => 'Main image (homepage)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 530,
              'width' => 500,
            ),
            'ratio' => array(
              'height' => 530,
              'width' => 500,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-official_event-field_main_image_list'.
  $field_instances['node-official_event-field_main_image_list'] = array(
    'bundle' => 'official_event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image_list',
    'label' => 'Main image (list)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 338,
              'width' => 460,
            ),
            'ratio' => array(
              'height' => 338,
              'width' => 460,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-official_event-field_province_text'.
  $field_instances['node-official_event-field_province_text'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_province_text',
    'label' => 'Province',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-official_event-field_sections'.
  $field_instances['node-official_event-field_sections'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => '1_big_image',
        '2_blocks_section' => -1,
        '2_images_section' => '2_images_section',
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'contact_information_section' => -1,
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => 'text_section',
        'title_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'contact_information_section' => 8,
        'image_l_text_r' => 9,
        'news_events_section' => 10,
        'text_l_image_r' => 11,
        'text_section' => 12,
        'title_section' => 13,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-official_event-field_share'.
  $field_instances['node-official_event-field_share'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'button_size' => 'small',
          'extra_css' => '',
        ),
        'type' => 'addthis_basic_button',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_share',
    'label' => 'Share',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-official_event-field_type'.
  $field_instances['node-official_event-field_type'] = array(
    'bundle' => 'official_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-page-field_sections'.
  $field_instances['node-page-field_sections'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => '1_big_block_section',
        '1_big_image' => '1_big_image',
        '2_blocks_section' => -1,
        '2_images_section' => '2_images_section',
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'brand_item' => -1,
        'brands_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => 'image_l_text_r',
        'importer_contact_item' => -1,
        'importers_contacts_section' => -1,
        'item' => -1,
        'news_events_section' => -1,
        'table_section' => 'table_section',
        'text_l_image_r' => 'text_l_image_r',
        'text_section' => 'text_section',
        'winery_contact_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => -16,
        '1_big_image' => -19,
        '2_blocks_section' => -15,
        '2_images_section' => -20,
        'banner_item_section' => -14,
        'banner_section' => -22,
        'brand_item' => 9,
        'brands_section' => 8,
        'contact_information_item' => 10,
        'contact_information_section' => -13,
        'dos_section' => 12,
        'image_l_text_r' => -18,
        'importer_contact_item' => 15,
        'importers_contacts_section' => 14,
        'item' => 35,
        'news_events_section' => -12,
        'table_section' => 37,
        'text_l_image_r' => -17,
        'text_section' => -21,
        'winery_contact_section' => 19,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-region-field_banner_section'.
  $field_instances['node-region-field_banner_section'] = array(
    'bundle' => 'region',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner_section',
    'label' => 'Banner section',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'contact_information_item' => 8,
        'contact_information_section' => 9,
        'dos_section' => 10,
        'image_l_text_r' => 11,
        'news_events_section' => 12,
        'text_l_image_r' => 13,
        'text_section' => 14,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-region-field_description'.
  $field_instances['node-region-field_description'] = array(
    'bundle' => 'region',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-region-field_image'.
  $field_instances['node-region-field_image'] = array(
    'bundle' => 'region',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-region-field_sections'.
  $field_instances['node-region-field_sections'] = array(
    'bundle' => 'region',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'paragraphs_editor_preview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => 'dos_section',
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'contact_information_item' => 8,
        'contact_information_section' => 9,
        'dos_section' => 10,
        'image_l_text_r' => 11,
        'news_events_section' => 12,
        'text_l_image_r' => 13,
        'text_section' => 14,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-social_feed-field_date'.
  $field_instances['node-social_feed-field_date'] = array(
    'bundle' => 'social_feed',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'news_events',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-social_feed-field_description'.
  $field_instances['node-social_feed-field_description'] = array(
    'bundle' => 'social_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 26,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-social_feed-field_image'.
  $field_instances['node-social_feed-field_image'] = array(
    'bundle' => 'social_feed',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '298x219_simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 219,
              'width' => 298,
            ),
            'ratio' => array(
              'height' => 219,
              'width' => 298,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-social_feed-field_social_media_platform'.
  $field_instances['node-social_feed-field_social_media_platform'] = array(
    'bundle' => 'social_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_social_media_platform',
    'label' => 'Social media platform',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-social_feed-field_url'.
  $field_instances['node-social_feed-field_url'] = array(
    'bundle' => 'social_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-winery-field_banner_section'.
  $field_instances['node-winery-field_banner_section'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner_section',
    'label' => 'Banner section',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => 'banner_section',
        'brand_item' => -1,
        'brands_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'importer_contact_item' => -1,
        'importers_contacts_section' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'winery_contact_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'brand_item' => 9,
        'brands_section' => 8,
        'contact_information_item' => 10,
        'contact_information_section' => 11,
        'dos_section' => 12,
        'image_l_text_r' => 13,
        'importer_contact_item' => 15,
        'importers_contacts_section' => 14,
        'news_events_section' => 16,
        'text_l_image_r' => 17,
        'text_section' => 18,
        'winery_contact_section' => 19,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-winery-field_brands_section'.
  $field_instances['node-winery-field_brands_section'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Brands section is empty.',
          'fallback_format' => 'paragraphs_view',
          'fallback_settings' => array(
            'view_mode' => 'full',
          ),
        ),
        'type' => 'editable',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_brands_section',
    'label' => 'Brands',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'brand_item' => -1,
        'brands_section' => 'brands_section',
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'importer_contact_item' => -1,
        'importers_contacts_section' => -1,
        'item' => -1,
        'news_events_section' => -1,
        'table_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'winery_contact_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'brand_item' => 23,
        'brands_section' => 22,
        'contact_information_item' => 8,
        'contact_information_section' => 9,
        'dos_section' => 10,
        'image_l_text_r' => 11,
        'importer_contact_item' => 38,
        'importers_contacts_section' => 37,
        'item' => 39,
        'news_events_section' => 12,
        'table_section' => -40,
        'text_l_image_r' => 13,
        'text_section' => 14,
        'winery_contact_section' => -40,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-winery-field_do'.
  $field_instances['node-winery-field_do'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'DO is empty.',
          'fallback_format' => 'i18n_taxonomy_term_reference_plain',
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_do',
    'label' => 'DO',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-winery-field_fc_brands'.
  $field_instances['node-winery-field_fc_brands'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Brands are empty.',
          'fallback_format' => 'field_collection_fields',
          'fallback_settings' => array(
            'view_mode' => 'full',
          ),
        ),
        'type' => 'editable',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fc_brands',
    'label' => 'Brands',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-winery-field_fc_importers_contacts'.
  $field_instances['node-winery-field_fc_importers_contacts'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Contact of importers are empty.',
          'fallback_format' => 'field_collection_fields',
          'fallback_settings' => array(
            'view_mode' => 'full',
          ),
        ),
        'type' => 'editable',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fc_importers_contacts',
    'label' => 'Contact of importers',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-winery-field_fc_winery_contact'.
  $field_instances['node-winery-field_fc_winery_contact'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Contact of winery is empty.',
          'fallback_format' => 'field_collection_fields',
          'fallback_settings' => array(
            'view_mode' => 'full',
          ),
        ),
        'type' => 'editable',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fc_winery_contact',
    'label' => 'Contact of winery',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-winery-field_image'.
  $field_instances['node-winery-field_image'] = array(
    'bundle' => 'winery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Image is empty.',
          'fallback_format' => 'image',
          'fallback_settings' => array(
            'image_link' => '',
            'image_style' => 'auto_crop',
          ),
        ),
        'type' => 'editable',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'auto_crop',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-winery-field_importers_contacts'.
  $field_instances['node-winery-field_importers_contacts'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Importers contacts are empty.',
          'fallback_format' => 'paragraphs_view',
          'fallback_settings' => array(
            'view_mode' => 'full',
          ),
        ),
        'type' => 'editable',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_importers_contacts',
    'label' => 'Contact of importers',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'brand_item' => -1,
        'brands_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'importer_contact_item' => -1,
        'importers_contacts_section' => 'importers_contacts_section',
        'item' => -1,
        'news_events_section' => -1,
        'table_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'winery_contact_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'brand_item' => 9,
        'brands_section' => 8,
        'contact_information_item' => 10,
        'contact_information_section' => 11,
        'dos_section' => 12,
        'image_l_text_r' => 13,
        'importer_contact_item' => 32,
        'importers_contacts_section' => 31,
        'item' => -40,
        'news_events_section' => 14,
        'table_section' => -40,
        'text_l_image_r' => 15,
        'text_section' => 16,
        'winery_contact_section' => 17,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-winery-field_logo'.
  $field_instances['node-winery-field_logo'] = array(
    'bundle' => 'winery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Logo is empty.',
          'fallback_format' => 'image',
          'fallback_settings' => array(
            'image_link' => '',
            'image_style' => 'auto_crop_logo',
          ),
        ),
        'type' => 'editable',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'auto_crop_logo',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-winery-field_node_title'.
  $field_instances['node-winery-field_node_title'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Winery name is empty.',
          'fallback_format' => 'text_default',
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_node_title',
    'label' => 'Winery Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-winery-field_presentation'.
  $field_instances['node-winery-field_presentation'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Presentation is empty.',
          'fallback_format' => 'smart_trim_format',
          'fallback_settings' => array(
            'more_link' => 0,
            'more_text' => 'Read more',
            'trim_length' => 700,
            'trim_link' => 0,
            'trim_options' => array(
              'text' => 0,
            ),
            'trim_preserve_tags' => '',
            'trim_suffix' => '',
            'trim_type' => 'words',
          ),
        ),
        'type' => 'editable',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presentation',
    'label' => 'Presentation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-winery-field_status'.
  $field_instances['node-winery-field_status'] = array(
    'bundle' => 'winery',
    'default_value' => array(
      0 => array(
        'value' => 'waits_approve',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-winery-field_text'.
  $field_instances['node-winery-field_text'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Note text is empty.',
          'fallback_format' => 'text_default',
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text',
    'label' => 'Note:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-winery-field_winery_contact'.
  $field_instances['node-winery-field_winery_contact'] = array(
    'bundle' => 'winery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => 1,
          'click_to_edit_style' => 'button',
          'empty_text' => 'Winery contact is empty.',
          'fallback_format' => 'paragraphs_view',
          'fallback_settings' => array(
            'view_mode' => 'full',
          ),
        ),
        'type' => 'editable',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_winery_contact',
    'label' => 'Contact of winery',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'brand_item' => -1,
        'brands_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'importer_contact_item' => -1,
        'importers_contacts_section' => -1,
        'item' => -1,
        'news_events_section' => -1,
        'table_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'winery_contact_section' => 'winery_contact_section',
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'brand_item' => 9,
        'brands_section' => 8,
        'contact_information_item' => 10,
        'contact_information_section' => 11,
        'dos_section' => 12,
        'image_l_text_r' => 13,
        'importer_contact_item' => 31,
        'importers_contacts_section' => 30,
        'item' => -40,
        'news_events_section' => 14,
        'table_section' => -40,
        'text_l_image_r' => 15,
        'text_section' => 16,
        'winery_contact_section' => -32,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_big_block_section-field_image'.
  $field_instances['paragraphs_item-1_big_block_section-field_image'] = array(
    'bundle' => '1_big_block_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '945x350_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 350,
              'width' => 945,
            ),
            'ratio' => array(
              'height' => 350,
              'width' => 945,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_big_block_section-field_link'.
  $field_instances['paragraphs_item-1_big_block_section-field_link'] = array(
    'bundle' => '1_big_block_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_big_block_section-field_share'.
  $field_instances['paragraphs_item-1_big_block_section-field_share'] = array(
    'bundle' => '1_big_block_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'button_size' => 'small',
          'extra_css' => '',
        ),
        'type' => 'addthis_basic_button',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_share',
    'label' => 'Share',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_big_block_section-field_title_html'.
  $field_instances['paragraphs_item-1_big_block_section-field_title_html'] = array(
    'bundle' => '1_big_block_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title_html',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_big_image-field_image'.
  $field_instances['paragraphs_item-1_big_image-field_image'] = array(
    'bundle' => '1_big_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_blocks_section-field_image'.
  $field_instances['paragraphs_item-2_blocks_section-field_image'] = array(
    'bundle' => '2_blocks_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '540x350_simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 350,
              'width' => 540,
            ),
            'ratio' => array(
              'height' => 350,
              'width' => 540,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_blocks_section-field_link'.
  $field_instances['paragraphs_item-2_blocks_section-field_link'] = array(
    'bundle' => '2_blocks_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_blocks_section-field_link_2'.
  $field_instances['paragraphs_item-2_blocks_section-field_link_2'] = array(
    'bundle' => '2_blocks_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link_2',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_blocks_section-field_share'.
  $field_instances['paragraphs_item-2_blocks_section-field_share'] = array(
    'bundle' => '2_blocks_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'button_size' => 'small',
          'extra_css' => '',
        ),
        'type' => 'addthis_basic_button',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_share',
    'label' => 'Share',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_blocks_section-field_text'.
  $field_instances['paragraphs_item-2_blocks_section-field_text'] = array(
    'bundle' => '2_blocks_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_blocks_section-field_text_2'.
  $field_instances['paragraphs_item-2_blocks_section-field_text_2'] = array(
    'bundle' => '2_blocks_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text_2',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_images_section-field_image'.
  $field_instances['paragraphs_item-2_images_section-field_image'] = array(
    'bundle' => '2_images_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => TRUE,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_images_section-field_image_2'.
  $field_instances['paragraphs_item-2_images_section-field_image_2'] = array(
    'bundle' => '2_images_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image_2',
    'label' => 'Image 2',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => TRUE,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_item_section-field_image'.
  $field_instances['paragraphs_item-banner_item_section-field_image'] = array(
    'bundle' => 'banner_item_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_item_section-field_link'.
  $field_instances['paragraphs_item-banner_item_section-field_link'] = array(
    'bundle' => 'banner_item_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_item_section-field_share'.
  $field_instances['paragraphs_item-banner_item_section-field_share'] = array(
    'bundle' => 'banner_item_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'button_size' => 'small',
          'extra_css' => '',
        ),
        'type' => 'addthis_basic_button',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_share',
    'label' => 'Share',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_item_section-field_subtitle_html'.
  $field_instances['paragraphs_item-banner_item_section-field_subtitle_html'] = array(
    'bundle' => 'banner_item_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle_html',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_item_section-field_title_html'.
  $field_instances['paragraphs_item-banner_item_section-field_title_html'] = array(
    'bundle' => 'banner_item_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title_html',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_section-field_sections'.
  $field_instances['paragraphs_item-banner_section-field_sections'] = array(
    'bundle' => 'banner_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => 'banner_item_section',
        'banner_section' => -1,
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 16,
        'banner_section' => 6,
        'image_l_text_r' => 7,
        'news_events_section' => 8,
        'text_l_image_r' => 9,
        'text_section' => 10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-brand_item-field_description'.
  $field_instances['paragraphs_item-brand_item-field_description'] = array(
    'bundle' => 'brand_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-brand_item-field_image'.
  $field_instances['paragraphs_item-brand_item-field_image'] = array(
    'bundle' => 'brand_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => 115,
              'width' => 160,
            ),
            'ratio' => array(
              'height' => 115,
              'width' => 160,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-brand_item-field_title'.
  $field_instances['paragraphs_item-brand_item-field_title'] = array(
    'bundle' => 'brand_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-brands_section-field_brands_items'.
  $field_instances['paragraphs_item-brands_section-field_brands_items'] = array(
    'bundle' => 'brands_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_brands_items',
    'label' => 'Brands items',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'brand_item' => 'brand_item',
        'brands_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'importer_contact_item' => -1,
        'importers_contacts_section' => -1,
        'item' => -1,
        'news_events_section' => -1,
        'table_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'winery_contact_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'brand_item' => 24,
        'brands_section' => 8,
        'contact_information_item' => 9,
        'contact_information_section' => 10,
        'dos_section' => 11,
        'image_l_text_r' => 12,
        'importer_contact_item' => 39,
        'importers_contacts_section' => 38,
        'item' => 40,
        'news_events_section' => 13,
        'table_section' => -40,
        'text_l_image_r' => 14,
        'text_section' => 15,
        'winery_contact_section' => -40,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-contact_information_item-field_label_list'.
  $field_instances['paragraphs_item-contact_information_item-field_label_list'] = array(
    'bundle' => 'contact_information_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_field',
        'settings' => array(),
        'type' => 'i18n_list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_label_list',
    'label' => 'Label',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-contact_information_item-field_value'.
  $field_instances['paragraphs_item-contact_information_item-field_value'] = array(
    'bundle' => 'contact_information_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_value',
    'label' => 'Value',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-contact_information_section-field_items'.
  $field_instances['paragraphs_item-contact_information_section-field_items'] = array(
    'bundle' => 'contact_information_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_items',
    'label' => 'Items',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'contact_information' => -1,
        'contact_information_item' => 'contact_information_item',
        'contact_information_section' => -1,
        'image_l_text_r' => -1,
        'news_events_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'contact_information' => 8,
        'contact_information_item' => 9,
        'contact_information_section' => 10,
        'image_l_text_r' => 11,
        'news_events_section' => 12,
        'text_l_image_r' => 13,
        'text_section' => 14,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-contact_information_section-field_text'.
  $field_instances['paragraphs_item-contact_information_section-field_text'] = array(
    'bundle' => 'contact_information_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-contact_information_section-field_title_html'.
  $field_instances['paragraphs_item-contact_information_section-field_title_html'] = array(
    'bundle' => 'contact_information_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title_html',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-dos_section-field_description'.
  $field_instances['paragraphs_item-dos_section-field_description'] = array(
    'bundle' => 'dos_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-dos_section-field_title_html'.
  $field_instances['paragraphs_item-dos_section-field_title_html'] = array(
    'bundle' => 'dos_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title_html',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_l_text_r-field_image'.
  $field_instances['paragraphs_item-image_l_text_r-field_image'] = array(
    'bundle' => 'image_l_text_r',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_l_text_r-field_subtitle'.
  $field_instances['paragraphs_item-image_l_text_r-field_subtitle'] = array(
    'bundle' => 'image_l_text_r',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_l_text_r-field_text'.
  $field_instances['paragraphs_item-image_l_text_r-field_text'] = array(
    'bundle' => 'image_l_text_r',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-importer_contact_item-field_contact_person'.
  $field_instances['paragraphs_item-importer_contact_item-field_contact_person'] = array(
    'bundle' => 'importer_contact_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_contact_person',
    'label' => 'Contact person:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-importer_contact_item-field_email_address'.
  $field_instances['paragraphs_item-importer_contact_item-field_email_address'] = array(
    'bundle' => 'importer_contact_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_email_address',
    'label' => 'Email address:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-importer_contact_item-field_importer_name'.
  $field_instances['paragraphs_item-importer_contact_item-field_importer_name'] = array(
    'bundle' => 'importer_contact_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_importer_name',
    'label' => 'Importer name:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-importer_contact_item-field_telephone_number'.
  $field_instances['paragraphs_item-importer_contact_item-field_telephone_number'] = array(
    'bundle' => 'importer_contact_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_telephone_number',
    'label' => 'Telephone number:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-importer_contact_item-field_website'.
  $field_instances['paragraphs_item-importer_contact_item-field_website'] = array(
    'bundle' => 'importer_contact_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_website',
    'label' => 'Website:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-importers_contacts_section-field_importers_contacts_items'.
  $field_instances['paragraphs_item-importers_contacts_section-field_importers_contacts_items'] = array(
    'bundle' => 'importers_contacts_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_importers_contacts_items',
    'label' => 'Importers contacts items',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'brand_item' => -1,
        'brands_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'importer_contact_item' => 'importer_contact_item',
        'importers_contacts_section' => -1,
        'item' => -1,
        'news_events_section' => -1,
        'table_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'winery_contact_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'brand_item' => 9,
        'brands_section' => 8,
        'contact_information_item' => 10,
        'contact_information_section' => 11,
        'dos_section' => 12,
        'image_l_text_r' => 13,
        'importer_contact_item' => 33,
        'importers_contacts_section' => 14,
        'item' => -40,
        'news_events_section' => 15,
        'table_section' => -40,
        'text_l_image_r' => 16,
        'text_section' => 17,
        'winery_contact_section' => 18,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-item-field_label'.
  $field_instances['paragraphs_item-item-field_label'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_label',
    'label' => 'Label',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-item-field_text'.
  $field_instances['paragraphs_item-item-field_text'] = array(
    'bundle' => 'item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-news_events_section-field_events'.
  $field_instances['paragraphs_item-news_events_section-field_events'] = array(
    'bundle' => 'news_events_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_events',
    'label' => 'Events',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-news_events_section-field_news'.
  $field_instances['paragraphs_item-news_events_section-field_news'] = array(
    'bundle' => 'news_events_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_news',
    'label' => 'News',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-table_section-field_items'.
  $field_instances['paragraphs_item-table_section-field_items'] = array(
    'bundle' => 'table_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_items',
    'label' => 'Items',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_big_block_section' => -1,
        '1_big_image' => -1,
        '2_blocks_section' => -1,
        '2_images_section' => -1,
        'banner_item_section' => -1,
        'banner_section' => -1,
        'brand_item' => -1,
        'brands_section' => -1,
        'contact_information_item' => -1,
        'contact_information_section' => -1,
        'dos_section' => -1,
        'image_l_text_r' => -1,
        'importer_contact_item' => -1,
        'importers_contacts_section' => -1,
        'item' => 'item',
        'news_events_section' => -1,
        'table_section' => -1,
        'text_l_image_r' => -1,
        'text_section' => -1,
        'winery_contact_section' => -1,
      ),
      'bundle_weights' => array(
        '1_big_block_section' => 2,
        '1_big_image' => 3,
        '2_blocks_section' => 4,
        '2_images_section' => 5,
        'banner_item_section' => 6,
        'banner_section' => 7,
        'brand_item' => 9,
        'brands_section' => 8,
        'contact_information_item' => 10,
        'contact_information_section' => 11,
        'dos_section' => 12,
        'image_l_text_r' => 13,
        'importer_contact_item' => 15,
        'importers_contacts_section' => 14,
        'item' => 36,
        'news_events_section' => 16,
        'table_section' => 17,
        'text_l_image_r' => 18,
        'text_section' => 19,
        'winery_contact_section' => 20,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-table_section-field_title'.
  $field_instances['paragraphs_item-table_section-field_title'] = array(
    'bundle' => 'table_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_l_image_r-field_image'.
  $field_instances['paragraphs_item-text_l_image_r-field_image'] = array(
    'bundle' => 'text_l_image_r',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'simplecrop',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => '',
              'width' => '',
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 100,
              'width' => 100,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'cropped_image',
          'source' => array(
            'scale' => array(
              'height' => 350,
              'width' => 350,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_l_image_r-field_subtitle'.
  $field_instances['paragraphs_item-text_l_image_r-field_subtitle'] = array(
    'bundle' => 'text_l_image_r',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_l_image_r-field_text'.
  $field_instances['paragraphs_item-text_l_image_r-field_text'] = array(
    'bundle' => 'text_l_image_r',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_section-field_text'.
  $field_instances['paragraphs_item-text_section-field_text'] = array(
    'bundle' => 'text_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-winery_contact_section-field_contact_person'.
  $field_instances['paragraphs_item-winery_contact_section-field_contact_person'] = array(
    'bundle' => 'winery_contact_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_contact_person',
    'label' => 'Contact person:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-winery_contact_section-field_email_address'.
  $field_instances['paragraphs_item-winery_contact_section-field_email_address'] = array(
    'bundle' => 'winery_contact_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_email_address',
    'label' => 'Email address:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-winery_contact_section-field_telephone_number'.
  $field_instances['paragraphs_item-winery_contact_section-field_telephone_number'] = array(
    'bundle' => 'winery_contact_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_telephone_number',
    'label' => 'Telephone number:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-winery_contact_section-field_website'.
  $field_instances['paragraphs_item-winery_contact_section-field_website'] = array(
    'bundle' => 'winery_contact_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_website',
    'label' => 'Website:',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_winery_name'.
  $field_instances['user-user-field_winery_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_winery_name',
    'label' => 'Winery name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner section');
  t('Brands');
  t('Brands items');
  t('Category');
  t('Contact of importers');
  t('Contact of winery');
  t('Contact person:');
  t('Content approval');
  t('Copyright + ICP number');
  t('DO');
  t('Date');
  t('Description');
  t('Email address:');
  t('Events');
  t('Exclude title from display');
  t('File');
  t('Image');
  t('Image 2');
  t('Importer name:');
  t('Importers contacts items');
  t('Items');
  t('Label');
  t('Link');
  t('Link title');
  t('Logo');
  t('Main image (homepage)');
  t('Main image (list)');
  t('News');
  t('Note:');
  t('Other logos');
  t('Presentation');
  t('Province');
  t('Sections');
  t('Share');
  t('Social media platform');
  t('Status');
  t('Subtitle');
  t('Telephone number:');
  t('Text');
  t('Title');
  t('Type');
  t('URL');
  t('URLs');
  t('Value');
  t('Website:');
  t('Winery');
  t('Winery Name');
  t('Winery name');

  return $field_instances;
}
