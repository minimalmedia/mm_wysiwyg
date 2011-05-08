<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mm_wysiwyg_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "input_formats" && $api == "input_formats") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "wysiwyg" && $api == "") {
    return array("version" => 2);
  }
}
