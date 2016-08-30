(function ($) {
    Drupal.behaviors.colorboxHowTo = {
        attach: function (context) {
            if ($('.colorbox').length > 0) {
              console.log('colorbox');
                $('.colorbox.cta1').colorbox({inline:true, width:"634px", slideshow:true, rel:'cta1'});
                $('.colorbox.cta2').colorbox({inline:true, width:"634px", slideshow:true, rel:'cta2'});
                $('.colorbox.cta3').colorbox({inline:true, width:"634px", slideshow:true, rel:'cta3'});
                $('.colorbox.cta4').colorbox({inline:true, width:"634px", slideshow:true, rel:'cta4'});
            }
        }
    }
}(jQuery));