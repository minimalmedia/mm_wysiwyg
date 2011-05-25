<?php

/**
 * Implementation of hook_input_formats().
 */
function mm_wysiwyg_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Full HTML';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'filter' => array(
      '2' => '0',
      '1' => '1',
      '3' => '10',
    ),
  );
  $input_format->machine = 'full_html';
  $input_formats['full_html'] = $input_format;

  return $input_formats;

}
