(function ($) {
  var cartSelector = '#views-form-commerce-cart-form-default';
  var field = '#edit-quantity';

  var changeQuantity = function (selector, a) {
    var oldVal = +$(selector).val();
    var newVal = oldVal + a;
    if (newVal < 0) {
      newVal = 0;
    }
    $(selector).val(String(newVal));
    return newVal;
  }

  var changeTotalField = function (a) {
    var price = $('.cbox-container .views-field-commerce-price .field-content').text();
    price = +price.split('$')[1];
    var total = price * a;
    total = "$" + total.toFixed(2);
    $('.cbox-container .price').text(total);
  }

  var changeQuantityCart = function (a, fieldSelector, context) {
    var index = $(context).index(fieldSelector);
    var selector = cartSelector + ' #edit-edit-quantity-' + index;
    changeQuantity(selector, a);

    // changeTotalFieldCart
    var parent = $(context).parents('tr');
    var defaultPrice = parent.children('.views-field-commerce-unit-price').text();
    defaultPrice = +defaultPrice.split('$')[1];
    var totalPrice = parent.children('.views-field-commerce-total').text();
    var selectorVal = +$(selector).val();
    totalPrice = defaultPrice * selectorVal;
    parent.children('.views-field-commerce-total').text('$' + totalPrice.toFixed(2));

    $(cartSelector + ' #edit-submit').trigger('click');
  }

  var sumTotalPrice = function () {
    var $totalPrice = $('.views-field-commerce-total.price');
    var sum = 0;
    for (var i = 0; i < $totalPrice.length; ++i) {
      var totalPrice = $totalPrice[i].textContent;
      totalPrice = +totalPrice.split('$')[1];
      sum = sum + totalPrice;
    }
    $('.line-item-total-raw').text('$' + sum.toFixed(2));
    $('.cart-total-price').text('$' + sum.toFixed(2));
  }

  $('.cbox-container').ready(function () {
    $(document).on('click', '.cbox-container .plus', function () {
      changeTotalField(changeQuantity(field, 1));
    });
    $(document).on('click', '.cbox-container .minus', function () {
      changeTotalField(changeQuantity(field, -1));
    });
    $(document).on('change', field, function () {
      var val = +$(field).val();
      if (val < 0) {
        val = 0;
        $(field).val('0');
      }
      changeTotalField(val);
    })
  });

  $(document).ready(function () {
    $(document).on('click', cartSelector + ' .plus', function () {
      changeQuantityCart(1, cartSelector + ' .plus', this);
      sumTotalPrice();
      $(cartSelector + ' #edit-submit').trigger('click');
    });
    $(document).on('click', cartSelector + ' .minus', function () {
      changeQuantityCart(-1, cartSelector + ' .minus', this);
      sumTotalPrice();
      $(cartSelector + ' #edit-submit').trigger('click');
    });
    $(document).on('change', cartSelector + ' .form-text', function () {
      $(cartSelector + ' #edit-submit').trigger('click');
    });
    $(document).on('click', '#delete', function () {
      var index = $(this).index(cartSelector + ' #delete');
      var selector = cartSelector + ' #edit-edit-quantity-' + index;
      $(selector).val('0');
      $(cartSelector + ' #edit-submit').trigger('click');
    });

    if ($('#views-form-commerce-cart-form-default').length > 0) {
      var headertext = [];
      var headers = document.querySelectorAll("#views-form-commerce-cart-form-default th");
      var tablerows = document.querySelectorAll("#views-form-commerce-cart-form-default th");
      var tablebody = document.querySelector("#views-form-commerce-cart-form-default tbody");
  
      for (var i = 0; i < headers.length; i++) {
        var current = headers[i];
        headertext.push(current.textContent.replace(/\r?\n|\r/, ""));
      }
      for (var i = 0, row; row = tablebody.rows[i]; i++) {
        for (var j = 0, col; col = row.cells[j]; j++) {
          col.setAttribute("data-th", headertext[j]);
        }
      }
    }
   });
})(jQuery);
