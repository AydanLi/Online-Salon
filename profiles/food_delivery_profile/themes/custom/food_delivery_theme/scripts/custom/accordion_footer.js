(function ($) {
  // After click on show/hide button.
  $(document).on('click','#footer-columns .region .block-title', function () {
    if($(window).width() <= 768) {
      $(this).parent().children('.block-content').slideToggle(200);
      $(this).toggleClass('open-accordion');
    }
  })
})(jQuery);
