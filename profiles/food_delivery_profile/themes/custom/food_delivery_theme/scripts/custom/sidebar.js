/**
 * @file
 * Interaction with sidebar.
 */

(function ($) {
  $(document).on('ready', function () {
    if ($('.region-sidebar-first a').hasClass('active')) {
      $('.region-sidebar-first a.active').parents('li').addClass('active');
      $('.region-sidebar-first a.active').parents('.item-list').children('h3').addClass('active');
    }
  });
  // Animation for product categories menu.
  $(document).on('click', '.product-categories h3', function () {
    // To determine a class that will need to perform actions.
    var elements_class = $(this).text().toLowerCase();
    var selector = '.product-categories .view-content .' + elements_class;
    // Check current value of display attribute of elements.
    var attr_display = $(this).next().css('display');
    // If 'display: none' then show elements with class elements_class.
    // Else hide elements with class elements_class.
    if (attr_display == 'none') {
      $(selector).show(300);
    }
    else {
      $(selector).hide(300);
    }
  });

  $(document).on('click', '.region-sidebar-first .item-list h3', function (e) {
    e.preventDefault();
    this.classList.toggle('active');
  });
})(jQuery);
