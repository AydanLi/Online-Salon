/**
 * @file
 * Interaction with main menu.
 */

(function ($) {
  // After click on menu close button.
  $(document).on('click','.menu-close', function () {
    $('#menu').fadeOut(300);
    $('html,body').css('overflow','auto');
    $('html,body').css('overflow-x','hidden');
  })
  // After click on menu open button.
  $(document).on('click','.menu-open', function () {
    $('#menu').fadeIn(300);
    $('html,body').css('overflow','hidden');
  })
})(jQuery);
