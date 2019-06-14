(function($, Drupal) {
  Drupal.behaviors.wfs_common_exposed_filters = {
    attach: function (context, settings) {

      var date_filter_custom = $(".views-exposed-form #edit-date-filter-custom");

      date_filter_custom.change(function() {
        var date_val = $(this).val().split('_');
        console.log(date_val[0]);
        $(".views-exposed-form #edit-date-filter-value-month").val(date_val[0]);
        $(".views-exposed-form #edit-date-filter-value-year").val(date_val[1]);
      });

    }
  };
})(jQuery, Drupal);
