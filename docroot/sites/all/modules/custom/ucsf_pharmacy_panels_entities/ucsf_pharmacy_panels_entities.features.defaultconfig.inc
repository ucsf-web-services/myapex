<?php
/**
 * @file
 * ucsf_pharmacy_panels_entities.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ucsf_pharmacy_panels_entities_defaultconfig_features() {
  return array(
    'ucsf_pharmacy_panels_entities' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ucsf_pharmacy_panels_entities_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: create fieldable basic_file.
  $permissions['create fieldable basic_file'] = array(
    'name' => 'create fieldable basic_file',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable image.
  $permissions['create fieldable image'] = array(
    'name' => 'create fieldable image',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable map.
  $permissions['create fieldable map'] = array(
    'name' => 'create fieldable map',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable quick_links.
  $permissions['create fieldable quick_links'] = array(
    'name' => 'create fieldable quick_links',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable spotlight.
  $permissions['create fieldable spotlight'] = array(
    'name' => 'create fieldable spotlight',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable table.
  $permissions['create fieldable table'] = array(
    'name' => 'create fieldable table',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable text.
  $permissions['create fieldable text'] = array(
    'name' => 'create fieldable text',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable video.
  $permissions['create fieldable video'] = array(
    'name' => 'create fieldable video',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable basic_file.
  $permissions['delete fieldable basic_file'] = array(
    'name' => 'delete fieldable basic_file',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable image.
  $permissions['delete fieldable image'] = array(
    'name' => 'delete fieldable image',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable map.
  $permissions['delete fieldable map'] = array(
    'name' => 'delete fieldable map',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable quick_links.
  $permissions['delete fieldable quick_links'] = array(
    'name' => 'delete fieldable quick_links',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable spotlight.
  $permissions['delete fieldable spotlight'] = array(
    'name' => 'delete fieldable spotlight',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable table.
  $permissions['delete fieldable table'] = array(
    'name' => 'delete fieldable table',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable text.
  $permissions['delete fieldable text'] = array(
    'name' => 'delete fieldable text',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable video.
  $permissions['delete fieldable video'] = array(
    'name' => 'delete fieldable video',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable basic_file.
  $permissions['edit fieldable basic_file'] = array(
    'name' => 'edit fieldable basic_file',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable image.
  $permissions['edit fieldable image'] = array(
    'name' => 'edit fieldable image',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable map.
  $permissions['edit fieldable map'] = array(
    'name' => 'edit fieldable map',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable quick_links.
  $permissions['edit fieldable quick_links'] = array(
    'name' => 'edit fieldable quick_links',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable spotlight.
  $permissions['edit fieldable spotlight'] = array(
    'name' => 'edit fieldable spotlight',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable table.
  $permissions['edit fieldable table'] = array(
    'name' => 'edit fieldable table',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable text.
  $permissions['edit fieldable text'] = array(
    'name' => 'edit fieldable text',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable video.
  $permissions['edit fieldable video'] = array(
    'name' => 'edit fieldable video',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
