(function ($) {
  if (matchMedia('(max-width: 768px)').matches) {
    $(document).on('click', '.page-checkout .title', function (e) {
      e.preventDefault();
      e.target.classList.toggle('open');
      $(this).parents('.views-field').siblings('.content-wrapper').slideToggle(200);
    });
  }
})(jQuery);