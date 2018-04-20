/**
 * @file
 * Change mode of display products on catalog page.
 */

(function ($) {
  var mode;
  // Changing the type of display.
  function change_class(active) {
    var inactive;
    if (active == 'grid') {
      inactive = 'inline';
      mode = 1;
    }
    else {
      inactive = 'grid';
      mode = 0;
    }
    $('.' + active + '-display').addClass('active');
    $('.' + inactive + '-display').removeClass('active');
    $('.product-categories-page').removeClass(inactive + '-mode');
    $('.product-categories-page').addClass(active + '-mode');
  }
  $(document).ready(function () {
    change_class('grid');
  });
  Drupal.behaviors.grid_line = {
    attach: function (context, settings) {
      // After click on inline mode button.
      $(document).ready(function () {
        if (mode == 1) {
          change_class('grid');
        }
        else {
          $('.inline-display').addClass('active');
        }
      })
      $(document).on('click', '.inline-display', function () {
        if (!$('.product-categories-page').hasClass('inline-mode')) {
          change_class('inline');
        }
      })
      // After click on grid mode button.
      $(document).on('click', '.grid-display', function () {
        if (!$('.product-categories-page').hasClass('grid-mode')) {
          change_class('grid');
        }
      })
      if (matchMedia('(max-width: 1024px)').matches) {
        change_class('grid');
      }
    }
  }
})(jQuery);
