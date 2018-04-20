(function ($) {
  Drupal.behaviors.checkPrice = {
    attach: function (context, settings) {
      var checkPrice = function () {
        var productPrices = document.querySelectorAll('.product-price');
        if (productPrices.length > 0) {
          for (var i = 0; i < productPrices.length; ++i) {
            var textPrice = productPrices[i].textContent;

            if (!!productPrices[i].nextElementSibling) {
              var textSibling = productPrices[i].nextElementSibling.textContent;

              if (textPrice === textSibling) {
                productPrices[i].remove();
              }
            }
          }
        }
      }

      checkPrice();

      for (var i = 1; i < $('.load-more').length; ++i) {
        $('.load-more')[i].remove();
      }
    }
  };
})(jQuery);