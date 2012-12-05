<?php
/**
 * @file
 * cmtls_map.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function cmtls_map_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'cmtls_geometry_full_map';
  $openlayers_maps->title = 'CT geometry full map';
  $openlayers_maps->description = 'Full map for page wide usage';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '24.745746999744, 59.430052559193',
        'zoom' => '12',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 1,
        'panIcons' => 1,
      ),
      'openlayers_behavior_permalink' => array(
        'anchor' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'cmtls_map_cmtls_map_post_ol_overlay' => 'cmtls_map_cmtls_map_post_ol_overlay',
          'cmtls_map_cmtls_map_location_ol_overlay' => 'cmtls_map_cmtls_map_location_ol_overlay',
          'cmtls_map_cmtls_map_event_ol_overlay' => 'cmtls_map_cmtls_map_event_ol_overlay',
          'cmtls_map_cmtls_map_media_ol_overlay' => 'cmtls_map_cmtls_map_media_ol_overlay',
          'cmtls_map_cmtls_map_application_ol_overlay' => 'cmtls_map_cmtls_map_application_ol_overlay',
          'cmtls_map_cmtls_map_group_ol_overlay' => 'cmtls_map_cmtls_map_group_ol_overlay',
        ),
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtomaxextent' => array(),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'google_normal' => 'google_normal',
      'osm_mapnik' => 'osm_mapnik',
      'cmtls_map_cmtls_map_event_ol_overlay' => 'cmtls_map_cmtls_map_event_ol_overlay',
      'cmtls_map_cmtls_map_media_ol_overlay' => 'cmtls_map_cmtls_map_media_ol_overlay',
      'cmtls_map_cmtls_map_application_ol_overlay' => 'cmtls_map_cmtls_map_application_ol_overlay',
      'cmtls_map_cmtls_map_group_ol_overlay' => 'cmtls_map_cmtls_map_group_ol_overlay',
      'cmtls_map_cmtls_map_location_ol_overlay' => 'cmtls_map_cmtls_map_location_ol_overlay',
      'cmtls_map_cmtls_map_post_ol_overlay' => 'cmtls_map_cmtls_map_post_ol_overlay',
    ),
    'layer_weight' => array(
      'cmtls_map_cmtls_map_event_ol_overlay' => '0',
      'cmtls_map_cmtls_map_media_ol_overlay' => '0',
      'cmtls_map_cmtls_map_application_ol_overlay' => '0',
      'cmtls_map_cmtls_map_group_ol_overlay' => '0',
      'cmtls_map_cmtls_map_location_ol_overlay' => '0',
      'cmtls_map_cmtls_map_post_ol_overlay' => '0',
      'openlayers_geojson_picture_this' => '0',
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => '0',
      'cmtls_locations_page_map_ol_overlay' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => '0',
      'cmtls_locations_page_map_ol_overlay' => '0',
      'cmtls_map_cmtls_map_post_ol_overlay' => 'default_marker_gold',
      'cmtls_map_cmtls_map_location_ol_overlay' => 'default_marker_blue',
      'cmtls_map_cmtls_map_event_ol_overlay' => 'default_marker_green',
      'cmtls_map_cmtls_map_media_ol_overlay' => 'default_marker_gold',
      'cmtls_map_cmtls_map_application_ol_overlay' => 'default_marker_red',
      'cmtls_map_cmtls_map_group_ol_overlay' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => '0',
      'cmtls_locations_page_map_ol_overlay' => '0',
      'cmtls_map_cmtls_map_post_ol_overlay' => '0',
      'cmtls_map_cmtls_map_location_ol_overlay' => '0',
      'cmtls_map_cmtls_map_event_ol_overlay' => '0',
      'cmtls_map_cmtls_map_media_ol_overlay' => '0',
      'cmtls_map_cmtls_map_application_ol_overlay' => '0',
      'cmtls_map_cmtls_map_group_ol_overlay' => '0',
    ),
    'layer_activated' => array(
      'cmtls_map_cmtls_map_post_ol_overlay' => 'cmtls_map_cmtls_map_post_ol_overlay',
      'cmtls_map_cmtls_map_location_ol_overlay' => 'cmtls_map_cmtls_map_location_ol_overlay',
      'cmtls_map_cmtls_map_event_ol_overlay' => 'cmtls_map_cmtls_map_event_ol_overlay',
      'cmtls_map_cmtls_map_media_ol_overlay' => 'cmtls_map_cmtls_map_media_ol_overlay',
      'cmtls_map_cmtls_map_application_ol_overlay' => 'cmtls_map_cmtls_map_application_ol_overlay',
      'cmtls_map_cmtls_map_group_ol_overlay' => 'cmtls_map_cmtls_map_group_ol_overlay',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 0,
      'cmtls_locations_page_map_ol_overlay' => 0,
    ),
    'layer_switcher' => array(
      'cmtls_map_cmtls_map_post_ol_overlay' => 'cmtls_map_cmtls_map_post_ol_overlay',
      'cmtls_map_cmtls_map_location_ol_overlay' => 'cmtls_map_cmtls_map_location_ol_overlay',
      'cmtls_map_cmtls_map_event_ol_overlay' => 'cmtls_map_cmtls_map_event_ol_overlay',
      'cmtls_map_cmtls_map_media_ol_overlay' => 'cmtls_map_cmtls_map_media_ol_overlay',
      'cmtls_map_cmtls_map_application_ol_overlay' => 'cmtls_map_cmtls_map_application_ol_overlay',
      'cmtls_map_cmtls_map_group_ol_overlay' => 'cmtls_map_cmtls_map_group_ol_overlay',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 0,
      'cmtls_locations_page_map_ol_overlay' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['cmtls_geometry_full_map'] = $openlayers_maps;

  return $export;
}
