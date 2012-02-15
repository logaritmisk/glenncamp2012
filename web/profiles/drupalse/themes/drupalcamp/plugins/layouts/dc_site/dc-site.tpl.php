<?php
// $Id: precision-site-template.tpl.php,v 1.1.2.2 2011/02/14 12:05:20 fabsor Exp $

/**
 * @file
 * This layout is designed to be the site template layout when using
 * the Panels Everywhere module.
 */
?>
<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="page-wrapper clear-block">
  <div class="site container-14 clear-block">
    
    <?php if (!empty($content['service'])): ?>
      <div class="site-service grid-14">
        <?php print $content['service']; ?>
      </div>
    <?php endif; ?>
	
    <?php if (!empty($content['header'])): ?>
      <div class="site-header grid-12 push-1">
        <?php print $content['header']; ?>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($content['main'])): ?>
      <div class="site-main grid-14">
        <?php print $content['main']; ?>
      </div>
    <?php endif; ?>

	  <?php if (!empty($content['footer'])): ?>
      <div class="site-footer grid-14">
        <?php print $content['footer']; ?>
      </div>
    <?php endif; ?>

  </div>
 </div>

 