(function ($) {
  // modified from : http://ivanchaquea.com/creating-responsive-menu-omega-subthemes.html
  Drupal.behaviors.mobnav = {
    attach: function(context) {
      $('body', context).once('sitesetup', function () {
        $('body').bind('responsivelayout', function (e, d) {	
          // desktop version
          // for all
          if ($('#node_person_full_group_person_contact').length > 0){
            $('#node_person_full_group_person_contact h3 span').append(' ').append($('h1#page-title').text());
          }
          if (d.to == 'normal' ) {
            // set up the main menu sub menu content positions
            $('#om-menu-main-menu > li > .om-maximenu-content').each(function(){
             var leftpos = $(this).parent().position();
             //console.log(leftpos.left);
             $(this).css({'left':'-' + leftpos.left +'px'});
            });
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