<?php
// $Id: precision-column-two.tpl.php,v 1.1.2.1 2011/02/14 10:32:23 fabsor Exp $

/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>
<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clear-block">
<?php endif; ?>

<?php if (!empty($content['header_alpha'])): ?>
  <div class="page-header-alpha grid-48 alpha omega">
    <?php print $content['header_alpha']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['main'])): ?>
  <div class="page-main grid-36 alpha">
    <?php print $content['main']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['aside_beta'])): ?>
  <div class="page-aside-beta grid-12 omega">
    <?php print $content['aside_beta']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['footer_alpha'])): ?>
  <div class="page-footer-alpha grid-48 alpha omega">
    <?php print $content['footer_alpha']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
