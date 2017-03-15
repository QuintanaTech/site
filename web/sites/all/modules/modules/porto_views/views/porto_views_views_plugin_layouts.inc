<?php

/**
 * @file
 */

/**
 * Style plugin.
 */
class porto_views_views_plugin_layouts extends views_plugin_style {

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['porto_views'] = array('default' => ''); // Declare style settings so they can be exported properly.
    return $options;
  }

  /**
   * Render the given style.
   */
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['porto_views'] = array(
    	'#type' => 'fieldset',
    	'#title' => t('porto'),
    );
    $form['porto_views']['optionset'] = array(
  		'#title' => t('Template'),
  		'#description' => t('Select a template for this view.'),
  		'#type' => 'radios',
  		'#options' => array(
	  		'blog_posts' => t('Blog Posts'),
  			'blog_timeline' => t('Blog Timeline'),
  			// will add later 'blog_carousel' => t('Blog Carousel'),
  			'carousel' => t('Carousel'),
  			'portfolio_two' => t('Portfolio Two Columns'),
  			'portfolio_three' => t('Portfolio Three Columns'),
  			'portfolio_four' => t('Portfolio Four Columns'),
  			'portfolio_full' => t('Portfolio Fullwidth'),
  			'portfolio_lightbox' => t('Portfolio Lightbox'),
  			'portfolio_timeline' => t('Portfolio Timeline'),
  			'portfolio_carousel' => t('Portfolio Carousel'),
  			'portfolio_related_projects' => t('Portfolio Related Projects'),
  			'team' => t('Team'),
  			'categories' => t('Categories List'),
  			'portfolio_filter' => t('Portfolio Isotope Filters'),
  			'portfolio_filter_full' => t('Portfolio Isotope Filters (Full Width)'),
  			'shop' => t('Shop'),
  			'team_filter' => t('Team Isotope Filters')
  		),
  		'#default_value' => $this->options['porto_views']['optionset'],
    );

  }
}
