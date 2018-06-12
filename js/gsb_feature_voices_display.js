(function ($) {
  Drupal.behaviors.gsb_feature_voices_display = {
    attach: function (context, settings) {


        $('.hide_ind').hide();
        $('#edit-exposed-field-industry-tid').hide();

        $('.hide_region').hide();
        $('#edit-exposed-field-region-of-interest-tid').hide();

    }
  };
})(jQuery);

