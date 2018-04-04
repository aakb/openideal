<?php
/**
 * @file
 * fe_challenge.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fe_challenge_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'challenges';
  $page->task = 'page';
  $page->admin_title = 'Challenges';
  $page->admin_description = '';
  $page->path = 'challenges';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Challenges',
    'name' => 'main-menu',
    'weight' => '-1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_challenges_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'challenges';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap:ideal_two_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97c888e9-bd4e-4493-bf0f-e62fd1481b30';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_challenges_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-be2d700d-5398-49e2-bb00-8eae27379658';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-challenges_list-block_1';
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
  $pane->locks = array();
  $pane->uuid = 'be2d700d-5398-49e2-bb00-8eae27379658';
  $display->content['new-be2d700d-5398-49e2-bb00-8eae27379658'] = $pane;
  $display->panels['center'][0] = 'new-be2d700d-5398-49e2-bb00-8eae27379658';
  $pane = new stdClass();
  $pane->pid = 'new-fbedfbe9-e0d8-4d80-b634-3d02b0820b24';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Add idea',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a href="node/add/idea" class="add-idea">Add Idea</a>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fbedfbe9-e0d8-4d80-b634-3d02b0820b24';
  $display->content['new-fbedfbe9-e0d8-4d80-b634-3d02b0820b24'] = $pane;
  $display->panels['sidebar'][0] = 'new-fbedfbe9-e0d8-4d80-b634-3d02b0820b24';
  $pane = new stdClass();
  $pane->pid = 'new-27cbb262-783b-438a-a5c9-0cb910ccb1f0';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views-f82b385d04a27538a1646ec3e53c5fef';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Challenges',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '27cbb262-783b-438a-a5c9-0cb910ccb1f0';
  $display->content['new-27cbb262-783b-438a-a5c9-0cb910ccb1f0'] = $pane;
  $display->panels['sidebar'][1] = 'new-27cbb262-783b-438a-a5c9-0cb910ccb1f0';
  $pane = new stdClass();
  $pane->pid = 'new-4c25646d-c336-4334-8940-1cf0eb38fda8';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views-activity-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4c25646d-c336-4334-8940-1cf0eb38fda8';
  $display->content['new-4c25646d-c336-4334-8940-1cf0eb38fda8'] = $pane;
  $display->panels['sidebar'][2] = 'new-4c25646d-c336-4334-8940-1cf0eb38fda8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-be2d700d-5398-49e2-bb00-8eae27379658';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['challenges'] = $page;

  return $pages;

}
