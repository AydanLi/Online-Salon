<?php

/**
 * @file
 * The functional form.
 */

/**
 * Draw form.
 */
function food_delivery_common_add_cart($form, &$form_state) {

  $view = views_get_view('custom_shopping_cart_block');
  $view->set_display('block');
  $view->pre_execute();
  $view->execute();

  $commands[] = ajax_command_replace('.view-custom-shopping-cart-block', $view->render());

  return array(
    '#type' => 'ajax',
    '#commands' => $commands,
  );
}

/**
 * "Add to cart" button submit callback.
 */
function food_delivery_common_add_to_cart_form_submit($form, &$form_state){
  $form_state['rebuild'] = TRUE;
}
