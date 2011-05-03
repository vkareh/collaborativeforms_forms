<?php

/**
 * Implementation of hook_default_values_values().
 */
function collaborativeforms_forms_default_values_values() {
  $export = array();
  $values = new stdClass;
  $values->disabled = FALSE; /* Edit this to true to make a default values disabled initially */
  $values->api_version = 1;
  $values->name = 'yes_no';
  $values->description = 'Yes/No';
  $values->data = array(
    0 => array(
      'value' => '1',
      'label' => 'Yes',
      'weight' => '-2',
    ),
    1 => array(
      'value' => '0',
      'label' => 'No',
      'weight' => '-1',
    ),
  );

  $export['yes_no'] = $values;
  return $export;
}
