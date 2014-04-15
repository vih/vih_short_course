<?php

/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */

class VIHShortCourseExternalNode extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import course nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_short_course') . '/import/short_course_external.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationNode('short_course');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');
    $this->addFieldMapping('field_course_time', 'date_from');
    $this->addFieldMapping('field_course_time:to', 'date_to');

    $this->addFieldMapping('field_course_leader', 'teacher_reference')
      ->sourceMigration('VIHEmployeesContext');

    $this->addFieldMapping('field_short_course_lecture', 'lectures')
      ->sourceMigration('VIHLecturesNode');

    $this->addFieldMapping('field_course_type', 'course_type');
    $this->addFieldMapping('field_course_type:create_term')
      ->defaultValue(TRUE);

    // Images
    $this->addFieldMapping('field_pictures', 'all_images');
    $this->addFieldMapping('field_pictures:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_pictures:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course') . '/import/images');

    // Featured image
    $this->addFieldMapping('field_picture', 'featured_image');
    $this->addFieldMapping('field_picture:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_picture:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course') . '/import/images');

    $this->addFieldMapping('field_registration', 'registration');
    $this->addFieldMapping('field_registration:title', 'registration_title');
    $this->addFieldMapping('field_price', 'price');
    $this->addFieldMapping('field_price_children', 'price_children');
  }

  function fields() {
    return array(
      'all_images' => 'An array of images, populated during prepareRow().',
    );
  }

  public function prepareRow($row) {
    $row->all_images = explode(',', $row->images);
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('date_from', 'Date From');
    $columns[3] = array('date_to', 'Date To');
    $columns[4] = array('description', 'Description');
    $columns[5] = array('featured_image', 'Featured Image');
    $columns[6] = array('images', 'Images');
    $columns[7] = array('teacher_reference', 'Teacher');
    $columns[8] = array('lectures', 'Lectures');
    $columns[9] = array('course_type', 'Course Type');
    $columns[10] = array('registration_title', 'Registration title');
    $columns[11] = array('registration', 'Registration');
    $columns[12] = array('price', 'Price');
    $columns[13] = array('price_children', 'Price children');
    return $columns;
  }
}
