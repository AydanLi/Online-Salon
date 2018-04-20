/**
 * @file
 * Accordion
 */

(function ($) {
  // After click on show/hide button.
  $(document).on('click', '.show-hide-button', function () {
    $(this).siblings('.question-answer-wrapper').children('.answer').slideToggle(200);
    $(this).parent().toggleClass('expanded collapsed');
  });
})(jQuery);
