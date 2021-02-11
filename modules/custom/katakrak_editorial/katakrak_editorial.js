(function ($) {
  Drupal.behaviors.katakrak_editorial = {
    attach: function (context, settings) {
      $('main.main').css('background-color', $('.color-fondo').html());
       $('.imagen-autor-ed  img').each(function(index) {
          $(this).addClass('img-circle');
       });
       
       // quick search regex
        var qsRegex;

        // init Isotope
        var $grid = $('.grid').isotope({
          itemSelector: '.col',
          layoutMode: 'fitRows',
          filter: function() {
            return qsRegex ? $(this).text().match( qsRegex ) : true;
          }
        });
        

        // use value of search field to filter
        var $quicksearch = $('.quicksearch').keyup( debounce( function() {
          qsRegex = new RegExp( $quicksearch.val(), 'gi' );
          $grid.isotope();
        }, 200 ) );
        
//        var $filterAutorTraductor = $('select.filter-autores-traductores').on('change', function() {
//           console.log('here we are');
//           $grid.isotope({ filter: '.traductor' });
//        });

        // debounce so filtering doesn't happen every millisecond
        function debounce( fn, threshold ) {
          var timeout;
          threshold = threshold || 100;
          return function debounced() {
            clearTimeout( timeout );
            var args = arguments;
            var _this = this;
            function delayed() {
              fn.apply( _this, args );
            }
            timeout = setTimeout( delayed, threshold );
          };
        }
    }
    
  };
})(jQuery);
