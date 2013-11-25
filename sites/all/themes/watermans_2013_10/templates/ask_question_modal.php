<?php
drupal_add_js('/' . drupal_get_path('theme', 'watermans_2013_10') . '/js/colorbox/jquery.colorbox-min.js', 'file');
drupal_add_css(drupal_get_path('theme', 'watermans_2013_10') . '/js/colorbox/colorbox.css', array('type' => 'file'));
?>
<div class="askquestion_open"><div class="askquestion_close"><p>I worked for a scaffolding company and fell from the scaffold 2 months ago dislocating my shoulder and... <a href="#question1" class="inline">More&nbsp;&gt;&gt;</a></p></div></div>
<div class="askquestion_open"><div class="askquestion_close"><p>I was on the bus last week when the bus didn't stop in time and collided with the vehicle that was stopped... <a href="#question2" class="inline">More&nbsp;&gt;&gt;</a></p></div></div>
<div class="askquestion_open"><div class="askquestion_close"><p>I was a passenger in my husband's car when he lost control and we ended up in a field, I sustained facial... <a href="#question3" class="inline">More&nbsp;&gt;&gt;</a></p></div></div>
<div class="askquestion_open"><div class="askquestion_close"><p>I was driving on the motorway when a Foreign driver changed lanes without warning and smashed into my... <a href="#question4" class="inline">More&nbsp;&gt;&gt;</a></p></div></div>
<div class="askquestion_open"><div class="askquestion_close"><p>I slipped in the big supermarket on ferry road on what looked like spilt water, my injuries were a sprained... <a href="#question5" class="inline" >More&nbsp;&gt;&gt;</a></p></div></div>

<div style="display:none">
  <div id="question1" class="question_popup">
    <div class="askquestion_modal">
      <h2>Work Accident</h2>
      <p>I worked for a scaffolding company and fell from the scaffold 2 months ago dislocating my shoulder and fracturing my arm, the company didn't train me properly and has stopped paying me, can I claim?</p>
    </div>
  </div>
  <div id="question2" class="question_popup">
    <div class="askquestion_modal">
      <h2>Bus Passenger</h2>
      <p>I was on the bus last week when the bus didn't stop in time and collided with the vehicle that was stopped in front of us, I banged my head and burst my nose, I haven't slept well since the accident and I haven't been back on a bus, can I claim?</p>
    </div>
  </div>
  <div id="question3" class="question_popup">
    <div class="askquestion_modal">
      <h2>My Husband</h2>
      <p>I was a passenger in my husband's car when he lost control and we ended up in a field, I sustained facial injuries and a broken arm, am I entitled to claim for my injuries even though it was my husbands fault?</p>
    </div>
  </div>
  <div id="question4" class="question_popup">
    <div class="askquestion_modal">
      <h2>Foreign Driver</h2>
      <p>I was driving on the motorway when a Foreign driver changed lanes without warning and smashed into my vehicle, I had to be cut out of my vehicle and taken to hospital, with 2 broken legs, whiplash to my back and cuts and bruises, will i be able to claim for my injuries even though the lorry driver is foreign?</p>
    </div>
  </div>
  <div id="question5" class="question_popup">
    <div class="askquestion_modal">
      <h2>Supermarket Slip</h2>
      <p>I slipped in the big supermarket on ferry road on what looked like spilt water,<br />
      my injuries were a sprained wrist, bruised hip and a broken index finger, I went to A&amp;E at the Royal Infirmary have i got a right to claim against the Supermarket for my injuries?</p>
    </div>
  </div>
</div>
<script>jQuery("a.inline").colorbox({inline:true, width:"50%"});</script>