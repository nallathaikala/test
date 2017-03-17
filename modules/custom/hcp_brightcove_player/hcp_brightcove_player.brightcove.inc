<?php
/**
 * @file
 * hcp_brightcove_player.brightcove.inc
 */

/**
 * Implements hook_brightcove_player().
 */
function hcp_brightcove_player_brightcove_player() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'brightcove_player';
  $preset->display_name = 'Brightcove Player';
  $preset->player_id = '4578585455001';
  $preset->player_key = 'AQ~~,AAABrzqJ7DE~,Rv6eFjTvDM7aKb9SRQjDODVYgM7W4uLH';
  $preset->responsive = FALSE;
  $export['brightcove_player'] = $preset;

  return $export;
}
