<?php

/**
 * Implementation of hook_default_wysiwyg().
 */
function mm_wysiwyg_default_wysiwyg() {
  $export = array();
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'ckeditor';
  $wysiwyg->settings = FALSE;
  $wysiwyg->machine = 'full_html';

  $export['full_html'] = $wysiwyg;
  return $export;
}
