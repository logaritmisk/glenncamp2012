<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function drupalse_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_user_panel_context';
  $handler->task = 'contact_user';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $export['contact_user_panel_context'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'page' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_nid_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['content'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'content';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['content'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'content';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '4',
      'order' => '1',
      'comments_per_page' => '50',
      'anchor' => 1,
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['content'][3] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-6'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_ticket';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 7,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-7'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_registerpromo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-8'] = $pane;
    $display->panels['sidebar_left'][3] = 'new-8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'DrupalCamp',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_site';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'aside_beta' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'service' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['footer'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['header'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'DrupalCamp mission',
      'title' => '',
      'body' => 'A one-day conference about the highly popular Drupal CMS. Join us and learn more about Drupal and the web as a whole from our awesome speakers and share ideas with others.',
      'format' => '1',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mission',
      'css_class' => 'push-5',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['header'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'main';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'navigation',
      'css_class' => 'push-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['main'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-12 push-1 alpha',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['main'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['main'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'service';
    $pane->type = 'menu_tree';
    $pane->subtype = 'secondary-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'secondary-links',
      'parent_mlid' => '_active:0',
      'title_link' => 0,
      'admin_title' => 'Secondary menu',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-7'] = $pane;
    $display->panels['service'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_3';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'DrupalCamp user',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'user*
admin*
node/*/edit
node/add/*
conference-admin/*',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'dc_site';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'aside_beta' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'service' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['footer'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['header'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'DrupalCamp mission',
      'title' => '',
      'body' => 'A one-day conference about the highly popular Drupal CMS. Join us and learn more about Drupal and the web as a whole from our awesome speakers and share ideas with others.',
      'format' => '1',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mission',
      'css_class' => 'push-5',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['header'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'main';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'navigation',
      'css_class' => 'push-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['main'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-12 push-1 alpha',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['main'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-12 push-1 alpha drupalcamp-user-page',
    );
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['main'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'service';
    $pane->type = 'menu_tree';
    $pane->subtype = 'secondary-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'secondary-links',
      'parent_mlid' => 'secondary-links:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-7'] = $pane;
    $display->panels['service'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function drupalse_panels_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_awards';
  $page->task = 'page';
  $page->admin_title = 'Drupal awards';
  $page->admin_description = '';
  $page->path = 'drupal-awards';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Awards',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_awards_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_awards';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'name' => 'node_add_form',
        'id' => 1,
        'identifier' => 'Node add form',
        'keyword' => 'node_add',
        'context_settings' => array(
          'type' => 'drupalse_nomination',
        ),
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_awards';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_node_add_form_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['content'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'content';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_node_add_form_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['content'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_awards2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['content'][3] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'sidebar_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'DrupalCamp logo',
      'title' => '',
      'body' => '<img src="/profiles/drupalse/themes/drupalcamp/images/drupal-awards-black.png" alt="Drupal Awards" />',
      'format' => '2',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'addthis-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'center',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-6'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_awards'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_community';
  $page->task = 'page';
  $page->admin_title = 'Community';
  $page->admin_description = '';
  $page->path = 'community';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Community',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_community_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_community';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'attendees-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'addthis-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Spread the word about DrupalCamp',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_registerpromo';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_nominate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-4'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_community'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_front';
  $page->task = 'page';
  $page->admin_title = 'Front';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
      'aside_beta' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'boxes-front_conference_info';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['highlighted'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'highlighted';
    $pane->type = 'views_panes';
    $pane->subtype = 'Sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'override_title' => 1,
      'override_title_text' => 'Many thanks to our sponsors',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'front-sponsors',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['highlighted'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Sold out',
      'title' => 'We\'re sold out',
      'body' => 'Over 200 people have registered for DrupalCamp Stockholm, and unfortunately that\'s the limit of how many people we can host. There\'s a <a href="/waiting-list">waiting list</a> available in case of cancelations.',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_registerpromo';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'addthis-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Spread the word about DrupalCamp',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'dcse_biljett_count-0';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tickets left',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-7'] = $pane;
    $display->panels['sidebar_left'][3] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_buyticket';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 7,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-8'] = $pane;
    $display->panels['sidebar_left'][4] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'user-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-9'] = $pane;
    $display->panels['sidebar_left'][5] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'sidebar_left';
    $pane->type = 'drupalse_twitter_content_type';
    $pane->subtype = 'drupalse_twitter_content_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'item1' => '',
      'item2' => NULL,
      'override_title' => 1,
      'override_title_text' => 'DrupalCamp Tweets',
      'tag' => '#drupalsthlm OR from:drupalsthlm OR to:drupalsthlm OR @drupalsthlm',
      'items' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'twitter-pane',
    );
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-10'] = $pane;
    $display->panels['sidebar_left'][6] = 'new-10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_front'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_schedule';
  $page->task = 'page';
  $page->admin_title = 'Drupalcamp Schedule';
  $page->admin_description = '';
  $page->path = 'schedule';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Schedule',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_schedule_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_schedule';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'highlighted';
    $pane->type = 'views_panes';
    $pane->subtype = 'cod_schedule-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['highlighted'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_schedule'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_sessions';
  $page->task = 'page';
  $page->admin_title = 'Sessions';
  $page->admin_description = '';
  $page->path = 'sessions';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sessions',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_sessions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_sessions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sessions';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'sessions',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_sessions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['highlighted'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_registerpromo';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_sessionpromo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-4'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_sessions'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_sponsors';
  $page->task = 'page';
  $page->admin_title = 'Sponsors';
  $page->admin_description = '';
  $page->path = 'sponsors';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sponsors',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_sponsors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_sponsors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'Sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_8',
      'override_title' => 1,
      'override_title_text' => 'Organizing',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sponsor-page sponsor-page-organizing',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'Sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sponsor-page sponsor-page-silver',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['content'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'Sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sponsor-page sponsor-page-silver',
    );
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['content'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_sponsors'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_ticket';
  $page->task = 'page';
  $page->admin_title = 'Ticket';
  $page->admin_description = '';
  $page->path = 'ticket';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 7,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Buy ticket',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_ticket_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_ticket';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Buy a ticket';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_ticket';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'addthis-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Spread the word about DrupalCamp',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'boxes-drupalse_sessionpromo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_ticket'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalse_user_bookmarks';
  $page->task = 'page';
  $page->admin_title = 'User bookmarks';
  $page->admin_description = '';
  $page->path = 'user/%user/bookmarks';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Bookmarks',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'uid',
      'settings' => array(),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalse_user_bookmarks_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'drupalse_user_bookmarks';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'dc_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'sidebar_left' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'flag_bookmarks_tab-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalse_user_bookmarks'] = $page;

 return $pages;

}
