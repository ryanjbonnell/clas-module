<?php

/**
 * @file
 * Bulk export of panelizer objects generated by Bulk export module.
 */

/**
 * Implements hook_panelizer_defaults().
 */
function asu_clas_shesc_research_topics_panelizer_defaults() {
  $panelizers = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:research_topic:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'research_topic';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'mosconeplus';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'rowone' => array(
        'bgcolors' => '',
        'padtop' => '',
        'padbot' => '',
        'martop' => 'add-margin-42-above',
        'marbot' => '',
      ),
      'rowthree' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'footer' => NULL,
      'rowtwo' => NULL,
    ),
    'rowtwo' => array(
      'style' => '0',
    ),
    'rowthree' => array(
      'style' => 'tabs',
    ),
    'rowone' => array(
      'style' => 'customstyles',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '657a7ef2-38c3-46d0-8523-96f5b2a49b91';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-de5fa285-b54f-4778-8bc5-67a07266e601';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
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
    $pane->locks = array();
    $pane->uuid = 'de5fa285-b54f-4778-8bc5-67a07266e601';
    $display->content['new-de5fa285-b54f-4778-8bc5-67a07266e601'] = $pane;
    $display->panels['header'][0] = 'new-de5fa285-b54f-4778-8bc5-67a07266e601';
    $pane = new stdClass();
    $pane->pid = 'new-4b97e3b8-c711-4191-b31b-30e51b213686';
    $pane->panel = 'rowone';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'research-topic-name',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b97e3b8-c711-4191-b31b-30e51b213686';
    $display->content['new-4b97e3b8-c711-4191-b31b-30e51b213686'] = $pane;
    $display->panels['rowone'][0] = 'new-4b97e3b8-c711-4191-b31b-30e51b213686';
    $pane = new stdClass();
    $pane->pid = 'new-3b7cbdfd-062b-4bcc-8f78-304bc32e5de9';
    $pane->panel = 'rowthree';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Research',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3b7cbdfd-062b-4bcc-8f78-304bc32e5de9';
    $display->content['new-3b7cbdfd-062b-4bcc-8f78-304bc32e5de9'] = $pane;
    $display->panels['rowthree'][0] = 'new-3b7cbdfd-062b-4bcc-8f78-304bc32e5de9';
    $pane = new stdClass();
    $pane->pid = 'new-cbff43d9-6003-4fd5-9fe1-e6ca381008e6';
    $pane->panel = 'rowthree';
    $pane->type = 'views_panes';
    $pane->subtype = 'research_faculty-expertise_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_isearch_expertise_areas_tid' => array(),
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Team',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cbff43d9-6003-4fd5-9fe1-e6ca381008e6';
    $display->content['new-cbff43d9-6003-4fd5-9fe1-e6ca381008e6'] = $pane;
    $display->panels['rowthree'][1] = 'new-cbff43d9-6003-4fd5-9fe1-e6ca381008e6';
    $pane = new stdClass();
    $pane->pid = 'new-2d400563-ea53-4f93-a0ab-549253592a31';
    $pane->panel = 'rowtwo';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:research_topic_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'asu_clas_research_area_image',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'research-topic-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2d400563-ea53-4f93-a0ab-549253592a31';
    $display->content['new-2d400563-ea53-4f93-a0ab-549253592a31'] = $pane;
    $display->panels['rowtwo'][0] = 'new-2d400563-ea53-4f93-a0ab-549253592a31';
    $pane = new stdClass();
    $pane->pid = 'new-f60fae11-f1b3-4b7c-aad9-7416713333ce';
    $pane->panel = 'rowtwo';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:research_topic_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'research-topic-description',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f60fae11-f1b3-4b7c-aad9-7416713333ce';
    $display->content['new-f60fae11-f1b3-4b7c-aad9-7416713333ce'] = $pane;
    $display->panels['rowtwo'][1] = 'new-f60fae11-f1b3-4b7c-aad9-7416713333ce';
    $pane = new stdClass();
    $pane->pid = 'new-c5825ce9-1ebe-4436-a79a-073174e08ec5';
    $pane->panel = 'sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1518,
      'parent' => 'main-menu:1518',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
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
    $pane->locks = array();
    $pane->uuid = 'c5825ce9-1ebe-4436-a79a-073174e08ec5';
    $display->content['new-c5825ce9-1ebe-4436-a79a-073174e08ec5'] = $pane;
    $display->panels['sidebar'][0] = 'new-c5825ce9-1ebe-4436-a79a-073174e08ec5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $panelizers['node:research_topic:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:research_topic:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'research_topic';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3b18c211-5758-48d4-a99f-5d090eb27b9f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a450c708-7856-4082-bd6f-cf53ea42b79b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:research_topic_relation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a450c708-7856-4082-bd6f-cf53ea42b79b';
    $display->content['new-a450c708-7856-4082-bd6f-cf53ea42b79b'] = $pane;
    $display->panels['center'][0] = 'new-a450c708-7856-4082-bd6f-cf53ea42b79b';
    $pane = new stdClass();
    $pane->pid = 'new-b58506b6-5b07-4938-a41e-1126ed6f6e89';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b58506b6-5b07-4938-a41e-1126ed6f6e89';
    $display->content['new-b58506b6-5b07-4938-a41e-1126ed6f6e89'] = $pane;
    $display->panels['center'][1] = 'new-b58506b6-5b07-4938-a41e-1126ed6f6e89';
    $pane = new stdClass();
    $pane->pid = 'new-8ee96198-c473-47e7-8a27-1a85c40795e4';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:research_topic_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'asu_clas_research_area_image',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ee96198-c473-47e7-8a27-1a85c40795e4';
    $display->content['new-8ee96198-c473-47e7-8a27-1a85c40795e4'] = $pane;
    $display->panels['center'][2] = 'new-8ee96198-c473-47e7-8a27-1a85c40795e4';
    $pane = new stdClass();
    $pane->pid = 'new-b0e7ae7e-f0d2-424a-9605-6f9eaaceba16';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:research_topic_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b0e7ae7e-f0d2-424a-9605-6f9eaaceba16';
    $display->content['new-b0e7ae7e-f0d2-424a-9605-6f9eaaceba16'] = $pane;
    $display->panels['center'][3] = 'new-b0e7ae7e-f0d2-424a-9605-6f9eaaceba16';
    $pane = new stdClass();
    $pane->pid = 'new-fe26d3d6-8c5e-4781-a4fe-1fd71cdb2886';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe26d3d6-8c5e-4781-a4fe-1fd71cdb2886';
    $display->content['new-fe26d3d6-8c5e-4781-a4fe-1fd71cdb2886'] = $pane;
    $display->panels['center'][4] = 'new-fe26d3d6-8c5e-4781-a4fe-1fd71cdb2886';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fe26d3d6-8c5e-4781-a4fe-1fd71cdb2886';
  $panelizer->display = $display;
  $panelizers['node:research_topic:default:default'] = $panelizer;

  return $panelizers;
}