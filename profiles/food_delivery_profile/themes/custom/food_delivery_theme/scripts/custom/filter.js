(function ($) {
  $(document).on('click', '.filter-button', function (e) {
    e.preventDefault();
    e.target.classList.toggle('open');
    $(".region-sidebar-first").slideToggle(200);
  });
})(jQuery);
