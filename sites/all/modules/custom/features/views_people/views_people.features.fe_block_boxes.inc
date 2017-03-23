<?php
/**
 * @file
 * views_people.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function views_people_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Team Homepage Banner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_home_banner';
  $fe_block_boxes->body = '<div class="cta-content">
<h3 class="blue">"A motivated and<br />
<span class="red">dedicated team"</span></h3>

<p class="left-border">Meet our exceptional team of highly qualified solicitors, and claims handlers. Specialising in personal injury claims, they work together and use their expertise to help you get the compensation you deserve.</p>
';

  $export['team_home_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CTA - TEAM - Block 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_home_cta1';
  $fe_block_boxes->body = '<div class="cta-content">
<div class="cta-title-wrap">
<h3><a href="/the-watermans-team/edinburgh">Edinburgh</a></h3>
</div>

<p><a href="/the-watermans-team/edinburgh">Meet our Edinburgh team</a></p>
</div>
';

  $export['team_home_cta1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CTA - TEAM - Block 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_home_cta2';
  $fe_block_boxes->body = '<div class="cta-content">
<div class="cta-title-wrap">
<h3><a href="/the-watermans-team/glasgow">Glasgow</a></h3>
</div>

<p><a href="/the-watermans-team/glasgow">Meet our Glasgow team</a></p>
</div>
';

  $export['team_home_cta2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CTA - TEAM - Block 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_home_cta3';
  $fe_block_boxes->body = '<div class="cta-content">
<div class="cta-title-wrap">
<h3><a href="/the-watermans-team/firm-management">Management</a></h3>
</div>

<p><a href="/the-watermans-team/firm-management">Meet our Managing Director</a></p>
</div>
';

  $export['team_home_cta3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'People Listing - Edinburgh';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_listing_edinburgh';
  $fe_block_boxes->body = '<div class="cta-content">
<div class="cta-title-wrap">
<h3><a href="/the-watermans-team/edinburgh">Edinburgh</a></h3>
</div>
</div>
';

  $export['team_listing_edinburgh'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'People Listing - Firm Management';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_listing_firm';
  $fe_block_boxes->body = '<p><a href="/the-watermans-team/department?tid=27">Firm&nbsp;Management</a></p>
';

  $export['team_listing_firm'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'People Listing - Glasgow';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_listing_glasgow';
  $fe_block_boxes->body = '<div class="cta-content">
<div class="cta-title-wrap">
<h3><a href="/the-watermans-team/glasgow">Glasgow</a></h3>
</div>
</div>
';

  $export['team_listing_glasgow'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'People Listing - Firm Management Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'team_listing_management';
  $fe_block_boxes->body = '<div class="cta-content">
<div class="cta-title-wrap">
<h3><a href="/the-watermans-team/firm-management">Management</a></h3>
</div>
</div>
';

  $export['team_listing_management'] = $fe_block_boxes;

  return $export;
}
