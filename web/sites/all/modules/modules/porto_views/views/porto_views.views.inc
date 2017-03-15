<?php

/**
 * Implements hook_views_data_alter()
 */
function porto_views_views_data_alter(&$data) {
	
  $data['node']['term_node_tid'] = array(
    'title' => t('Taxonomy terms on node'),
    'help' => t('Relate nodes to taxonomy terms, specifying which vocabulary or vocabularies to use. This relationship will cause duplicated records if there are multiple terms.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship_node_term_data',
      'label' => t('term'),
      'base' => 'taxonomy_term_data',
    ),
	  'field' => array(
      'title' => t('All taxonomy terms'),
      'help' => t('Display all taxonomy terms associated with a node from specified vocabularies.'),
      'handler' => 'porto_views_handler_field_term_node_tid',
      'no group by' => TRUE,
    ),
  );
    
}

/**
 * Implements template_preprocess_views_view().
 */
function porto_views_preprocess_views_view(&$vars) {
  $view = $vars['view'];
 
  if ($view->style_plugin->plugin_name == 'porto_views') {
    // Assign views plugin layout option to $vars['layout']
	  $vars['layout'] = $view->style_plugin->options['porto_views']['optionset'];	 	  
	  // Add css/js for layouts that need it.
	  switch ($view->style_plugin->options['porto_views']['optionset']) {
		  case 'blog-full':
			  drupal_add_js(drupal_get_path('module', 'porto_views') . '/js/blog_masonry.js');
		  break;
		  case 'portfolio_two':
		  case 'portfolio_three':
		  case 'portfolio_four':
		  case 'portfolio_full':
			  drupal_add_js(drupal_get_path('module', 'porto_views') . '/js/jquery.isotope.js');
			  drupal_add_js(drupal_get_path('module', 'porto_views') . '/js/portfolio.js');
		  break;

	  }
  }  

}