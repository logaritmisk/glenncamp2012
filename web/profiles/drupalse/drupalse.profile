<?php
/**
* Return an array of the modules to be enabled when this profile is installed.
*
* @return
*  An array of modules to be enabled.
*/
function drupalse_profile_modules() {
  return array(
    // Enable required core modules first.
    'block',
    'filter',
    'node',
    'system',
    'user',
    'dblog',
    // Enable optional core modules next.
    'comment',
    'help',
    'menu',
    'taxonomy',
    'path',
    'profile',
    // Contrib:
    'checkbox_validate',
    'admin',
    'pathauto',
    'path_redirect',
    'comment_notify',
    'ctools',
    'context',
    'strongarm',
    'token',
    'content',
    'content_permissions',
    'fieldgroup',
    'number',
    'optionwidgets',
    'text',
    'filefield',
    'imagefield',
    'nodereference',
    'userreference',
    'nodeaccess_userreference',
    'link',
    'auto_nodetitle',
    'imageapi',
    'imageapi_gd',
    'imagecache',
    'imagecache_ui',
    'jquery_ui',
    'date_api',
    'date',
    'date_popup',
    'date_tools',
    'date_timezone',
    'views',
    'views_ui',
    'signup',
    'signup_profile',
    'uc_cart',
    'ca',
    'uc_order',
    'uc_store',
    'uc_payment',
    'uc_product',
    'uc_signup',
    'flag',
    'features',
    'diff',
    'uuid',
    'uuid_features',
    'skinr',
    'ctools',
    'panels',
      
    // COD features are installed during a profile task.
  );
}

/**
* Return a description of the profile for the initial installation screen.
*
* @return
*   An array with keys 'name' and 'description' describing this profile.
*/
function drupalse_profile_details() {
  return array(
    'name' => 'DrupalCamp Sweden Distribution',
    'description' => 'This software will help you organize a DrupalCamp Sweden-style event.',
  );
}

/**
 * Helper function defines the COD modules.
 */
function _drupalse_profile_modules() {
  return array(
    'cod_base',
    'cod_session',
    'cod_events',
    'cod_community',
    'cod_front_page',
    'cod_news',
    'cod_sponsors',
  );
}

/**
 * Implementation of hook_profile_task_list().
 */
function drupalse_profile_task_list() {
  $tasks['drupalse-modules-batch'] = st('Set up COD features');
  $tasks['drupalse-cleanup'] = st('Cleanup tasks');
  return $tasks;
}

/**
 * Implementation of hook_profile_tasks().
 */
function drupalse_profile_tasks(&$task, $url) {
  $output = '';

  // The profile task is called first.
  if ($task == 'profile') {
    // Begin by creating the page content type.
    $task = 'create-page-type';
  }

  // Create a page content type.
  if ($task == 'create-page-type') {
    $type = array(
      'type' => 'page',
      'name' => st('Page'),
      'module' => 'node',
      'description' => st("Use the <em>Page</em> content type for mostly static content like the \"About us\" section of a website. By default, a <em>page</em> entry does not allow comments and is not featured on the site's home page."),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
      'help' => '',
      'min_word_count' => '',
    );

    $type = (object) _node_type_set_defaults($type);
    node_type_save($type);

    // Default page to not be promoted and have comments disabled.
    variable_set('node_options_page', array('status'));
    variable_set('comment_page', COMMENT_NODE_DISABLED);
    // Don't display date and author information for page nodes by default.
    $theme_settings = variable_get('theme_settings', array());
    $theme_settings['toggle_node_info_page'] = FALSE;
    variable_set('theme_settings', $theme_settings);

    // Update the menu router information.
    menu_rebuild();

    // Next is the COD features install task.
    $task = 'drupalse-modules';
  }

  // Install some more modules and maybe localization helpers too
  if ($task == 'drupalse-modules') {
    $modules = _drupalse_profile_modules();
    $files = module_rebuild_cache();
    // Create batch
    foreach ($modules as $module) {
      $batch['operations'][] = array('_install_module_batch', array($module, $files[$module]->info['name']));
    }    
    $batch['finished'] = '_drupalse_profile_batch_finished'; // The finish op will set the next task.
    $batch['title'] = st('Installing @drupal', array('@drupal' => drupal_install_profile_name()));
    $batch['error_message'] = st('The installation has encountered an error.');

    // Start a batch, switch to 'cod-modules-batch' task. We need to
    // set the variable here, because batch_process() redirects.
    variable_set('install_task', 'drupalse-modules-batch');
    batch_set($batch);
    batch_process($url, $url);
    // Jut for cli installs. We'll never reach here on interactive installs.
    return;
  }
  // We are running a batch task for this profile so basically do nothing and return page
  if ($task == 'drupalse-modules-batch') {
    include_once 'includes/batch.inc';
    $output = _batch_page();
  }

  // Our final task, clear caches and revert features.
  if ($task == 'drupalse-cleanup') {
    // This isn't actually necessary as there are no node_access() entries,
    // but we run it to prevent the "rebuild node access" message from being
    // shown on install.
    node_access_rebuild();

    // Rebuild key tables/caches
    drupal_flush_all_caches();
    // Set acquia_prosper as the default theme.
    db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' and name ='%s'", 'fusion_core');
    db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' and name ='%s'", 'fusion_swimmingly');
    variable_set('theme_default', 'garland');
    // Set the default admin theme to bluemarine b/c it is good.
    variable_set('admin_theme', 'seven');
    // Revert features to be sure everything is setup correctly.
    // We revert cod_base last because it assigns permissions to roles defined
    // in the other COD Feature modules. See http://drupal.org/node/1210246
    // for an example of why this is necessary.
    $revert = array(
      'cod_community' => array('variable'),
      'cod_events' => array('variable'),
      'cod_news' => array('variable'),
      'cod_session' => array('variable'),
      'cod_sponsors' => array('variable'),
      'cod_base' => array('variable', 'user_permission'),
    );
    features_revert($revert);


    // Inform installation we are done.
    $task = 'profile-finished';
  }
  return $output;
}

/**
 * Finished callback for the modules install batch.
 *
 * Advance installer task to cod-cleanup.
 */
function _drupalse_profile_batch_finished($success, $results) {
  variable_set('install_task', 'drupalse-cleanup');
}

/**
* Perform any final installation tasks for this profile.
*
* @return
*   An optional HTML string to display to the user on the final installation
*   screen.
*/
function drupalse_profile_final() {
  
}
