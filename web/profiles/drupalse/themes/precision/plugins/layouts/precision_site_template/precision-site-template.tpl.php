<?php
// $Id: precision-site-template.tpl.php,v 1.1.2.2 2011/02/14 12:05:20 fabsor Exp $

/**
 * @file
 * This layout is designed to be the site template layout when using
 * the Panels Everywhere module.
 */
?>
<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="page-wrapper clear-block">
  
  <div class="page container-48 clear-block">
  
    <?php if (!empty($content['branding'])): ?>
      <div class="page-branding grid-48">
        <?php print $content['branding']; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['nav'])): ?>
      <div class="page-nav grid-48">
        <?php print $content['nav']; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['main'])): ?>
      <div class="page-body grid-48">
        <?php print $content['main']; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['footer'])): ?>
      <div class="page-closure grid-48">
        <?php print $content['footer']; ?>
      </div>
    <?php endif; ?>

  </div>
</div>
