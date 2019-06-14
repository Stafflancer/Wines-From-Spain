(function($, Drupal) {
  Drupal.behaviors.wfs_map = {
    attach:function(context, settings) {
      $(document).ready(function() {
        
        var images = [];
        function preload() {
          for (i = 0; i < preload.arguments.length; i++) {
            images[i] = new Image()
            images[i].src = preload.arguments[i]
          }
        }
        preload(
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-default-new.png",
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-green-spain.png",
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-duero-river-valley.png",
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-ebro-river-valley.png",
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-the-meseta.png",
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-andalucia.png",
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-the-mediterranean-coast.png",
          location.origin + "/sites/all/themes/wfs/img/map/desk/hm-islands.png"
        )
        
        var nid = 0;

        $('.wfs-map area').on('mouseover', function() {
          // console.log($( this ).data('node-id'));
          nid = $(this).data('node-id');

          $('.view-map #node-' + nid).show();
          $('.view-map .node-region.node-teaser').not('.view-map #node-' + nid).hide();
        });

      });
    }
  }
}(jQuery, Drupal));
