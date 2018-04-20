<?php
/**
 * @file
 * commerce_settings.features.commerce_checkout_panes.inc
 */

/**
 * Implements hook_commerce_checkout_panes_default().
 */
function commerce_settings_commerce_checkout_panes_default() {
  $panes = array();

  $panes['account'] = array(
    'page' => 'disabled',
    'weight' => -17,
    'pane_id' => 'account',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
    'review' => 0,
  );

  $panes['account_form'] = array(
    'page' => 'login',
    'pane_id' => 'account_form',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -18,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['cart_contents'] = array(
    'page' => 'disabled',
    'weight' => -19,
    'pane_id' => 'cart_contents',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
    'review' => 1,
  );

  $panes['checkout_completion_message'] = array(
    'page' => 'complete',
    'fieldset' => 0,
    'pane_id' => 'checkout_completion_message',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_review'] = array(
    'page' => 'review',
    'fieldset' => 0,
    'pane_id' => 'checkout_review',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_payment'] = array(
    'page' => 'review',
    'weight' => -19,
    'pane_id' => 'commerce_payment',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 0,
  );

  $panes['commerce_shipping'] = array(
    'page' => 'shipping',
    'weight' => -18,
    'review' => 0,
    'pane_id' => 'commerce_shipping',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
  );

  $panes['commerce_user_profile_pane'] = array(
    'page' => 'checkout',
    'weight' => -20,
    'fieldset' => 1,
    'pane_id' => 'commerce_user_profile_pane',
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['continue_pane'] = array(
    'page' => 'disabled',
    'review' => 0,
    'weight' => -18,
    'pane_id' => 'continue_pane',
    'fieldset' => 0,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
  );

  $panes['customer_profile_billing'] = array(
    'page' => 'checkout',
    'weight' => -17,
    'pane_id' => 'customer_profile_billing',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 0,
  );

  $panes['customer_profile_shipping'] = array(
    'page' => 'checkout',
    'weight' => -19,
    'pane_id' => 'customer_profile_shipping',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 0,
  );

  $panes['cvp-billing_rewiew_1-commerce_checkout_pane_1'] = array(
    'page' => 'shipping',
    'review' => 1,
    'enabled' => 1,
    'weight' => -20,
    'pane_id' => 'cvp-billing_rewiew_1-commerce_checkout_pane_1',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
  );

  $panes['login_pane'] = array(
    'page' => 'disabled',
    'review' => 0,
    'weight' => -20,
    'pane_id' => 'login_pane',
    'fieldset' => 0,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
  );

  return $panes;
}
