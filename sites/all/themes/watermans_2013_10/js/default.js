(function ($) {
  // modified from : http://ivanchaquea.com/creating-responsive-menu-omega-subthemes.html
  Drupal.behaviors.mobnav = {
    attach: function(context) {
      $('body', context).once('sitesetup', function () {
        $('body').bind('responsivelayout', function (e, d) {	
          // for all
          // add video wrapper
          $('iframe').each(function() {
            var url = $(this).attr("src");
            var qschar = "?";
            if(url.indexOf("?") != -1)
              var qschar = "&";

            $(this).attr("src",url+qschar+"wmode=transparent");
          });
          $('.youtube-player, .vimeo-player').wrap('<div class="video-container" />')
          // ask a question web form add the descrition to the textarea, add the step count
          if ($('#webform-client-form-29').length > 0){
            // build form step counter
            var stepCounter = '<p class="form-steps">Click here to complete step ' + $( "input[name='details[page_num]']" ).val() + ' of ' + $( "input[name='details[page_count]']" ).val() + '</p>';
            $('.webform-client-form .form-actions.form-wrapper').prepend(stepCounter);
            // add textarea description
            if($('#edit-submitted-ask-a-personal-injury-solicitor').length > 0){
              var askQuestionText = $('#webform-component-ask-a-personal-injury-solicitor .description').text();
              $('#webform-component-ask-a-personal-injury-solicitor .description').hide();
              $("#edit-submitted-ask-a-personal-injury-solicitor").focus(function(srcc) {
                if ($(this).val() == askQuestionText) {
                  $(this).val('');
                }
              }).blur(function(){
                if ($(this).val() == ''){
                  $(this).val(askQuestionText);
                }
              }).blur();     
              $('.webform-client-form').submit(function(){
                if ($('#edit-submitted-ask-a-personal-injury-solicitor').val() == askQuestionText) {
                  $('#edit-submitted-ask-a-personal-injury-solicitor').val('');
                }
              });
            }
          }
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
          
          if (d.to == 'normal' || (d.to == 'mobile' && ($.browser.msie== true) && ($.browser.version < 8)) ) {
            // people section match the rhs col boxes to the height of the users
            if ($('.view-people-listing').length > 0){
              $('.region-sidebar-second .block-block-19,.region-sidebar-second .block-block-21,.region-sidebar-second .block-block-22,.region-sidebar-second .block-block-37').hide();
              var liMarginBottom = parseInt($('.view-people-listing ul li').css('marginBottom'));
              $('.view-people-listing .item-list').each(
                function(){
                  var section = $(this).find('h3').text();
                  // -20 for the top & bottom padding in the block
                  var sectionHeight = ($(this).height() - liMarginBottom);
                  switch (section) { 
                    case 'Court Department':
                      $('.region-sidebar-second .block-block-19').css({
                        'height':sectionHeight+'px'
                      }).show();
                      break;
                    case 'Accident Team':
                      $('.region-sidebar-second .block-block-21').css({
                        'height':sectionHeight+'px'
                      }).show();
                      break;
                    case 'RTA Team':
                      $('.region-sidebar-second .block-block-22').css({
                        'height':sectionHeight+'px'
                      }).show();
                      break;
                    case 'Firm Management':
                      $('.region-sidebar-second .block-block-37').css({
                        'height':sectionHeight+'px'
                      }).show();
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
            if (($('.block-people-listing-block').length > 0) || ($('.block-views-videos-block').length > 0)){
              // team page add padding to sidebar
              var thisBlock = 0;
              if ($('.block-people-listing-block').length > 0){
                thisBlock = $('.block-people-listing-block').offset().top;
              }
              // confidence video results page 
              if ($('.block-views-videos-block').length > 0){
                thisBlock = $('h1#page-title').offset().top;
              }
              if (thisBlock > 0){
                // add padding to sidebar
                var sidebar = $('.region-sidebar-second').offset().top;
                var blockPadding = thisBlock - sidebar;
                if (blockPadding > 0){
                  $('.region-sidebar-second').css({
                    'padding-top':blockPadding+'px'
                  });
                }
              }
            }
            
            // move the side blocks to the outer wrapper
            $('.block-13.widepage-sides, .block-14.widepage-sides').appendTo('#zone-content-wrapper');
            if ( $.browser.msie ) {
              if ($( window ).width() > 1159){
                var url = '/sites/all/themes/watermans_2013_10/css/ie.css'
                if(document.createStyleSheet) {
                  try {
                    document.createStyleSheet(url);
                  } catch (e) { }
                }
                else {
                  var css;
                  css         = document.createElement('link');
                  css.rel     = 'stylesheet';
                  css.type    = 'text/css';
                  css.media   = "all";
                  css.href    = url;
                  document.getElementsByTagName("head")[0].appendChild(css);
                }
              }
            }
          }
          if (d.to == 'mobile' &&((!($.browser.msie== true)) )) {
            // build the mobile menu
            $('.block-menu-block-14 > .block-inner > .block-title-wrapper > .block-title').prepend("&#9776;&nbsp;");
            $('.region-branding-second-inner .block-search-form').prependTo($('.block-menu-block-14 .content'));
            $('.menu-mlid-588,.menu-mlid-528').removeClass('expanded').addClass('leaf');
            $('.block-menu-block-14 > .block-inner > .content > .menu-block-14 > .menu li.expanded').each(function(){
              $(this).children('ul.menu li.first').removeClass('first');
              $(this).children('ul.menu').prepend($(this).children('a').clone().wrap('<li class="leaf first"></li>').parent());
            });
            $('.block-menu-block-14 h2.block-title').click(function(){
              $('.block-menu-block-14 > .block-inner > .content').toggleClass('openMenu');
              
              $('body').toggleClass('noscroll');
              $('.block-menu-block-14 h2.block-title').toggleClass('close');
              $('.block-menu-block-14 h2.block-title').html('&#9776;&nbsp;menu');
              $('.block-menu-block-14 h2.block-title.close').html('&#9776;&nbsp;close');
            });
            $('.block-menu-block-14 > .block-inner > .content > .menu-block-14 > .menu li.expanded > a').click(function(e){
              e.preventDefault();
              if ($(this).next($('.menu')).hasClass('open')){
                $(this).next($('.menu')).removeClass('open');
              } else {
                $('.block-menu-block-14 > .block-inner > .content > .menu-block-14 > .menu li.expanded > .menu').removeClass('open');
                $(this).next($('.menu')).addClass('open');
              }
            });
          }	
        });
      });
    }
  }     
}(jQuery));