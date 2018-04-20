(function ($) {
  Drupal.behaviors.linksToHowItWorks = {
    attach: function (context, settings) {
      for (var i = 0; i < $('div').length; ++i) {
        if (window.location.hash.split('#')[1] === $('div')[i].id) {
          $($('div')[i])
            .parents('.question-answer-wrapper')
            .siblings('.show-hide-button')
            .trigger('click');
          $('html, body').stop().animate({
            'scrollTop': $($('div')[i]).offset().top - ($($('div')[i]).height() + 110)
          }, 1500, 'swing', function () {
            // $($('div')[i])
            //   .parents('.question-answer-wrapper')
            //   .siblings('.show-hide-button')
            //   .trigger('click');
          });
        }
      }
    }
  };
})(jQuery);