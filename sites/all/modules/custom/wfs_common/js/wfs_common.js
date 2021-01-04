(function($, Drupal) {
  
  $(document).ajaxStop(function() {
    // // Hide labels for different fields.
    // $('.paragraphs-item-type-winery-contact-section .field-name-field-label-list select option[value=in]').attr('disabled', 'disabled').hide();
    // $('.node-type-winery .field-name-field-label-list select option[value=telephone], .node-type-winery .field-name-field-label-list select option[value=address], .node-type-winery .field-name-field-label-list select option[value=email]').attr('disabled', 'disabled').hide();
  
    // Sort DOs.
    var options = $('.field-name-field-do select option');
    var arr = options.map(function(_, o) {
        return {
            t: $(o).text(),
            v: o.value
        };
    }).get();
    arr.sort(function(o1, o2) {
        return o1.t > o2.t ? 1 : o1.t < o2.t ? -1 : 0;
    });
    options.each(function(i, o) {
        // console.log(i);
        o.value = arr[i].v;
        $(o).text(arr[i].t);
    });


    // If is default image.
    // $('img[src*="/default_images/"]').closest('form').find('.simplecrop-widget-data input:first-of-type').attr('value', Drupal.t('Edit'));
    $('.field-type-image img').closest('form').find('.simplecrop-widget-data > input:first-of-type').attr('value', Drupal.t('Edit'));
    
    $('img[src*="/default_images/"]').closest('form').find('.simplecrop-widget-data input:last-of-type').remove();

    // Add checkbox for hide contact if importers.
    var radioBtn = $('<div class="hide-contact-importers-wrapper"><input type="checkbox" value="0" id="hide-contact-importers" /><label class="option" for="hide-contact-importers">' + Drupal.t("I don't want the importer data to be visible in the website when my information is published.") + '</label></div>');
    if ($('#field-fc-importers-contacts-add-more-wrapper #hide-contact-importers').length == 0) {
      radioBtn.prependTo('#field-fc-importers-contacts-add-more-wrapper');
    }
    $checked = $('.field-name-field-hide input').is(":checked") ? true : false;
    $('#hide-contact-importers').prop('checked', $checked);
    $('#hide-contact-importers').click(function() {
      $checked = $(this).is(":checked") ? true : false;
      $('.field-name-field-hide input').prop('checked', $checked);
    });

    if ($('body').hasClass('i18n-en')) {

    }

    // Limit the number of characters 
    var maxchars_presentation = $('body').hasClass('i18n-en') ? 700 : 200;

    if ($('.field-name-field-presentation textarea').length != 0) {
      var tlength = $(this).val().length;
      $('.field-name-field-presentation textarea').val($('.field-name-field-presentation textarea').val().substring(0, maxchars_presentation));
      var tlength = $('.field-name-field-presentation textarea').val().length;
      remain = maxchars_presentation - parseInt(tlength);

      if ($('.field-name-field-presentation span.remain').length == 0) {
        $('.field-name-field-presentation textarea').before('<span class="remain">' + remain + '</span> ' + Drupal.t('characters remaining'));
      }

      $('.field-name-field-presentation textarea').keyup(function () {
        var tlength = $(this).val().length;
        $(this).val($(this).val().substring(0, maxchars_presentation));
        var tlength = $(this).val().length;
        remain = maxchars_presentation - parseInt(tlength);
        // $('#remain').text(remain);
        $(this).parents('.field-name-field-presentation').find('span.remain').text(remain);
      });
    }
    

    maxchars_brands = $('body').hasClass('i18n-en') ? 350 : 100;

    $('.field-name-field-fc-brands .form-type-textarea textarea').each(function(index) {
      var tlength = $(this).val().length;
      $(this).val($(this).val().substring(0, maxchars_brands));
      var tlength = $(this).val().length;
      remain = maxchars_brands - parseInt(tlength);

      if ($(this).parents('.form-type-textarea').find('span.remain').length == 0) {
        $(this).before('<span class="remain">' + remain + '</span> ' + Drupal.t('characters remaining'));
      }
    });

    $('.field-name-field-fc-brands .form-type-textarea textarea').keyup(function () {
      var tlength = $(this).val().length;
      $(this).val($(this).val().substring(0, maxchars_brands));
      var tlength = $(this).val().length;
      remain = maxchars_brands - parseInt(tlength);
      // $('#remain').text(remain);
      $(this).parents('.form-type-textarea').find('span.remain').text(remain);
    });
    
    
  });

}(jQuery, Drupal));