(function($, Drupal) {
    Drupal.behaviors.wfs_registration = {
      attach: function (context, settings) {

        if ($('.messages.confirm').length != 0) {
          $('.messages.confirm').insertBefore("#block-system-main .block-content .content");
          $('#block-system-main .block-content .content form').hide();
        }
  
      }
    };
  })(jQuery, Drupal);
  