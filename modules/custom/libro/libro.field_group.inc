<?php
/**
 * @file
 * libro.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function libro_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_libro_geslib|node|libro|form';
  $field_group->group_name = 'group_libro_geslib';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libro';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info de geslib',
    'weight' => '5',
    'children' => array(
      0 => 'field_libro_autores',
      1 => 'field_libro_categoria',
      2 => 'field_libro_dilve',
      3 => 'field_libro_ean',
      4 => 'field_libro_editorial',
      5 => 'field_libro_estado',
      6 => 'field_libro_idioma',
      7 => 'field_libro_isbn',
      8 => 'field_libro_paginas',
      9 => 'field_libro_producto',
      10 => 'field_libro_year',
      11 => 'language',
      12 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-libro-geslib field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_libro_geslib|node|libro|form'] = $field_group;

  return $export;
}