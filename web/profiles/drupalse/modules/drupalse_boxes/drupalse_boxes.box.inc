<?php

/**
 * Implementation of hook_default_box().
 */
function drupalse_boxes_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_awards';
  $box->plugin_key = 'simple';
  $box->title = 'Swedish Drupal Awards 2011';
  $box->description = 'DrupalCamp Awards';
  $box->options = array(
    'body' => '<p class="eng-intro">The Swedish Drupal Awards are awarded in the categories of best Swedish Drupal website, Swedish drupalist of the year, Swedish Drupal design of the year and Swedish Drupal technology of year. Further details in Swedish below.</p>
<p>
<table style="text-align:center">
<td><img src="/profiles/drupalse/themes/drupalcamp/images/drupal-awards-site.png" alt="Årets svenska webbplats"><br /><strong>Årets svenska webbplats</strong></td>
<td><img src="/profiles/drupalse/themes/drupalcamp/images/drupal-awards-drupalist.png" alt="Årets svenska drupalist"><br /><strong>Årets svenska drupalist</strong></td>
<td><img src="/profiles/drupalse/themes/drupalcamp/images/drupal-awards-design.png" alt="Årets svenska design"><br /><strong>Årets svenska design</strong></td>
<td><img src="/profiles/drupalse/themes/drupalcamp/images/drupal-awards-tech.png" alt="Årets svenska teknik"><br /><strong>Årets svenska teknik</strong></td>
</table>
</p>
<p>Äntligen! Nu är det dags att lyfta fram de riktigt bra och kreativa lösningarna som skapats med Drupal under året. Vi har fyra kategorier:</p><ul><li>Årets svenska webbplats</li><li>Årets svenska drupalist</li><li>Årets svenska design</li><li>Årets svenska teknik</li></ul><p>Kategorierna är ganska öppna och det är upp till oss i gemenskapen att bestämma vad som hör hemma inom design och teknik. Teknik kanske är en bra svenskutvecklad modul eller en kreativ teknisk lösning? Årets design kanske är ett stiligt tema eller en snygg och användarvänlig webbplats?&nbsp;</p><p>Grundförutsättningar för att kunna nomineras är:</p><ul><li>Det ska ha med Drupal att göra</li><li>Det ska vara svenskt</li><li>Det ska varit aktuellt under året</li><li>Det ska inte ha vunnit tidigare</li></ul><p>Nomineringsprocessen är öppen och sker här på DrupalCamps webb. Sista datum för nominering är <strong>1 november</strong>. Välkommen att nominera!</p>',
    'format' => '2',
  );
  $export['drupalse_awards'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_awards2';
  $box->plugin_key = 'simple';
  $box->title = 'Vad händer sen?';
  $box->description = 'DrupalCamp Awards 2';
  $box->options = array(
    'body' => '<p>En kommitté bestående av styrgruppen för DrupalCamp Stockholm 2011 utser sedan tävlingsbidrag inom varje kategori. Anledningen till att det är en modererad urvalsprocess är för att få en variation och bredd bland tävlingsbidragen samt att det kan bli för mycket att gå igenom för en besökare. Besökarnas röst är viktigare för att utse vinnarna.</p><p>Tävlingsbidragen kommer att presenteras på DrupalCamps webbplats innan DrupalCamp går av stapeln så besökarna får tid att titta igenom och fundera.</p><p>Tävlingen avgörs sedan genom röstning bland besökarna på DrupalCamp, så se till att komma dit och göra din röst hörd!</p><p>Läs mer om bakgrund och diskussion om Swedish Drupal Awards 2001 på <a href="http://groups.drupal.org/node/178154">g.d.o.</a></p>',
    'format' => '2',
  );
  $export['drupalse_awards2'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_buyticket';
  $box->plugin_key = 'simple';
  $box->title = 'Forgotten to buy a ticket?';
  $box->description = 'Buy ticket promo';
  $box->options = array(
    'body' => '<p>Have you purchased your ticket at <a href="http://www.biljett.com/drupalcampstockholm2011">biljett.com</a>? A ticket is required to attend DrupalCamp Stockholm. This reminder will keep nagging you about buying one until you do!</p><p>It could also be that we have not yet confirmed your purchase. If this block doesn\'t disappear within 3 days, please <a href="/contact">contact us</a>.</p>',
    'format' => '3',
  );
  $export['drupalse_buyticket'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer';
  $box->options = array(
    'body' => 'Drupal is a <a href="http://drupal.com/trademark" target="_blank">registered trademark</a> of <a href="http://buytaert.net/" target="_blank">Dries Buytaert</a> | Visit the Swedish Drupal community at <a target="_blank" href="http://groups.drupal.org/sweden">groups.drupal.org/sweden</a> | <a href="/about-site">About this site</a>',
    'format' => '1',
  );
  $export['drupalse_footer'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_nominate';
  $box->plugin_key = 'simple';
  $box->title = 'Nominate your site';
  $box->description = 'Awards promo';
  $box->options = array(
    'body' => 'Don\'t miss out the Swedish Drupal Awards 2011. Leave your nomination submission <a href="/drupal-awards">here</a>.',
    'format' => '2',
  );
  $export['drupalse_nominate'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_registerpromo';
  $box->plugin_key = 'simple';
  $box->title = 'Sign up for DrupalCamp';
  $box->description = 'Sign up promo';
  $box->options = array(
    'body' => '<p>Our sessions will be in Swedish and English so there\'s something for everyone, Swedish or not.</p><p>To get started, register an account here and buy your ticket at a mere 99 SEK (about €10). <a class="register" href="/user/register">Sign me up for DrupalCamp</a></p><p>For more information, please see the <a href="/about">about page</a>.</p>',
    'format' => '3',
  );
  $export['drupalse_registerpromo'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_sessionpromo';
  $box->plugin_key = 'simple';
  $box->title = 'Want to talk at DrupalCamp Stockholm?';
  $box->description = 'Session proposal promo';
  $box->options = array(
    'body' => 'Anyone attending the conference may <a href="/node/add/session">submit a session</a>, and if it\'s included in the schedule present it.',
    'format' => '2',
  );
  $export['drupalse_sessionpromo'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_sessions';
  $box->plugin_key = 'simple';
  $box->title = 'About sessions';
  $box->description = 'About sessions';
  $box->options = array(
    'body' => 'These sessions have been proposed. Session proposals are accepted until November 1st, at which point our program commitee will choose which of the proposed sessions get included in the schedule.

<p><a href="/node/add/session" class="register">Submit your session</a></p>',
    'format' => '2',
  );
  $export['drupalse_sessions'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_sponsor';
  $box->plugin_key = 'simple';
  $box->title = 'Want to sponsor?';
  $box->description = 'Sponsor promo';
  $box->options = array(
    'body' => 'Would you like to see your logo on this page or have a booth on site? Send an email to jakob at nodeone dot se and we\'ll get back to you!',
    'format' => '1',
  );
  $export['drupalse_sponsor'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_ticket';
  $box->plugin_key = 'simple';
  $box->title = 'Complete your registration';
  $box->description = 'DrupalCamp Ticket';
  $box->options = array(
    'body' => '<p><strong>Thanks for your registration. You are almost done.</strong></p><h2>How to pay</h2><ul><li>To complete your registration you need to go to <a href="http://www.biljett.com/drupalcampstockholm2011">www.biljett.com</a>&nbsp;and purchase a ticket.</li><li>IMPORTANT: Use the <strong>same first name and last name</strong> when you register on biljett.com as you entered when registering your account here.</li><li>Once we have confirmed your payment you will no longer see this notice.</li></ul><h3>Creating sessions and voting</h3><p>Now that you are logged in you may <a href="/node/add/session">create session proposals</a> or check out the already <a href="/sessions">proposed sessions</a>.</p><p>Session voting will be open around November 1.</p><p><em>See you at DrupalCamp on November 12!</em></p>',
    'format' => '3',
  );
  $export['drupalse_ticket'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_conference_info';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome to DrupalCamp Stockholm';
  $box->description = 'Conference information';
  $box->options = array(
    'body' => 'A one-day conference about the highly popular Drupal CMS. Join us and learn more about Drupal and the web as a whole from our awesome speakers and share ideas with others. Our sessions will be in Swedish and English so something for everyone, Swedish or not. To get started, register an account here and buy your ticket at a mere 99 SEK (about €10).',
    'format' => '1',
  );
  $export['front_conference_info'] = $box;

  return $export;
}
