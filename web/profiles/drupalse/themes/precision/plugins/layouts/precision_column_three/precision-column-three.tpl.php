<?php
// $Id: precision-column-three.tpl.php,v 1.1.2.2 2011/02/14 10:32:23 fabsor Exp $

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

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['aside_alpha']) || !empty($content['footer_alpha']) || !empty($content['footer_beta'])): ?>
  <div class="page-main-wrapper grid-36 alpha">
<?php endif; ?>

  <?php if (!empty($content['header_beta'])): ?>
    <div class="page-header-beta grid-36 alpha omega">
      <?php print $content['header_beta']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['main'])): ?>
    <div class="page-main grid-24 alpha">
      <?php print $content['main']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['aside_alpha'])): ?>
    <div class="page-aside-alpha grid-12 omega">
      <?php print $content['aside_alpha']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['footer_alpha'])): ?>
    <div class="page-footer-alpha grid-36 alpha omega">
      <?php print $content['footer_alpha']; ?>
    </div>
  <?php endif; ?>

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['aside_alpha'])): ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['aside_beta'])): ?>
  <div class="page-aside-beta grid-12 omega">
    <?php print $content['aside_beta']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['footer_beta'])): ?>
  <div class="page-footer-beta grid-48 alpha omega">
    <?php print $content['footer_beta']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
