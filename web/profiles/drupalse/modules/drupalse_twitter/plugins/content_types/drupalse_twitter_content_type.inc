<?php
/**
 * Define Plugin
 */
$plugin = array(
  'title' => t('DrupalCamp twitter'),
  'description' => t('Pulls Drupalcamp tweets'),

  // 'single' => TRUE means has no subtypes.
  'single' => TRUE,
  // Constructor.
  'content_types' => array('drupalse_twitter_content_type'),
  // Name of a function which will render the block.
  'render callback' => 'drupalse_twitter_content_type_render',
  // The default context.
  'defaults' => array(),

  // This explicitly declares the config form. Without this line, the func would be
  // ctools_plugin_example_no_context_content_type_edit_form.
  'edit form' => 'drupalse_twitter_content_type_edit_form',

  // Icon goes in the directory with the content type.
  'icon' => 'icon_example.png',
  'category' => array(t('DrupalCamp'), -9),
);

/**
 * Run-time rendering of the body of the block.
 */
function drupalse_twitter_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  // The title actually used in rendering
  $block->title = check_plain("No-context content type");
  $block->content = twitter_pull_render(($conf['tag']), '', $conf['items']);
  
  return $block;

}

/**
 * 'Edit form' callback for the content type.
 */
function drupalse_twitter_content_type_edit_form(&$form, &$form_state) {
  $conf = $form_state['conf'];
  $form['tag'] = array(
    '#type' => 'textfield',
    '#title' => t('Specify tag/user to pull from'),
    '#size' => 50,
    '#description' => t('Specify what twitter tag/user to pull from. Example #drupal'),
    '#default_value' => !empty($conf['tag']) ? $conf['tag'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  $form['items'] = array(
    '#type' => 'textfield',
    '#title' => t('Specify number of items to pull'),
    '#size' => 50,
    '#description' => t('How many tweets do you want this pane to display?'),
    '#default_value' => !empty($conf['items']) ? $conf['items'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  return $form;
}

function drupalse_twitter_content_type_edit_form_submit(&$form, &$form_state) {
  foreach (array('tag', 'items') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

