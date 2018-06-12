(function ($) {
  Drupal.behaviors.gsb_feature_voices_display = {
    attach: function (context, settings) {
        $("#edit-exposed-field-person-type-tid").on('change', function() {
                if($("#edit-exposed-field-person-type-tid").val() == '42776'){
                    $('.hide-area-one').show();
                    $('#edit-exposed-field-academic-area-single-tid').show();
                    $('.hide-area-two').hide();
                    $('#edit-exposed-field-field-of-study-tid').hide();
                }
                else if($("#edit-exposed-field-person-type-tid").val() == '42751'){
                    $('.hide-area-two').show();
                    $('#edit-exposed-field-field-of-study-tid').show();
                    $('.hide-area-one').hide();
                    $('#edit-exposed-field-academic-area-single-tid').hide();
                }
                else {
                    $('.hide-area-one').hide();
                    $('#edit-exposed-field-academic-area-single-tid').hide();
                    $('.hide-area-two').hide();
                    $('#edit-exposed-field-field-of-study-tid').hide();
                }
        });
        if($("#edit-exposed-field-person-type-tid").val() == '42776'){
            $('.hide-area-one').show();
            $('#edit-exposed-field-academic-area-single-tid').show();
            $('.hide-area-two').hide();
            $('#edit-exposed-field-field-of-study-tid').hide();
        }
        else if($("#edit-exposed-field-person-type-tid").val() == '42751'){
            $('.hide-area-two').show();
            $('#edit-exposed-field-field-of-study-tid').show();
            $('.hide-area-one').hide();
            $('#edit-exposed-field-academic-area-single-tid').hide();
        }
        else {
            $('.hide-area-one').hide();
            $('#edit-exposed-field-academic-area-single-tid').hide();
            $('.hide-area-two').hide();
            $('#edit-exposed-field-field-of-study-tid').hide();
        }
    }
  };
})(jQuery);