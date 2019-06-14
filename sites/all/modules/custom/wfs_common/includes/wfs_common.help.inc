<?php

/**
 * @file
 * Manages common properties functionality.
 */

/**
 * Parse from youku.
 *
 * @return string
 */
function wfs_common_youku_parse() {
  $type = 'youku';

  // Create DOM from URL.
  // $html = file_get_html('http://i.youku.com/i/UMzgwNTIzMjg4/videos'); // old account
  $html = file_get_html('https://i.youku.com/i/UNjUyMzE4NTUxMg==/videos');

  // Find all videos blocks.
  foreach($html->find('div.va') as $video) {
    $item['title'] = empty($video->find('div.v-meta-title', 0)->find('a', 0)->getAttribute('title'))
                    ? '<no-title>' 
                    : $video->find('div.v-meta-title', 0)->find('a', 0)->getAttribute('title');
    $item['desc'] = '';
    $item['href'] = str_replace('//', 'http://', $video->find('div.v-meta-title', 0)->find('a', 0)->getAttribute('href'));
    $date = $video->find('div.v-meta-entry', 0)->find('span.v-publishtime', 0)->plaintext;
    if (strpos($date, '昨天') !== FALSE) {
      $date = 'yesterday';
    }
    elseif (strpos($date, '小时前') !== FALSE) {
      $date = 'today';
    }
    $item['date'] = $date;
    $item['img_url'] = $video->find('div.v-thumb', 0)->find('img', 0)->getAttribute('src');

    $videos[] = $item;
  }

  foreach ($videos as $video) {
    if (!wfs_common_check_feed_exist($type, $video['title'], $video['date'])) {
      wfs_common_create_social_feed_node($type, $video);
    }
    // else {
    //   watchdog('wfs_common', t('Youku feed with title <b>@title</b> exist!', array('@title' => $video['title'])));
    // }
  }
}

/**
 * Check youku exist.
 *
 * @return bool
 */
function wfs_common_check_feed_exist($type, $title, $date) {
  $query = db_select('node', 'n');
  $query->condition('n.title', $title);
  $query->innerJoin('field_data_field_social_media_platform', 'field_smp', 'field_smp.entity_id = n.nid');
  $query->condition('field_smp.bundle', 'social_feed');
  $query->condition('field_smp.field_social_media_platform_value', $type);
  $query->fields('n', array('nid'));
  $feed = $query->execute()->fetchField();

  return empty($feed) ? FALSE : TRUE;
}

/**
 * Create social feed node.
 */
function wfs_common_create_social_feed_node($type, $fields) {
  // entity_create replaces the procedural steps in the first example of
  // creating a new object $node and setting its 'type' and uid property
  $values = array(
    'type' => 'social_feed',
    'uid' => 1,
    'status' => 1
  );
  $entity = entity_create('node', $values);

  // The entity is now created, but we have not yet simplified use of it.
  // Now create an entity_metadata_wrapper around the new node entity
  // to make getting and setting values easier
  $ewrapper = entity_metadata_wrapper('node', $entity);

  // Title.
  $ewrapper->title->set($fields['title']);

  // Description.
  $ewrapper->field_description->set(array('value' => $fields['desc']));

  // Type.
  $ewrapper->field_social_media_platform->set($type);

  // Link.
  $link = array(
    'url' => $fields['href'],
    'title' => $fields['href'],
    'attributes' => array()
  );
  $ewrapper->field_url->set($link);

  // Image.
  $image = file_get_contents($fields['img_url']);
  $file = file_save_data($image, 'public://' . basename('youku-thumbnail.jpg'), FILE_EXISTS_RENAME);
  // Flag that this file is permanent and should not be deleted.
  $file->status = FILE_STATUS_PERMANENT;
  // Save file object to the database.
  file_save($file);
  $file = (array) $file;
  // Get original x/y measurements for this image.
  $img_info = image_get_info(drupal_realpath($file['uri']));
  $file['width'] = $img_info['width'];
  $file['height'] = $img_info['height'];
  $ewrapper->field_image->set((array) $file);

  // Entity API cannot set date field values so the 'old' method must
  // be used
  $my_date = new DateTime($fields['date']);
  $entity->field_date[LANGUAGE_NONE][0] = array(
    'value' => date_format($my_date, 'Y-m-d'),
    'timezone' => 'UTC',
    'timezone_db' => 'UTC',
  );

  // Now just save the wrapper and the entity
  // There is some suggestion that the 'true' argument is necessary to
  // the entity save method to circumvent a bug in Entity API. If there is
  // such a bug, it almost certainly will get fixed, so make sure to check.
  $ewrapper->save();
}

/**
 * Increment.
 */
function wfs_common_increment($val, $increment = 2) {
  for ($i = 1; $i <= $increment; $i++) {
    $val++;
  }

  return $val;
}
