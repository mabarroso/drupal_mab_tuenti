<?php

/**
 * @file
 * Administration page for the tuenti like this Button.
 */

/**
 * Menu callback: displays the tuenti like this module settings page.
 *
 * @ingroup forms
 */
function mab_tuenti_admin_settings($form) {

  $form['mab_tuenti_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display the tuenti like this button on these content types:'),
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('mab_tuenti_node_types', array('article')),
  );
  $form['mab_tuenti_showonteasers'] = array(
    '#type' => 'radios',
    '#title' => t('Display button on teasers?'),
    '#options' => array(t('No'), t('Yes')),
    '#default_value' => variable_get('mab_tuenti_showonteasers', 0),
    '#description' => t('If <em>Yes</em> is selected, the button will appear when the node is displayed in teaser mode. Otherwise it will only appear when the full node is being viewed.'),
  );
  return system_settings_form($form);
}