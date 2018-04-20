(function ($) {
  Drupal.behaviors.animationAddToCart = {
    attach: function (context, settings) {
      $(document).ready(function () {
        $('.add-to-cart-button .form-submit').on("click", function (e) {
          var img = $(e.target).parents('.add-to-cart-form').siblings('.product-image');
          $(img)
            .clone()
            .css({ 'position': 'absolute', 'z-index': '11100', top: $(img).offset().top, left: $(img).offset().left })
            .appendTo("body")
            .animate({
              opacity: 0.5,
              left: $(".my-cart-info").offset()['left'],
              top: $(".my-cart-info").offset()['top'],
              width: 20
            }, 1000, function () {
              $(this).remove();
            });
        });
        if (matchMedia('(max-width: 480px)').matches) {
          $('.not-front .page-product-item .commerce-add-to-cart .form-submit').on("click", function (e) {
            var input = $('#edit-quantity');
            var wrap = $('<strong></strong>').text('+' + input.val());
            $(wrap)
              .css({
                'font-size': '30px',
                'position': 'absolute',
                'color': '#424242',
                'z-index': '11100',
                top: $(input).offset().top,
                left: $(input).offset().left
              })
              .appendTo("body")
              .animate({
                opacity: 0.5,
                left: $(".menu-open").offset()['left'],
                top: $(".menu-open").offset()['top']
              }, 1000, function () {
                $(this).remove();
              });
          });
        }
        $('.commerce-add-to-cart .form-submit').on('click', function () {
          $('#cboxClose').trigger('click');
          $('body').removeClass('colorbox--active');
        });
        $('#colorbox .form-submit, .not-front .page-product-item .commerce-add-to-cart .form-submit').on('click', function () {
          setTimeout(function () {
            $(".view-custom-shopping-cart-block .view-main-content").slideDown(200);
          }, 1000);
        });
        $('#cboxOverlay, #cboxClose').on('click', function () {
          $('body').removeClass('colorbox--active');
        });
        $('a.init-colorbox-node-processed-processed').on('click', function () {
          $('body').addClass('colorbox--active');
        });
      });
    }
  };

  $(document).on('click', function (e) {
    var div = $(".header-cart-block"),
      colorbox = $("#colorbox");
    if ($.contains(div[0], e.target)) {
      if ($(e.target).hasClass('my-cart-info')) {
        $(".view-custom-shopping-cart-block .view-main-content").stop().slideToggle(200);
      } else {
        $(".view-custom-shopping-cart-block .view-main-content").stop().slideDown(200);
      }
    } else {
      $(".view-custom-shopping-cart-block .view-main-content").stop().slideUp(200);
    }
  });

})(jQuery);