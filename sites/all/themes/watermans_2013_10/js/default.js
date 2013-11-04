(function ($) {
  // modified from : http://ivanchaquea.com/creating-responsive-menu-omega-subthemes.html
  Drupal.behaviors.mobnav = {
    attach: function(context) {
      $('body', context).once('sitesetup', function () {
        $('body').bind('responsivelayout', function (e, d) {	
          // desktop version
          if (d.to == 'normal' ) {
            // move the side blocks to the outer wrapper
            $('.block-13, .block-14').appendTo('#zone-content-wrapper');
          }
          if (d.to == 'mobile') {
          }	
        });
      });
    }
  }     
}(jQuery));