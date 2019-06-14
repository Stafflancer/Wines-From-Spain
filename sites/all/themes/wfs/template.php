<?php

/**
 * Implements template_preprocess_node.
 */
function wfs_preprocess_page(&$vars) {
  $vars['show_title'] = TRUE;

  if (!empty(arg(0)) && empty(arg(1))) {
    if (in_array(arg(0), array('events', 'news', 'newsletters', 'map', 'wineries', 'social-feeds'))) {
      $long = 'bean_' . arg(0) . '-block-banner';
      $short = arg(0) . '-block-banner';

      if (!empty($vars['page']['help'][$long]['bean'][$short]['field_exclude_title_from_display']['#items'][0]['value']) 
        && $vars['page']['help'][$long]['bean'][$short]['field_exclude_title_from_display']['#items'][0]['value']) {
        $vars['show_title'] = FALSE;
      }
    }
  }

  if (!empty($vars['node'])) {
    $vars['show_title'] = FALSE;
  }

  // Hide/show bean blocks for different languages.
  global $language;
  if ($language->language == 'en') {
    // Logo.
    unset($vars['page']['header']['bean_logo-header-ch']);
    unset($vars['page']['content_bottom']['bean_logo-footer-ch']);
    // Footer.
    unset($vars['page']['footer']['bean_other-logos-amp-copyright--icp-n']);
    // Banner.
    unset($vars['page']['help']['bean_events-block-banner-ch']);
    unset($vars['page']['help']['bean_news-block-banner-ch']);
    unset($vars['page']['help']['bean_newsletters-block-banner-ch']);
    unset($vars['page']['help']['bean_map-block-banner-ch']);
    unset($vars['page']['help']['bean_wineries-block-banner-ch']);
    unset($vars['page']['help']['bean_social-feeds-block-banner-ch']);
  }
  else {
    // Logo.
    unset($vars['page']['header']['bean_logo']);
    unset($vars['page']['content_bottom']['bean_logo-footer']);
    // Footer.
    unset($vars['page']['footer']['bean_other-logos--copyright--icp-numb']);
    // Banner.
    unset($vars['page']['help']['bean_events-block-banner']);
    unset($vars['page']['help']['bean_news-block-banner']);
    unset($vars['page']['help']['bean_newsletters-block-banner']);
    unset($vars['page']['help']['bean_map-block-banner']);
    unset($vars['page']['help']['bean_wineries-block-banner']);
    unset($vars['page']['help']['bean_social-feeds-block-banner']);
  }
}

function wfs_get_contact_us_form() {
  $block = block_load('webform', 'client-block-5');
  $blocks = _block_render_blocks(array($block));
  $blocks_build = _block_get_renderable_array($blocks);
  $form = drupal_render($blocks_build);
  return theme_status_messages(array('display' => 'error')) . $form;
}

/**
 * Implements template_preprocess_node.
 */
function wfs_preprocess_node(&$vars) {
  $date_prefix = '';

  // Events.
  if (in_array($vars['type'], array('event', 'official_event'))) {
    $date_prefix = '<span>' . t('Events')  . '</span> | ';

    // Set unpublish.
    if ($vars['teaser'] && !drupal_is_front_page() && !empty($vars['field_date'][0]['value']) && (date('Y-m-d 00:00:00', REQUEST_TIME) > $vars['field_date'][0]['value'])) {
    	$vars['classes_array'][] = 'unpublish';
    }
  }
  
  // News.
  if ($vars['type'] == 'news') {
    if (drupal_is_front_page()) {
      $date_prefix = t('News');
    }
    elseif (!empty($vars['content']['field_winery'])) {
      $date_prefix = render($vars['content']['field_winery']);
    }
    elseif (!empty($vars['field_link_title'][LANGUAGE_NONE][0]['value'])) {
      if (!empty($vars['field_link'][LANGUAGE_NONE][0]['url'])) {
        $date_prefix = '<div class="field-name-field-link">' . l($vars['field_link_title'][LANGUAGE_NONE][0]['value'], $vars['field_link'][LANGUAGE_NONE][0]['url'], array('attributes' => $vars['field_link'][LANGUAGE_NONE][0]['attributes'])) . '</div>';
      }
      else {
        $date_prefix = '<div class="field-name-field-link">' . $vars['field_link_title'][LANGUAGE_NONE][0]['value'] . '</div>';
      }
    }

    if (!empty($date_prefix)) {
      $date_prefix = '<span>' . $date_prefix . '</span> | ';
    }
  }

  // Teaser.
  if ($vars['teaser']) {
    // // Hide/Show some main images.
    // if (drupal_is_front_page() && !empty($vars['content']['field_main_list'][0])) {
    //   unset($vars['content']['field_main_list'][0]);
    // }
    // else if (!drupal_is_front_page() && !empty($vars['content']['field_main_homepage'][0])){
    //   unset($vars['content']['field_main_homepage'][0]);
    // }
  }

  // Add prefix to Date field.
  if (isset($vars['content']['field_date'][0])) {
    $vars['content']['field_date'][0]['#markup'] = $date_prefix . $vars['content']['field_date'][0]['#markup'];
  }

  // Page title.
  if (!empty($vars['content']['field_sections'][0]) && !in_array($vars['type'], array('region', 'winery'))) {
    $pid = $vars['content']['field_sections']['#items'][0]['value'];
    $title = '<div class="node-info">';
    $title .= '<h1>' . $vars['title'] . '</h1>';

    if (!empty($vars['content']['field_date'])) {
      $title .= render($vars['content']['field_date']);
    }
    $title .= '</div>';

    if ($vars['content']['field_sections'][0]['entity']['paragraphs_item'][$pid]['#bundle'] == 'banner_section') {
      $vars['content']['field_sections'][0]['entity']['paragraphs_item'][$pid]['#suffix'] = $title;
    }
    else {
      $vars['content']['field_sections'][0]['entity']['paragraphs_item'][$pid]['#prefix'] = $title;
    }
  }

  // Translate taxonomy fields.
  $fields_names = array(
    'field_type',
    'field_category',
    'field_do'
  );
  foreach ($fields_names as $name) {
    if (!empty($vars['content'][$name][0]['#markup'])) {
      $vars['content'][$name][0]['#markup'] = i18n_taxonomy_localize_terms($vars['content'][$name]['#items'][0]['taxonomy_term'])->name;
    }
  }
}

/**
 * Implements hook_css_alter.
 */
function wfs_css_alter(&$css) {
  if (!user_is_logged_in()) {
    $styles = '';

    foreach ($css as $path => $data) {
      if (!is_numeric($path)) {
        $styles .= file_get_contents($path, TRUE);
        unset($css[$path]);
      }
    }

    $css[] = array(
      'type' => 'inline',
      'data' => $styles,
      'group' => 0,
      'weight' => 1,
      'media' => 'all',
      'every_page' => TRUE,
      'preprocess' => TRUE,
      'browsers' => array(
        'IE' => TRUE,
        '!IE' => TRUE
      )
    );
  }
}
