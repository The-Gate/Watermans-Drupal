<?php
/**
 * @file
 * blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CTA- Abuse section';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'cta_abuse';
  $fe_block_boxes->body = '<div class="cta c-1"><div><div class="cta-bg-wrapper"><span><img src="/sites/default/files/styles/cta_block_304x272/public/David-Adams.jpg?itok=gxw_wK8A" typeof="foaf:Image"></span></div>
<div class="cta-content"><div class="cta-title-wrap"><h3><span><a href="/the-watermans-team/glasgow/david-adams">David Adams</a></span></h3></div>
<p><span><a href="/the-watermans-team/glasgow/david-adams">I\'m a Senior Solicitor,<br>find out more</a></span></p></div></div></div>
<div class="cta c-1"><div><div class="cta-bg-wrapper"><span><img src="/sites/default/files/styles/cta_block_304x272/public/Heather-Tierney.jpg?itok=2LJSX_id" typeof="foaf:Image"></span></div>
<div class="cta-content"><div class="cta-title-wrap"><h3><span><a href="/the-watermans-team/glasgow/heather-tierney">Heather Tierney</a></span></h3>
</div><p><span><a href="/the-watermans-team/glasgow/heather-tierney">I\'m a Senior Solicitor,<br>find out more</a></span></p></div></div></div>
';

  $export['cta_abuse'] = $fe_block_boxes;

  return $export;
}
