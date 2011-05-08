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
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'Bold' => 1,
        'Italic' => 1,
        'Underline' => 1,
        'Smiley' => 1,
        'CreateDiv' => 1,
        'Maximize' => 1,
        'SpellChecker' => 1,
        'Scayt' => 1,
        'About' => 1,
      ),
      'imce' => array(
        'imce' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->machine = 'full_html';

  $export['full_html'] = $wysiwyg;
  return $export;
}
