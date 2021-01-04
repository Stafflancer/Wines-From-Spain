<?php

/**
 * @file
 * Manages common properties functionality.
 */

 /**
 * @file
 * Manages common properties functionality.
 */
function wfs_registration_send_mails_after_node_insert_or_submit($node) {
  global $base_url;

  // Replace tokens.
  $tokens = array(
    '[edit-link]', 
    '[type]',
    '[wfs-logo]'
  );
  $replaces = array(
    l(t('Edit link'), $base_url . '/node/' . $node->nid . '/edit'),
    $node->type,
    WFS_LOGO_IMG
  );

  // Send mail need approve.
  $admin = user_load(1);
  $mail_to = $admin->mail;
  wfs_registration_send_mail('email_need_approve', $mail_to, $tokens, $replaces);

  // Send confirmation email when user SUBMIT information.
  $author = user_load($node->uid);
  $mail_to = $author->mail;
  wfs_registration_send_mail('email_after_user_submitet_information', $mail_to, $tokens, $replaces);
}

/**
 * Returns a mail string for a variable name.
 *
 * Used by user_mail() and the settings forms to retrieve strings.
 */
function wfs_registration_user_mail_text($key, $language = NULL, $variables = array(), $replace = TRUE) {
  $langcode = isset($language) ? $language->language : NULL;

  if ($admin_setting = variable_get($key, FALSE)) {
    // An admin setting overrides the default string.
    $text = t($admin_setting);
  }
  else {
    // No override, return default string.
    switch ($key) {
    	// Confirmation email when user SUBMIT information.
    	case 'email_after_user_submitet_information_subject':
        $text = t('Your information has been received.', array(), array('langcode' => $langcode));
        break;
     	case 'email_after_user_submitet_information_body':
        $text = t('Your information has been received. It will be revised to verify its adequacy with the target of the campaign and verified with the winery. You will be notified once it has been approved/rejected. Thank you.', array(), array('langcode' => $langcode));
        break;
      // Confirmation email when user information has been published.
    	case 'email_after_user_information_published_subject':
        $text = t('Your information has been approved and it is now published in the Wines from Spain.', array(), array('langcode' => $langcode));
        break;
     	case 'email_after_user_information_published_body':
        $text = t('Your information has been approved and it is now published in the Wines from Spain website (www.winesfromspain.org.cn). Thank you', array(), array('langcode' => $langcode));
        break;
      // Reason.
      case 'email_reason_subject':
        $text = t('You need edit your [type] by reason.', array(), array('langcode' => $langcode));
        break;
      case 'email_reason_body':
        $text = t('Reason: [reason] [edit-link]', array(), array('langcode' => $langcode));
        break;
      case 'email_need_approve_subject':
        $text = t('Need [type] approval.', array(), array('langcode' => $langcode));
        break;
      case 'email_need_approve_body':
        $text = t('[edit-link]', array(), array('langcode' => $langcode));
        break;
      case 'wfs_registration_register_pending_approval_admin_subject':
        $text = t('Account details for [user:name] at [site:name] (pending admin approval)', array(), array('langcode' => $langcode));
        break;
      case 'wfs_registration_register_pending_approval_admin_body':
        $text = t("[user:name] has applied for an account.

[user:edit-url]", array(), array('langcode' => $langcode));
        break;
    }
  }

  if ($replace) {
    // We do not sanitize the token replacement, since the output of this
    // replacement is intended for an e-mail message, not a web browser.
    return token_replace($text, $variables, array('language' => $language, 'callback' => 'user_mail_tokens', 'sanitize' => FALSE, 'clear' => TRUE));
  }

  return $text;
}

function wfs_registration_create_winery() {
  global $user;
  global $language;
  $user_load = user_load($user->uid);

  // entity_create replaces the procedural steps in the first example of
  // creating a new object $node and setting its 'type' and uid property
  $values = array(
    'type' => 'winery',
    'uid' => $user->uid,
    'status' => 0,
    'sticky' => 1,
    'language' => $language->language
  );
  $entity = entity_create('node', $values);

  // The entity is now created, but we have not yet simplified use of it.
  // Now create an entity_metadata_wrapper around the new node entity
  // to make getting and setting values easier
  $ewrapper = entity_metadata_wrapper('node', $entity);

  // Using the wrapper, we do not have to worry about telling Drupal
  // what language we are using. The Entity API handles that for us.
  if (!empty($user_load->field_winery_name[LANGUAGE_NONE][0]['value'])) {
    $ewrapper->title->set($user_load->field_winery_name[LANGUAGE_NONE][0]['value']);
  }
  else {
    $ewrapper->title->set(t('Temporary name of the winery.'));
  }

  $ewrapper->field_status->set('editing');

  // Now just save the wrapper and the entity
  // There is some suggestion that the 'true' argument is necessary to
  // the entity save method to circumvent a bug in Entity API. If there is
  // such a bug, it almost certainly will get fixed, so make sure to check.
  $ewrapper->save();

  $nid = $ewrapper->nid->value();

  // Add field collection brands.
  $node = node_load($nid);
  $fc_item = entity_create('field_collection_item', array('field_name' => 'field_fc_brands'));
  $fc_item->setHostEntity('node', $node);
  $fc_wrapper = entity_metadata_wrapper('field_collection_item', $fc_item);
  $field_image_info = field_info_instance('field_collection_item', 'field_image', 'field_fc_brands');
  $fc_wrapper->field_image->set(array('fid' => $field_image_info['settings']['default_image']));
  node_save($node);

  drupal_goto(drupal_get_path_alias('node/' . $nid));
}

function wfs_registration_check4presence_value(&$required_msgs, $field, $field_type, $field_name) {
  $info = field_info_instance('node', $field_name, 'winery');
  $label = $info['label'];

  switch ($field_type) {
    case 'field_collection_item':
      $required_props = array(
        'field_contact_person',
        'field_email_address',
        'field_telephone_number',
        'field_website'
      );
      if ($field_name == 'field_fc_importers_contacts') {
        $required_props[] = 'field_importer_name';
      }
      if ($field_name == 'field_fc_brands') {
        $required_props = array(
          'field_title',
          'field_description',
          // 'field_image'
        );
      }

      // Isset empty collection item.
      if (!empty($field[LANGUAGE_NONE])) {
        $required_props[] = 'field_importer_name';

        foreach ($field[LANGUAGE_NONE] as $key => $value) {
          $item_id = $value['value'];
          $fc_item = entity_load('field_collection_item', array($item_id));

          foreach ($required_props as $key_prop => $prop) {
            // if ($prop == 'field_image' 
            //   && (!empty($fc_item[$item_id]->{$prop}[LANGUAGE_NONE][0]['uri'])
            //   && (strlen($fc_item[$item_id]->{$prop}[LANGUAGE_NONE][0]['uri']) == strlen(str_replace('public://default_images', '', $fc_item[$item_id]->{$prop}[LANGUAGE_NONE][0]['uri']))))) {
            //   break 2;
            // }
            // else if ($prop == 'field_image') {
            //   continue 2;
            // }

            // if (!empty($fc_item[$item_id]->{$prop}) && $prop != 'field_image') {
            //   break 2;
            // }

            if (!empty($fc_item[$item_id]->{$prop})) {
              break 2;
            }
          }

          if (($key + 1) == count($field[LANGUAGE_NONE])) {
            $required_msgs[] = t('@field_name is required.', array('@field_name' => $label));
          }
        }
      }
      else {
        $required_msgs[] = t('@field_name is required.', array('@field_name' => $label));
      }
      break;
    case 'image':
      if (empty($field[LANGUAGE_NONE][0]['uri'])
        || (strlen($field[LANGUAGE_NONE][0]['uri']) != strlen(str_replace('public://default_images', '', $field[LANGUAGE_NONE][0]['uri'])))) {
        $required_msgs[] = t('@field_name is required.', array('@field_name' => $label));
      }
      break;
    case 'default':
      if (empty($field[LANGUAGE_NONE])) {
        $required_msgs[] = t('@field_name is required.', array('@field_name' => $label));
      }
      break;
  }
}
