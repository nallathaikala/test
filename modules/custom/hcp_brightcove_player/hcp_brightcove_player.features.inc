<?php
/**
 * @file
 * hcp_brightcove_player.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hcp_brightcove_player_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "brightcove" && $api == "brightcove") {
    return array("version" => "1");
  }
}
