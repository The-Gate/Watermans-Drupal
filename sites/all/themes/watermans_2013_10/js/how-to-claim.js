(function ($) {
    Drupal.behaviors.colorboxHowTo = {
        attach: function (context) {
            if ($('.colorbox').length > 0) {
                if ($( window ).width() < 481){
                    cb_width='100%';
                } else {
                    cb_width='634px';
                }
                $('.colorbox.cta1').colorbox({inline:true, width:cb_width, rel:'cta1',current: "{current}/{total}"});
                $('.colorbox.cta2').colorbox({inline:true, width:cb_width, rel:'cta2',current: "{current}/{total}"});
                $('.colorbox.cta3').colorbox({inline:true, width:cb_width, rel:'cta3',current: "{current}/{total}"});
                $('.colorbox.cta4').colorbox({inline:true, width:cb_width, rel:'cta4',current: "{current}/{total}"});
            }
        }
    }
}(jQuery));