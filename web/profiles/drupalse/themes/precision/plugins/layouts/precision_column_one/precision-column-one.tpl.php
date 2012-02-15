<?php
// $Id: precision-column-one.tpl.php,v 1.1.2.1 2011/02/14 10:32:22 fabsor Exp $
?>

<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clear-block">
<?php endif; ?>

<?php if (!empty($content['main'])): ?>
  <div class="page-main grid-48 alpha omega">
    <?php print $content['main']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
