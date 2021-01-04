<?php

/**
 * @file
 * Manages admin properties functionality.
 */

 /**
 * Finds all children of a term ID.
 *
 * @param $nids
 *   Wineries node IDs.
 *
 * @return
 *   File download.
 */
function wfs_common_export_winery($nid) {
  $wineries = array();

  if ($nid) {
    $wineries[] = node_load($nid);

    $filename = 'winery';
  }
  else {
    global $language;

    $wineries_nids = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.type', 'winery')
      ->condition('n.language', $language->language)
      ->execute()
      ->fetchAll();

    if (!empty($wineries_nids)) {
      foreach ($wineries_nids as $key => $winery) {
        $wineries[] = node_load($winery->nid);
      }
    }

    $filename = 'wineries-list';
  }

  $t = '';

  if (!empty($wineries)) {
    ctools_include('wfs_common.help', 'wfs_common');

    include_once DRUPAL_ROOT . '/sites/all/libraries/PHPExcel/Classes/PHPExcel.php';
    $fileObject = new PHPExcel();
  
    // Check index active list.
    $fileObject->setActiveSheetIndex(0); 
    // Get active list.
    $sheet = $fileObject->getActiveSheet();
    // List name.
    $sheet->setTitle(t('Wineries'));

    $style_default = array(
      'alignment' => array(
        'horizontal' => PHPExcel_Style_Alignment::HORIZONTAL_CENTER,
        'vertical' => PHPExcel_Style_Alignment::VERTICAL_TOP,
      )
    );
    $sheet->getDefaultStyle()->applyFromArray($style_default);
    $sheet->getDefaultStyle()->getAlignment()->setWrapText(true); 
  
    foreach ($wineries as $key => $winery) {
      $col = 'A';

      // Winery name.
      $sheet->SetCellValue($col . ($key + 2), $winery->title);
      $sheet->SetCellValue($col . '1', strtoupper(t('Winery name')));
      $sheet->getStyle($col . '1')->getFont()->setBold(true);

      // DO.
      $col++;
      if (!empty($winery->field_do[LANGUAGE_NONE][0]['tid'])) {
        $sheet->SetCellValue($col . ($key + 2), taxonomy_term_load($winery->field_do[LANGUAGE_NONE][0]['tid'])->name);
      }
      $sheet->SetCellValue($col . '1', strtoupper(t('DO')));
      $sheet->getStyle($col . '1')->getFont()->setBold(true);

      // Presentation.
      $col++;
      if (!empty($winery->field_presentation[LANGUAGE_NONE][0]['value'])) {
        $sheet->SetCellValue($col . ($key + 2), strip_tags($winery->field_presentation[LANGUAGE_NONE][0]['value']));
      }
      $sheet->SetCellValue($col . '1', strtoupper(t('Presentation')));
      $sheet->getStyle($col . '1')->getFont()->setBold(true);
    }

    // Brands.
    $col = 'D';
    $sheet->SetCellValue($col . '1', strtoupper(t('Brands')));
    $sheet->getStyle($col . '1')->getFont()->setBold(true);
    $next_field_col = $start_col = ++$col;

    foreach ($wineries as $key => $winery) {
      $col = $start_col;

      if (!empty($winery->field_brands_section[LANGUAGE_NONE][0]['value'])) {
        $brands_pid = $winery->field_brands_section[LANGUAGE_NONE][0]['value'];
        $brands_items = entity_load('paragraphs_item', array($brands_pid))[$brands_pid]->field_brands_items[LANGUAGE_NONE];

        if ($next_field_col < wfs_common_increment($inc = $start_col, count($brands_items) * 2)) {
          $next_field_col =  wfs_common_increment($inc = $start_col, count($brands_items) * 2);
        }

        foreach ($brands_items as $key2 => $brand_item) {

          $brand_pid = $brand_item['value'];
          $brand_item = entity_load('paragraphs_item', array($brand_pid))[$brand_pid];
    
    
          if (!empty($brand_item->field_title[LANGUAGE_NONE][0]["value"])) {
            $sheet->SetCellValue($col . ($key + 2), $brand_item->field_title[LANGUAGE_NONE][0]["value"]);
            $sheet->SetCellValue($col . '1', t('Title'));
          }
    
          $col++;
          if (!empty($brand_item->field_description[LANGUAGE_NONE][0]["value"])) {
            $sheet->SetCellValue($col . ($key + 2), strip_tags($brand_item->field_description[LANGUAGE_NONE][0]["value"]));
            $sheet->SetCellValue($col . '1', t('Description'));
          }

          $col++;
        }
      }
    }

    // Note.
    $col = $next_field_col;
    $sheet->SetCellValue($col . '1', strtoupper(t('Note')));
    $sheet->getStyle($col . '1')->getFont()->setBold(true);
    $next_field_col = $start_col = $col;

    foreach ($wineries as $key => $winery) {
      $col = $start_col;

      if (!empty($winery->field_text[LANGUAGE_NONE][0]["value"])) {
        $sheet->SetCellValue($col . ($key + 2), strip_tags($winery->field_text[LANGUAGE_NONE][0]["value"]));
      }
    }
    $next_field_col++;

    // Contact of winery.
    $col = $next_field_col;
    $sheet->SetCellValue($col . '1', strtoupper(t('Contact of winery')));
    $sheet->getStyle($col . '1')->getFont()->setBold(true);
    $next_field_col = $start_col = ++$col;

    foreach ($wineries as $key => $winery) {
      $col = $start_col;

      if (!empty($winery->field_winery_contact[LANGUAGE_NONE][0]['value'])) {
        $winery_contact_pid = $winery->field_winery_contact[LANGUAGE_NONE][0]['value'];

        // $items = entity_load('paragraphs_item', array($winery_contact_pid))[$winery_contact_pid]->field_items[LANGUAGE_NONE];

        // if ($next_field_col < wfs_common_increment($inc = $start_col, count($items))) {
        //   $next_field_col =  wfs_common_increment($inc = $start_col, count($items));
        // }

        // foreach ($items as $key2 => $item) {

        //   $item_pid = $item['value'];
        //   $item_item = entity_load('paragraphs_item', array($item_pid))[$item_pid];
    
        //   if (!empty($item_item->field_value[LANGUAGE_NONE][0]["value"])) {
        //     $sheet->SetCellValue($col . ($key + 2), $item_item->field_value[LANGUAGE_NONE][0]["value"]);
        //   }
        //   if (!empty($item_item->field_label[LANGUAGE_NONE][0]["value"])) {
        //     $sheet->SetCellValue($col . '1', $item_item->field_label[LANGUAGE_NONE][0]["value"]);
        //   }

        //   $col++;
        // }

        $item = entity_load('paragraphs_item', array($winery_contact_pid))[$winery_contact_pid];

        if ($next_field_col < wfs_common_increment($inc = $start_col, 4)) {
          $next_field_col =  wfs_common_increment($inc = $start_col, 4);
        }

        $sheet->SetCellValue($col . '1', t('Contact person:'));
        if (!empty($item->field_contact_person[LANGUAGE_NONE][0]["value"])) {
          $sheet->SetCellValue($col . ($key + 2), $item->field_contact_person[LANGUAGE_NONE][0]["value"]);
        }
        $col++;

        $sheet->SetCellValue($col . '1', t('Email address:'));
        if (!empty($item->field_email_address[LANGUAGE_NONE][0]["value"])) {
          $sheet->SetCellValue($col . ($key + 2), $item->field_email_address[LANGUAGE_NONE][0]["value"]);
        }
        $col++;

        $sheet->SetCellValue($col . '1', t('Telephone number:'));
        if (!empty($item->field_telephone_number[LANGUAGE_NONE][0]["value"])) {
          $sheet->SetCellValue($col . ($key + 2), $item->field_telephone_number[LANGUAGE_NONE][0]["value"]);
        }
        $col++;

        $sheet->SetCellValue($col . '1', t('Website:'));
        if (!empty($item->field_website[LANGUAGE_NONE][0]["value"])) {
          $sheet->SetCellValue($col . ($key + 2), $item->field_website[LANGUAGE_NONE][0]["value"]);
        }
        $col++;
      }
    }


    // Contact of importers.
    $col = $next_field_col;
    $sheet->SetCellValue($col . '1', strtoupper(t('Contact of importers')));
    $sheet->getStyle($col . '1')->getFont()->setBold(true);
    $next_field_col = $start_col = ++$col;

    foreach ($wineries as $key => $winery) {
      $col = $start_col;

      if (!empty($winery->field_importers_contacts[LANGUAGE_NONE][0]['value'])) {
        $importers_contacts_pid = $winery->field_importers_contacts[LANGUAGE_NONE][0]['value'];
        $importers_contacts_items = entity_load('paragraphs_item', array($importers_contacts_pid))[$importers_contacts_pid]->field_importers_contacts_items[LANGUAGE_NONE];

        foreach ($importers_contacts_items as $key2 => $importers_contacts_item) {

          $contacts_items_pid = $importers_contacts_item['value'];
          // $importer_contact_items = entity_load('paragraphs_item', array($contacts_items_pid))[$contacts_items_pid]->field_items[LANGUAGE_NONE];
          
          // foreach ($importer_contact_items as $key3 => $importer_contact_item) {
          //   $importer_contact_item_pid = $importer_contact_item['value'];
          //   $contact_item = entity_load('paragraphs_item', array($importer_contact_item_pid))[$importer_contact_item_pid];

          //   if (!empty($contact_item->field_value[LANGUAGE_NONE][0]["value"])) {
          //     $sheet->SetCellValue($col . ($key + 2), $contact_item->field_value[LANGUAGE_NONE][0]["value"]);
          //   }
          //   if (!empty($contact_item->field_label[LANGUAGE_NONE][0]["value"])) {
          //     $sheet->SetCellValue($col . '1', $contact_item->field_label[LANGUAGE_NONE][0]["value"]);
          //   }
  
          //   $col++;
          // }

          $item = entity_load('paragraphs_item', array($contacts_items_pid))[$contacts_items_pid];

          $sheet->SetCellValue($col . '1', t('Importer name:'));
          if (!empty($item->field_importer_name[LANGUAGE_NONE][0]["value"])) {
            $sheet->SetCellValue($col . ($key + 2), $item->field_importer_name[LANGUAGE_NONE][0]["value"]);
          }
          $col++;

          $sheet->SetCellValue($col . '1', t('Contact person:'));
          if (!empty($item->field_contact_person[LANGUAGE_NONE][0]["value"])) {
            $sheet->SetCellValue($col . ($key + 2), $item->field_contact_person[LANGUAGE_NONE][0]["value"]);
          }
          $col++;

          $sheet->SetCellValue($col . '1', t('Email address:'));
          if (!empty($item->field_email_address[LANGUAGE_NONE][0]["value"])) {
            $sheet->SetCellValue($col . ($key + 2), $item->field_email_address[LANGUAGE_NONE][0]["value"]);
          }
          $col++;

          $sheet->SetCellValue($col . '1', t('Telephone number:'));
          if (!empty($item->field_telephone_number[LANGUAGE_NONE][0]["value"])) {
            $sheet->SetCellValue($col . ($key + 2), $item->field_telephone_number[LANGUAGE_NONE][0]["value"]);
          }
          $col++;

          $sheet->SetCellValue($col . '1', t('Website:'));
          if (!empty($item->field_website[LANGUAGE_NONE][0]["value"])) {
            $sheet->SetCellValue($col . ($key + 2), $item->field_website[LANGUAGE_NONE][0]["value"]);
          }
          $col++;
        }
      }
    }

    header('Content-Type: application/vnd.ms-excel');
    header('Content-Disposition: attachment;filename="' . $filename . '.xlsx"');
    header('Cache-Control: max-age=0');

    $objWriter = PHPExcel_IOFactory::createWriter($fileObject, 'Excel2007');
    ob_end_clean();
    $objWriter->save('php://output');

    drupal_exit();
  }
  else {
    drupal_set_message(t('Wineries not found.'));
  }
}
