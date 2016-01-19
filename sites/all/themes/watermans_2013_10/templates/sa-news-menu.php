<?php

$this_item = menu_get_item();
$tree = menu_tree_all_data('menu-footer-menu-3');
foreach ($tree as $branch) {
  if ($branch['link']['mlid'] == 1132) {
    print('<div class="sa-select-container">');
    print('<div class="sa-select-wrapper" onclick="void(0)">');
    $link = '';
    $this_link = '';
    foreach ($branch['below'] as $child_link) {
      if ($child_link['link']['link_title'] == $this_item['title']) {
        $this_link = '<div class = "sa-item title">' 
            . $child_link['link']['link_title'] 
            . '</div>';
      }
      else {
        $link .= '<li class = "sa-option"><div class = "sa-item"><a href = "/' 
            . drupal_get_path_alias($child_link['link']['link_path']) 
            . '">' 
            . $child_link['link']['link_title'] 
            . '</a></div></li>';
      }
    }
    print($this_link);
    print('<ul>');
    print($link);
    print('</ul></div></div>');
    break;
  }
}
