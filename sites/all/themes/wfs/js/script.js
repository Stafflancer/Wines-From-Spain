(function($, Drupal) {
  var script = false;
  Drupal.behaviors.main_script = {
    attach:function(context, settings) {
      $(document).ready(function() {
        if (!script) {

          // Dropdown Language block (header)
          // $('#block-locale-language a.active').removeAttr('href');
          // $('#block-locale-language a.active').unbind('click').bind('click', function() {
          //   $(this).closest('#block-locale-language').toggleClass('open-lang', 500);
          // });

          // Slider Front
          $('.main-carousel ul.carousel').not('.slick-initialized').slick({
            infinite: true,
            slidesToShow: 1,
            slidesToScroll: 1,
            arrows: false,
            dots: true,
            autoplay: true,
            autoplaySpeed: 7000,
            pauseOnHover: true,
          });
          // Hide dots if one
          var quantity = $('.slick-dots li').length;
          if (quantity == 1) {
            $('.slick-dots').hide();
          }

          // Button up
          $('body').append('<button class="btn-up" />');
          $('.btn-up').click(function() {
            $('body').animate({'scrollTop': 0}, 1000);
            $('html').animate({'scrollTop': 0}, 1000);
          });

          $(window).scroll(function() {
            if($(window).scrollTop() > 200){
              $('.btn-up').addClass('active');
            }
            else{
              $('.btn-up').removeClass('active');
            }
          });

          // Open mobile menu
          $('#header .toggle').unbind('click').bind('click', function() {
            $('#block-system-main-menu').toggleClass('open-menu');
          });
          $('#block-system-main-menu ul.menu span').wrap('<a href="javascript: void(0);"></a>');

          // Fix menu for mobile
          $(window).scroll(function(event){
            var st = $(this).scrollTop();
            var lastScrollTop = 90;
            if (st > lastScrollTop) {
              $('body').removeClass('scroll-up');
              $('body').addClass('scroll-down');
            }
            lastScrollTop = st;
          });
          var lastScrollTop = 0;
          $(window).scroll(function(event){
            var st = $(this).scrollTop();
            if (st < lastScrollTop){
              $('body').removeClass('scroll-down');
              $('body').addClass('scroll-up');
            }
            lastScrollTop = st;
          });

          // Zurb Foundation
          $(document).foundation();

          var documentWidth = $(document).width();
          if (documentWidth <= 974) {
            $('#block-system-main-menu .top-bar-right ul.vertical > li.expanded > .is-drilldown').contents().unwrap();
          }

          // Accordion
          $('.paragraphs-item-dos-section .field-name-field-title-html').unbind("click").bind("click", function() {
            if(!$(this).hasClass('active-acc')) {  // if the "clicked" item is inactive:
              $('.paragraphs-item-dos-section .field-name-field-title-html').removeClass('active-acc').next('.paragraphs-item-dos-section .field-name-field-description').slideUp();  // make all items inactive
              $(this).addClass('active-acc');  // activate the "clicked" item
              $(this).next('.paragraphs-item-dos-section .field-name-field-description').slideDown(300);  // open the block following it with the description
            } else {  //otherwise:
              $(this).removeClass('active-acc').next('.paragraphs-item-dos-section .field-name-field-description').slideUp(); // hide this paragraph
            }
          });

          // Load addthis JS.
          var script_loaded = false;

          setTimeout(function(){
            $.getScript(location.origin + "/sites/all/themes/wfs/js/addthis_widget.js");
            script_loaded = true;
          }, 3000);

          $('.addthis_button').on('mouseover', function() {
            if (!script_loaded) {
              $.getScript(location.origin + "/sites/all/themes/wfs/js/addthis_widget.js");
              script_loaded = true;
            }
          });

          // Clone Language block for mobile
          $('#block-locale-language').clone().appendTo('#block-system-main-menu');
          $('#header-top').clone().appendTo('#block-system-main-menu');


          // Active href for mobile menu
          $('#block-system-main-menu .menu > li.expanded').prepend('<span class="arrow-menu"></span>');

          $('#block-system-main-menu .menu li.expanded > a').each(function() {

            var getHref = $(this).attr('href'),
                getText = $(this).text();
            $(this).prev('.arrow-menu').attr('data-href', getHref).text(getText);
            
            if ($(this).hasClass('active')) {
              $(this).prev('.arrow-menu').addClass('active');
            }

            if ($(this).attr('href') == 'javascript: void(0);') {
              $(this).addClass('static-href');
              $(this).prev('.arrow-menu').addClass('static-span');
            }

          });

          $('.arrow-menu').unbind('click').bind('click', function() {
            var spanHref = $(this).data('href');
            window.location.href = spanHref;
          });
          
          // EXPOSED FILTERS
          $('.views-exposed-form input.form-submit').click(function() {
            var search_text = $('.views-exposed-form #edit-title').val();
            $('.views-exposed-form #edit-field-description-value').val(search_text);
          });

          script = true;
        }
      });
    }
  }
}(jQuery, Drupal));
