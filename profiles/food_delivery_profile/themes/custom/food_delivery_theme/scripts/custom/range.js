(function ($) {
  Drupal.behaviors.range = {
    attach: function (context, settings) {
      $(document).ready(function () {
        var rangeFrom = $('.ajax-facets-slider-amount-min');
        var rangeTo = $('.ajax-facets-slider-amount-max');
        var spanFrom = document.createElement('span');
        var spanTo = document.createElement('span');

        $(spanFrom).text('$' + rangeFrom.val());
        $(spanTo).text('$' + rangeTo.val());
        $('.ui-slider-handle:first-of-type').append(spanFrom);
        $('.ui-slider-handle:last-of-type').append(spanTo);
      });
    }
  }
})(jQuery);