<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "deliveryfood" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "deliveryfood".
 * 2. Uncomment the required function to use.
 */


/**
 * Preprocess variables for the html template.
 */

function deliveryfood_preprocess_html(&$vars) {
  global $theme_key;
  drupal_add_css('http://fonts.googleapis.com/css?family=Quicksand',
    array('group' => CSS_THEME));
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans',
    array('group' => CSS_THEME));
  drupal_add_css('http://fonts.googleapis.com/css?family=Droid+Sans',
    array('group' => CSS_THEME));
  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();
}
function deliveryfood_preprocess_page(&$vars, $hook) {
    if (isset($vars['node'])) { 
        $vars['theme_hook_suggestions'][] = 'page__'. str_replace('_', '--', $vars['node']->type);
    }
}

/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function deliveryfood_process_html(&$vars) {
}
// */

/**
 * Process variables for the region template.
 */
function deliveryfood_process_region(&$vars) {
  $vars['front_page'] = filter_xss_admin(variable_get('site_frontpage','#'));
  $vars['site_logo'] = theme_get_setting('logo');
  $vars['site_name'] = (theme_get_setting('toggle_name') ? filter_xss_admin(variable_get('site_name', 'Drupal')) : '');
}


/**
 * Override or insert variables for the page templates.
 */
function commerce_preprocess_page(&$vars) {
  // remove default drupal massage frome front page
  if (drupal_is_front_page()) {
    unset($vars['page']['content']['system_main']['default_message']); //will remove message "no front page content is created"
    drupal_set_title(''); //removes welcome message (page title)
  }
  drupal_add_library('system', 'jquery.cookie');
}

/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function deliveryfood_preprocess_node(&$vars) {
}
function deliveryfood_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function deliveryfood_preprocess_comment(&$vars) {
}
function deliveryfood_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function deliveryfood_preprocess_block(&$vars) {
}
function deliveryfood_process_block(&$vars) {
}
// */

/**
 * Add a placeholder to the Search form and Subscribe block.
*/
function deliveryfood_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'views_exposed_form') {
    $form['search_api_views_fulltext']['#attributes']['placeholder'] = t('Product search');
  }

  if ($form_id == 'simplenews_block_form_1') {
    $form['realname']['#attributes']['placeholder'] = t('Name');
    $form['mail']['#attributes']['placeholder'] = t('E-mail');
  }
}
