<?php
// $Id: precision-column-two.tpl.php,v 1.1.2.1 2011/02/14 10:32:23 fabsor Exp $

/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>
<div class="drupalcamp-page-1 page-outer-wrapper ">
 <div class="page grid-12 push-1 clear-block alpha">

<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clear-block">
<?php endif; ?>
    
<?php if (!empty($content['navigation'])): ?>
  <div class="page-navigation grid-12 alpha omega ">
    <?php print $content['navigation']; ?>
  </div>
<?php endif; ?>
    
<?php if (!empty($content['highlighted'])): ?>
  <div class="page-highlighted grid-12 alpha omega">
    <?php print $content['highlighted']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['sidebar_left'])): ?>
  <div class="page-sidebar-left grid-4 alpha">
    <?php print $content['sidebar_left']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['content'])): ?>
<div class="page-content grid-8 omega">
<?php print $content['content']; ?>
</div>
<?php endif; ?>
  
<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>

</div> 
</div>
