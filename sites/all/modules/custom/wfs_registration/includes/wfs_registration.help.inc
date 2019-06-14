<?php

/**
 * @file
 * Manages common properties functionality.
 */

 /**
 * @file
 * Manages common properties functionality.
 */
function wfs_registration_send_mail_need_approve($node) {
  global $language;
  global $base_url;

  $admin = user_load(1);
  $mail_to = $admin->mail;

  // Mail from.
  $mail_from = variable_get('site_mail', '');

  // Subject.
  $subject = wfs_registration_user_mail_text('email_need_approve_subject', NULL, array(), FALSE);
  // Body.
  $body = nl2br(wfs_registration_user_mail_text('email_need_approve_body', NULL, array(), FALSE));
  // Replace tokens.
  $tokens = array(
    '[edit-link]', 
    '[type]',
  );
  $replaces = array(
    l(t('Edit link'), $base_url . '/node/' . $node->nid . '/edit'),
    $node->type,
  );
  $subject = str_replace($tokens, $replaces, $subject);
  $body = str_replace($tokens, $replaces, $body);

  // Send email about need approve.
  $message = drupal_mail('wfs_registration', 'default', $mail_to, $language->language, [
    'subject' => $subject,
    'body'    => $body,
    'headers' => ['Content-Type' => 'text/html; charset=utf-8']
  ], $mail_from);

  // Only if sending was not canceled.
  if ($message['send']) {
    watchdog('wfs_registration', '<pre>' . print_r($message, true) . '</pre>');
  }
  else {
    watchdog('wfs_registration', 'Message was not sent!');
  }
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
    $text = $admin_setting;
  }
  else {
    // No override, return default string.
    switch ($key) {
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
