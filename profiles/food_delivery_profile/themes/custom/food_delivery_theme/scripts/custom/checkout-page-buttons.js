(function ($) {
  $(document).ready(function () {
    var continueButton = $('input.checkout-continue');
    var parentCheckoutButtons = $('.checkout-buttons > .fieldset-wrapper');
    var wrapper = $('<div class="continue-wrap"></div>');
    wrapper.append(continueButton);
    parentCheckoutButtons.prepend(wrapper);

    var checkoutButtonsText = $('.checkout-buttons .button-operator');
    checkoutButtonsText.text('Maybe you want to go back?');
  });
})(jQuery);