<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 *
 * @ingroup views_templates
 */

drupal_add_js(path_to_theme() . '/js/wfs.map.js', array('type' => 'file', 'scope' => 'footer'));
drupal_add_css(path_to_theme() . '/css/wfs.map.css', array('type' => 'file', 'scope' => 'footer'));

global $language;
$lang = $language->language;
// dpm($lang);
// dpm(translation_node_get_translations(36)[$lang]->nid);

$green_spain = ($lang == 'en') ? 36 : translation_node_get_translations(36)[$lang]->nid;
$duero_river_valley = ($lang == 'en') ? 37 : translation_node_get_translations(37)[$lang]->nid;
$ebro_river_valley = ($lang == 'en') ? 38 : translation_node_get_translations(38)[$lang]->nid;
$the_meseta = ($lang == 'en') ? 39 : translation_node_get_translations(39)[$lang]->nid;
$the_mediterranean_coast = ($lang == 'en') ? 40 : translation_node_get_translations(40)[$lang]->nid;
$andalucia = ($lang == 'en') ? 41 : translation_node_get_translations(41)[$lang]->nid;
$islands = ($lang == 'en') ? 42 : translation_node_get_translations(42)[$lang]->nid;

$imgs_path = '/' . path_to_theme() . '/img/map';
?>
 <div class="wfs-map">

  <div class="desk">
    <img id="regionmap" class="img-responsive" usemap="#Map" src="<?php print $imgs_path ?>/desk/hm-default-new.png" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-default-new.png';">

    <map name="Map" id="Map">
        <!-- Green Spain -->
        <area href="<?php print url('node/' . $green_spain); ?>" data-node-id="<?php print $green_spain ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-green-spain.png';" class="area-green-spain" coords="121,97,113,101,101,101,91,97,81,99,79,89,67,85,59,87,53,91,53,81,56,73,53,59,49,51,47,37,51,27,57,23,67,19,76,21,83,21,83,14,91,9,99,7,106,6,119,13,127,17,135,19,146,19,157,19,167,21,180,25,190,29,197,30,214,37,221,39,237,38,247,37,258,37,271,42,278,41,297,47,312,46,309,55,302,61,291,61,285,57,277,52,261,49,250,50,241,53,233,57,237,63,231,68,225,59,219,52,211,48,202,42,192,42,182,43,172,46,162,46,144,48,135,51,128,55,133,60,137,66,145,60,142,70,132,73,124,81,122,91" shape="poly" title="Green Spain">

        <!-- Duero River Valley -->
        <area href="<?php print url('node/' . $duero_river_valley); ?>" data-node-id="<?php print $duero_river_valley ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-duero-river-valley.png';" class="area-duero-river-valley" coords="120,94,123,80,129,77,126,96,134,97,140,101,144,107,146,113,146,121,140,125,136,129,131,134,124,140,120,147,121,158,122,165,120,173,119,178,128,173,142,171,146,179,154,178,164,186,171,185,175,191,184,188,199,188,210,177,216,169,228,158,249,143,267,141,281,145,286,155,298,151,296,135,307,125,306,111,288,103,274,107,260,99,261,86,271,72,257,63,266,59,260,50,247,53,238,57,236,67,225,63,219,55,210,51,200,45,189,45,170,50,155,49,141,51,144,56,153,56,154,61,152,69,148,76,140,70,135,76" shape="poly" title="Duero River Valley">

        <!-- Ebro River Valley -->
        <area href="<?php print url('node/' . $ebro_river_valley); ?>" data-node-id="<?php print $ebro_river_valley ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-ebro-river-valley.png';" coords="315,46,324,48,326,56,332,60,339,62,347,64,359,74,367,72,377,78,399,80,403,96,391,125,383,126,387,133,387,146,380,158,380,173,365,170,357,193,345,206,338,214,331,204,323,197,313,195,305,188,314,179,311,160,299,150,299,136,310,126,309,112,287,100,274,103,262,97,263,85,272,74,261,64,269,59,265,52,276,54,287,60,299,63,310,55" shape="poly" title="Ebro River Valley">

        <!-- The Meseta -->
        <area href="<?php print url('node/' . $the_meseta); ?>" data-node-id="<?php print $the_meseta ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-the-meseta.png';" coords="114,178,137,172,147,180,154,179,162,187,170,187,172,194,200,190,223,163,249,144,267,143,279,146,283,155,297,152,309,159,311,178,303,186,311,196,323,201,329,210,305,222,295,211,289,223,300,232,299,243,287,244,293,252,291,260,301,271,291,270,290,286,278,306,273,302,275,284,242,280,199,280,187,270,175,261,165,265,155,270,154,282,130,294,97,280,88,266,95,253,105,240,93,224,96,216,83,205,104,208,114,193,107,184" shape="poly" title="The Meseta">

        <!-- Andalucía -->
        <area href="<?php print url('node/' . $andalucia); ?>" data-node-id="<?php print $andalucia ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-andalucia.png';" coords="98,281,96,289,89,289,81,301,71,311,77,328,95,331,113,348,111,357,118,371,126,385,141,397,161,381,183,374,193,365,230,369,253,369,261,373,267,369,276,365,285,372,295,361,303,341,292,331,284,311,270,301,272,285,243,281,199,283,173,262,157,271,155,283,131,293" shape="poly" title="Andalucía">

        <!-- The Mediterranean Coast -->
        <area href="<?php print url('node/' . $the_mediterranean_coast); ?>" data-node-id="<?php print $the_mediterranean_coast ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-the-mediterranean-coast.png';" coords="400,83,404,69,426,79,431,89,440,89,451,95,463,92,473,94,488,91,497,96,493,105,496,117,482,129,467,136,455,149,412,161,403,169,412,177,403,184,379,210,365,238,363,251,373,269,384,274,373,284,359,289,353,299,345,311,341,327,329,333,319,331,307,339,293,331,288,318,287,311,276,307,293,289,295,275,305,272,295,263,299,253,291,247,302,246,304,233,293,223,295,216,305,222,320,215,333,211,339,215,356,195,365,171,379,173,379,157,386,147,388,129,393,125,403,97" shape="poly" title="The Mediterranean Coast">

        <!-- The Islands -->
        <area href="<?php print url('node/' . $islands); ?>" data-node-id="<?php print $islands ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-islands.png';" coords="407,269,443,237,481,211,519,197,545,207,542,229,513,245,486,259,452,270,425,278,413,278" shape="poly" title="The Islands">
        <!-- The Islands -->
        <area href="<?php print url('node/' . $islands); ?>" data-node-id="<?php print $islands ?>" onmouseover="document.getElementById('regionmap').src='<?php print $imgs_path ?>/desk/hm-islands.png';" coords="48,411,177,477" shape="rect" title="The Islands">
    </map>

  </div>

</div> 








<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>
