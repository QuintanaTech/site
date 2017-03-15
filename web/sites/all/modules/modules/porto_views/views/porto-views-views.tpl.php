<?php
/**
 * @file porto-views.tpl.php
 * Custom view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$count = 0;
?>

<?php switch ($view->style_options['porto_views']['optionset']): case 'blog_posts': ?>
	<div class="blog-posts">
	  <?php foreach ( $rows as $id => $row ): ?>
	    <?php print $row;?>
	  <?php endforeach; ?>
  </div>
  <?php break; ?>
  <?php case 'blog_timeline': ?>
    <section class="timeline" id="timeline">
		  <div class="timeline-body">
	    
		    <?php 
			    $date_count = 0;
			    $dates = array();
			    $dates_check = array();
			    
			    foreach ($view->result as $date) {
				    $dates_check[] = gmdate("F Y", $date->node_created);
				  }
			  
			    foreach ($view->result as $date) {
				    $date = gmdate("F Y", $date->node_created);
				    
				    if ($date_count == 0) {
					    $new = TRUE;
				    }
				    elseif ($date_count != 0 && $date != $dates_check[$date_count - 1]) {
					    $new = TRUE;
				    }
				    else {
					    $new = FALSE;
				    }
				    
				    $dates[$date_count] = array(
					    'date' => $date,
					    'new' => $new, 
				    );
				    
				    $date_count ++;
			    } 		    
			  ?>
		  
	      <?php foreach ($rows as $id => $row): ?>
	        <?php if ($dates[$count]['new'] == TRUE): ?>
	          <div class="timeline-date"><h3><?php print $dates[$count]['date']; ?></h3></div>
	        <?php endif; ?>
	        <article class="timeline-box <?php if ($count %2 != 0) { print "right";} else { print "left"; } ?> post post-medium">
	        <?php print $row; $count++; ?>
	        </article>
	      <?php endforeach; ?>
	      
      </div> 
    </section>  
  <?php break; ?>
  <?php case 'carousel': ?>
  <div class="row center">
	  <div class="owl-carousel" data-plugin-options='{"items": 6, "singleItem": false, "autoPlay": true}'>
		  <?php foreach ( $rows as $id => $row ): ?>
		    <?php print $row;?>
		  <?php endforeach; ?>
	  </div>
  </div>    
  <?php break; ?>
  <?php case 'categories': ?>
  <ul class="nav nav-list primary pull-bottom">
	  <?php foreach ( $rows as $id => $row ): ?>
	    <?php print $row;?>
	  <?php endforeach; ?>
  </ul>    
  <?php break; ?>
  <?php case 'portfolio_timeline': ?>
    <section class="timeline" id="timeline">
		  <div class="timeline-body">
	    
		    <?php 
			    $date_count = 0;
			    $dates = array();
			    $dates_check = array();
			    
			    foreach ($view->result as $date) {
				    $dates_check[] = gmdate("F Y", $date->node_created);
				  }
			  
			    foreach ($view->result as $date) {
				    $date = gmdate("F Y", $date->node_created);
				    
				    if ($date_count == 0) {
					    $new = TRUE;
				    }
				    elseif ($date_count != 0 && $date != $dates_check[$date_count - 1]) {
					    $new = TRUE;
				    }
				    else {
					    $new = FALSE;
				    }
				    
				    $dates[$date_count] = array(
					    'date' => $date,
					    'new' => $new, 
				    );
				    
				    $date_count ++;
			    } 		    
			  ?>
		  
	      <?php foreach ($rows as $id => $row): ?>
	        <?php if ($dates[$count]['new'] == TRUE): ?>
	          <div class="timeline-date"><h3><?php print $dates[$count]['date']; ?></h3></div>
	        <?php endif; ?>
	        <article class="timeline-box <?php if ($count %2 != 0) { print "right";} else { print "left"; } ?>">
	        <?php print $row; $count++; ?>
	        </article>
	      <?php endforeach; ?>
	      
      </div> 
    </section>  
  <?php break; ?>
  <?php case 'portfolio_two': ?>
  <?php case 'portfolio_three': ?>
  <?php case 'portfolio_four': ?>
    <div class="row <?php print $view->style_options['porto_views']['optionset']; ?>">
	    <ul class="portfolio-list sort-destination" data-sort-id="portfolio">
        <?php foreach ($rows as $id => $row) {print $row;} ?>
	    </ul>
    </div>
  <?php break; ?>
  <?php case 'portfolio_full': ?>
    <ul class="portfolio-list sort-destination full-width" data-sort-id="portfolio">
	    <?php foreach ($rows as $id => $row) {print $row;} ?>
    </ul>
  <?php break; ?>
  <?php case 'portfolio_lightbox': ?>
    <div class="row <?php print $view->style_options['porto_views']['optionset']; ?>">
	    <ul class="portfolio-list sort-destination lightbox" data-sort-id="portfolio" data-plugin-options='{"delegate": "a", "type": "image", "gallery": {"enabled": true}}'>
		    <?php foreach ($rows as $id => $row) {print $row;} ?>
	    </ul>
    </div>
  <?php break; ?>
  <?php case 'portfolio_carousel': ?>
  <section class="section section-primary mt-none" id="projects">
		<div class="container">
			<div class="row" >
				<div class="col-md-12">
					<h2><?php print t('Latest '); ?><strong><?php print t('Projects'); ?></strong></h2>  
					<div class="owl-carousel owl-carousel-spaced" data-plugin-options='{"items": 4}'>  
						<?php foreach ($rows as $id => $row) {print $row;} ?>
					</div>
				</div>
			</div>			
		</div>
  </section>	
  <?php break; ?>
  <?php case 'portfolio_related_projects': ?>
    <div class="row">	
			<ul class="portfolio-list">
	    <?php foreach ($rows as $id => $row): ?> 
	      <li class="col-md-3">
		      <?php print $row; ?>
	      </li>
		  <?php endforeach; ?>
    </ul>
  <?php break; ?>
  <?php case 'portfolio_filter': ?>
    <ul class="nav nav-pills sort-source" data-sort-id="portfolio" data-option-key="filter">
      <li data-option-value="*" class="active"><a href="#"><?php echo t('Show All'); ?></a></li>
      <?php foreach ($rows as $id => $row) {print $row;} ?>
    </ul>  
    <hr>
  <?php break; ?>
  <?php case 'portfolio_filter_full': ?>
    <div class="sort-source-wrapper">
		  <div class="container">
        <ul class="nav nav-pills sort-source secundary pull-right" data-sort-id="portfolio" data-option-key="filter">
          <li data-option-value="*" class="active"><a href="#"><?php echo t('Show All'); ?></a></li>
          <?php foreach ($rows as $id => $row) {print $row;} ?>
        </ul>
		  </div>
    </div>      
  <?php break; ?>
  <?php case 'team_filter': ?>
    <ul class="nav nav-pills sort-source" data-sort-id="team" data-option-key="filter">
      <li data-option-value="*" class="primary active"><a href="#"><?php echo t('Show All'); ?></a></li>
      <?php foreach ($rows as $id => $row) {print $row;} ?>
    </ul>  
    <hr>
  <?php break; ?>
    <?php case 'shop': ?>
    <div class="row">
			<ul class="products product-thumb-info-list" data-plugin-masonry data-plugin-options='{"layoutMode": "fitRows"}'>
        <?php foreach ($rows as $id => $row) {print $row;} ?>
	  	</ul>  
    </div> 
  <?php break; ?>
  <?php case 'team': ?>
    <div id="team">
      <div class="row">
	  		<ul class="team-list sort-destination" data-sort-id="team">
          <?php foreach ($rows as $id => $row) {print $row;} ?>
	  		</ul>
      </div>	  
    </div> 
    <hr>
  <?php break; ?>
  <?php default: ?>
    <div class="<?php print $view->style_options['porto_views']['optionset']; ?>">
      <?php foreach ($rows as $id => $row) {print $row;} ?>
    </div>
  <?php break; ?>
<?php endswitch; ?>