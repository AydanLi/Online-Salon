<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php
  $numItems = count($rows);
  $i = 0;
?>
<?php foreach ($rows as $id => $row): ?>

  <?php
    if ($i == 4) {
      echo "</div>";
    }
    if ($i == 0 || $i == 4) {
      echo '<div class="wrapper">';
    }
   ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
  <?php
    if(++$i === $numItems) {
      echo "</div>";
    }
  ?>
<?php endforeach; ?>
