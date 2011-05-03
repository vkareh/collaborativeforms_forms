<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function collaborativeforms_forms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "values" && $api == "default_values_list") {
    return array("version" => 1);
  }
}
