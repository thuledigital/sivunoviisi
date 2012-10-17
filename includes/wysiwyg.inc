<?php

/**
 * Sets default WYSIWYG settings (OpenPublish)
 */
function sivunoviisi_set_wysiwyg_settings() {
  $settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'fi',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'strike' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyright' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'undo' => 1,
        'redo' => 1,
        'link' => 1,
        'unlink' => 1,
        'image' => 1,
        'cleanup' => 1,
        'sup' => 1,
        'sub' => 1,
        'code' => 1,
        'hr' => 1,
        'cut' => 1,
        'copy' => 1,
        'paste' => 1,
        'removeformat' => 1,
        'charmap' => 1,
      ),
      'advimage' => array(
        'advimage' => 1,
      ),
      'font' => array(
        'formatselect' => 1,
      ),
      'table' => array(
        'tablecontrols' => 1,
      ),
      'paste' => array(
        'pastetext' => 1,
      ),
      'drupal' => array(
        'media' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 0,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'self',
    'css_path' => '%t/css/editor.css',
    'css_classes' => '',
  );

  $fields = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => serialize($settings),
  );

  db_insert('wysiwyg')->fields($fields)->execute();

}
