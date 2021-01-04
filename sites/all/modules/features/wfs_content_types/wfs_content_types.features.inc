<?php

/**
 * @file
 * wfs_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wfs_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function wfs_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: 298x219_simplecrop.
  $styles['298x219_simplecrop'] = array(
    'label' => '298x219 SimpleCrop',
    'effects' => array(
      9 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 298,
          'height' => 219,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 420x338_simplecrop.
  $styles['420x338_simplecrop'] = array(
    'label' => '420x338 SimpleCrop',
    'effects' => array(
      9 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 338,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 500x530_simplecrop.
  $styles['500x530_simplecrop'] = array(
    'label' => '500x530 SimpleCrop',
    'effects' => array(
      11 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 530,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 540x350_simplecrop.
  $styles['540x350_simplecrop'] = array(
    'label' => '540x350 SimpleCrop',
    'effects' => array(
      13 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 350,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 945x350_simplecrop.
  $styles['945x350_simplecrop'] = array(
    'label' => '945x350 SimpleCrop',
    'effects' => array(
      15 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 945,
          'height' => 350,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: footer_image.
  $styles['footer_image'] = array(
    'label' => 'Footer image SimpleCrop',
    'effects' => array(
      6 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 0,
      ),
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 490,
          'height' => 77,
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: logo_simplecrop.
  $styles['logo_simplecrop'] = array(
    'label' => 'Logo SimpleCrop',
    'effects' => array(
      8 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: qr_code.
  $styles['qr_code'] = array(
    'label' => 'QR code',
    'effects' => array(),
  );

  // Exported image style: thumbnail_simplecrop.
  $styles['thumbnail_simplecrop'] = array(
    'label' => 'Thumbnail (100x100) SimpleCrop',
    'effects' => array(
      3 => array(
        'name' => 'simplecrop',
        'data' => array(),
        'weight' => 0,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function wfs_content_types_node_info() {
  $items = array(
    'contact_us' => array(
      'name' => t('Contact us'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage' => array(
      'name' => t('Homepage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'newsletter_detail' => array(
      'name' => t('Newsletter detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'official_event' => array(
      'name' => t('Official Event detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Regular page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'region' => array(
      'name' => t('Region page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'social_feed' => array(
      'name' => t('Social feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'winery' => array(
      'name' => t('Winery page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function wfs_content_types_paragraphs_info() {
  $items = array(
    '1_big_block_section' => array(
      'name' => '1 big block section',
      'bundle' => '1_big_block_section',
      'locked' => '1',
    ),
    '1_big_image' => array(
      'name' => '1 big image section',
      'bundle' => '1_big_image',
      'locked' => '1',
    ),
    '2_blocks_section' => array(
      'name' => '2 blocks section',
      'bundle' => '2_blocks_section',
      'locked' => '1',
    ),
    '2_images_section' => array(
      'name' => '2 images section',
      'bundle' => '2_images_section',
      'locked' => '1',
    ),
    'banner_item_section' => array(
      'name' => 'Banner item section',
      'bundle' => 'banner_item_section',
      'locked' => '1',
    ),
    'banner_section' => array(
      'name' => 'Banner section',
      'bundle' => 'banner_section',
      'locked' => '1',
    ),
    'brand_item' => array(
      'name' => 'Brand item',
      'bundle' => 'brand_item',
      'locked' => '1',
    ),
    'brands_section' => array(
      'name' => 'Brands section',
      'bundle' => 'brands_section',
      'locked' => '1',
    ),
    'contact_information_item' => array(
      'name' => 'Contact information item',
      'bundle' => 'contact_information_item',
      'locked' => '1',
    ),
    'contact_information_section' => array(
      'name' => 'Contact information section',
      'bundle' => 'contact_information_section',
      'locked' => '1',
    ),
    'dos_section' => array(
      'name' => 'DOs section',
      'bundle' => 'dos_section',
      'locked' => '1',
    ),
    'image_l_text_r' => array(
      'name' => 'Image L / Text R section',
      'bundle' => 'image_l_text_r',
      'locked' => '1',
    ),
    'importer_contact_item' => array(
      'name' => 'Importer contact item',
      'bundle' => 'importer_contact_item',
      'locked' => '1',
    ),
    'importers_contacts_section' => array(
      'name' => 'Importers contacts section',
      'bundle' => 'importers_contacts_section',
      'locked' => '1',
    ),
    'item' => array(
      'name' => 'Item',
      'bundle' => 'item',
      'locked' => '1',
    ),
    'news_events_section' => array(
      'name' => 'News & Events section',
      'bundle' => 'news_events_section',
      'locked' => '1',
    ),
    'table_section' => array(
      'name' => 'Table section',
      'bundle' => 'table_section',
      'locked' => '1',
    ),
    'text_l_image_r' => array(
      'name' => 'Text L / Image R section',
      'bundle' => 'text_l_image_r',
      'locked' => '1',
    ),
    'text_section' => array(
      'name' => 'Text section',
      'bundle' => 'text_section',
      'locked' => '1',
    ),
    'winery_contact_section' => array(
      'name' => 'Winery contact section',
      'bundle' => 'winery_contact_section',
      'locked' => '1',
    ),
  );
  return $items;
}
