<?php

/**
 * Implementation of hook_strongarm().
 */
function collaborativeforms_forms_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dirtyforms_forms_policy';
  $strongarm->value = 'whitelist';

  $export['dirtyforms_forms_policy'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dirtyforms_forms_rules';
  $strongarm->value = array(
    0 => '*_node_form',
  );

  $export['dirtyforms_forms_rules'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dirtyforms_troubleshooting_alerts';
  $strongarm->value = 0;

  $export['dirtyforms_troubleshooting_alerts'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dirtyforms_troubleshooting_highlight';
  $strongarm->value = 0;

  $export['dirtyforms_troubleshooting_highlight'] = $strongarm;
  return $export;
}
