<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function collaborativeforms_forms_user_default_permissions() {
  $permissions = array();

  // Exported permission: access followup
  $permissions['access followup'] = array(
    'name' => 'access followup',
    'roles' => array(
      '0' => 'data entry',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer conditional fields
  $permissions['administer conditional fields'] = array(
    'name' => 'administer conditional fields',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer followup
  $permissions['administer followup'] = array(
    'name' => 'administer followup',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer followup record
  $permissions['administer followup record'] = array(
    'name' => 'administer followup record',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer values
  $permissions['administer values'] = array(
    'name' => 'administer values',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: designate fields as unique
  $permissions['designate fields as unique'] = array(
    'name' => 'designate fields as unique',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view own private number
  $permissions['view own private number'] = array(
    'name' => 'view own private number',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'data entry',
      '2' => 'developer',
    ),
  );

  // Exported permission: view private number
  $permissions['view private number'] = array(
    'name' => 'view private number',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  return $permissions;
}
