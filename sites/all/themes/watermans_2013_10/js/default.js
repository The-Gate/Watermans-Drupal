(function ($) {
  // modified from : http://ivanchaquea.com/creating-responsive-menu-omega-subthemes.html
  Drupal.behaviors.mobnav = {
    attach: function(context) {
      $('body', context).once('sitesetup', function () {
        $('body').bind('responsivelayout', function (e, d) {	
          // for all
          
          // FAQs
          if ($('.context-frequently-asked-questions').length > 0){
            $('.view-faq .views-field-body').each(function(){
              $(this).hide();
            });  
            $('.view-faq .views-field-title a').click(function(e){
              e.preventDefault();
              $('.faq-active').parent().parent().next().hide();
              $('.faq-active').removeClass('faq-active');
              $(this).parent().parent().next().show();
              $(this).addClass('faq-active');
            });      
          }
          
          // add the category to the people search results
          if ($('#node_person_full_group_person_contact').length > 0){
            $('#node_person_full_group_person_contact h3 span').append(' ').append($('h1#page-title').text());
          }
          
          if (d.to == 'normal' ) {
            // people section match the rhs col boxes to the height of the users
            if ($('.view-people-listing').length > 0){
              $('.region-sidebar-second .block-block-19,.region-sidebar-second .block-block-21,.region-sidebar-second .block-block-22').hide();
              var liMarginBottom = parseInt($('.view-people-listing ul li').css('marginBottom'));
              $('.view-people-listing .item-list').each(
                function(){
                  var section = $(this).find('h3').text();
                  // -20 for the top & bottom padding in the block
                  var sectionHeight = ($(this).height() - liMarginBottom) - 20;
                  // console.log(sectionHeight);
                  //console.log(section);
                  switch (section) { 
                    case 'Court Department':
                      $('.region-sidebar-second .block-block-19').css({'height':sectionHeight+'px'}).show();
                      break;
                    case 'RTA Department':
                      $('.region-sidebar-second .block-block-21').css({'height':sectionHeight+'px'}).show();
                      break;
                    case 'Business Development':
                      $('.region-sidebar-second .block-block-22').css({'height':sectionHeight+'px'}).show();
                      break;
                  }
                });
            }
            
            // move news thumnbail to first para of body copy
            if ($('.node-type-news-item').length > 0){
              $('.field-name-field-image img').css({
                'float':'right',
                'margin':'0 0 10px 10px'
              }).prependTo($('.field-name-body p:first'));
            }
            // set up the main menu sub menu content positions
            $('#om-menu-main-menu > li > .om-maximenu-content').each(function(){
              var leftpos = $(this).parent().position();
              //console.log(leftpos.left);
              $(this).css({
                'left':'-' + leftpos.left +'px'
              });
            });
            // team page add padding to sidebar
            if ($('.block-people-listing-block').length){
              var thisBlock = $('.block-people-listing-block').offset().top;
              var sidebar = $('.region-sidebar-second').offset().top;
              var blockPadding = thisBlock - sidebar;
              if (blockPadding > 0){
                $('.region-sidebar-second').css({
                  'padding-top':blockPadding+'px'
                });
              }
            }
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