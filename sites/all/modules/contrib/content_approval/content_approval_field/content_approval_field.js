(function ($) {
  Drupal.behaviors.content_approval_field_node_edit_FieldsetSummary = {
    attach: function (context) {
      // node edit form case
      $('fieldset.node-edit-form-content_approval', context).drupalSetSummary(function (context) {
        var value = $('.form-item-field-content-approval-und-0-value input:checked').val();
        var out = "Doesn't need approval prior publication";
        if (value) {
          out = "Need approval prior publication";
        }
        return Drupal.t('@summary', {
          '@summary': out
        });
      });
    }
  };

})(jQuery);
