(function($, Drupal) {
  Drupal.behaviors.wfs_common_exposed_filters = {
    attach: function (context, settings) {

      // Date.
      var date_filter_custom = $(".views-exposed-form #edit-date-filter-custom");

      date_filter_custom.change(function() {
        var date_val = $(this).val().split('_');

        $(".views-exposed-form #edit-date-filter-value-month").val(date_val[0]);
        $(".views-exposed-form #edit-date-filter-value-year").val(date_val[1]);
      });

      // A-Z.
      var a_z_filter_custom = $(".views-exposed-form #edit-a-z");

      a_z_filter_custom.change(function() {
        var a_z_val = $(this).val();
        
        if (a_z_val == 'All') {
          a_z_val = '';
        }

        $(".views-exposed-form #edit-title-1").val(a_z_val);
      });

    }
  };
})(jQuery, Drupal);
