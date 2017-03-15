<?php
/**
 * @file
 * porto_custom_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function porto_custom_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about_video_background';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About Video Background';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About Video Background';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video_background' => 'video_background',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'video_background';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['about_video_background'] = array(
    t('Master'),
    t('About Video Background'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['about_video_background'] = $view;

  $view = new view();
  $view->name = 'carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Carousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<hr class="tall" />

<div class="row center">
	<div class="col-md-12">
		<h2 class="short word-rotator-title">
			We\'re not the only ones
			<strong>
				<span class="word-rotate">
					<span class="word-rotate-items">
						<span>excited</span>
						<span>happy</span>
					</span>
				</span>
			</strong>
			about Porto Template...
		</h2>
		<h4 class="lead tall">5,500 customers in 100 countries use Porto Template. Meet our customers.</h4>
	</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carousel' => 'carousel',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['carousel'] = array(
    t('Master'),
    t('Carousel'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<hr class="tall" />

<div class="row center">
	<div class="col-md-12">
		<h2 class="short word-rotator-title">
			We\'re not the only ones
			<strong>
				<span class="word-rotate">
					<span class="word-rotate-items">
						<span>excited</span>
						<span>happy</span>
					</span>
				</span>
			</strong>
			about Porto Template...
		</h2>
		<h4 class="lead tall">5,500 customers in 100 countries use Porto Template. Meet our customers.</h4>
	</div>
</div>'),
    t('Block'),
  );
  $export['carousel'] = $view;

  $view = new view();
  $view->name = 'categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tags' => 'tags',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['categories'] = array(
    t('Master'),
    t('Categories'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['categories'] = $view;

  $view = new view();
  $view->name = 'contact_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page Block */
  $handler = $view->new_display('block', 'Page Block', 'block_1');
  $translatables['contact_us'] = array(
    t('Master'),
    t('Contact Us'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Page Block'),
  );
  $export['contact_us'] = $view;

  $view = new view();
  $view->name = 'faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FAQ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['faq'] = array(
    t('Master'),
    t('FAQ'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['faq'] = $view;

  $view = new view();
  $view->name = 'header_cart';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'Header Cart';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Header Cart';
  $handler->display->display_options['css_class'] = 'btn btn-primary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Commerce Line Item: Line item summary */
  $handler->display->display_options['footer']['line_item_summary']['id'] = 'line_item_summary';
  $handler->display->display_options['footer']['line_item_summary']['table'] = 'commerce_line_item';
  $handler->display->display_options['footer']['line_item_summary']['field'] = 'line_item_summary';
  $handler->display->display_options['footer']['line_item_summary']['empty'] = TRUE;
  $handler->display->display_options['footer']['line_item_summary']['info'] = array(
    'quantity' => 'quantity',
    'total' => 'total',
  );
  /* Relationship: Commerce Line Item: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  /* Relationship: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['header_cart'] = array(
    t('Master'),
    t('Header Cart'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Order'),
    t('Products referenced by commerce_product'),
    t('Quantity'),
    t('.'),
    t(','),
    t('Unit price'),
    t('Block'),
  );
  $export['header_cart'] = $view;

  $view = new view();
  $view->name = 'home_concept';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Concept';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home Concept';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'home_concept' => 'home_concept',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['home_concept'] = array(
    t('Master'),
    t('Home Concept'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['home_concept'] = $view;

  $view = new view();
  $view->name = 'latest_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Latest <strong>Blog</strong> Posts</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'testimonials:block';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['latest_posts'] = array(
    t('Master'),
    t('Latest Posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h2>Latest <strong>Blog</strong> Posts</h2>'),
    t('Block'),
  );
  $export['latest_posts'] = $view;

  $view = new view();
  $view->name = 'our_history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our History';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<hr class="tall">

<div class="row">
  <div class="span12">
    <h3 class="pull-top">Our <strong>History</strong></h3>
  </div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: History Image */
  $handler->display->display_options['fields']['field_history_image']['id'] = 'field_history_image';
  $handler->display->display_options['fields']['field_history_image']['table'] = 'field_data_field_history_image';
  $handler->display->display_options['fields']['field_history_image']['field'] = 'field_history_image';
  $handler->display->display_options['fields']['field_history_image']['label'] = '';
  $handler->display->display_options['fields']['field_history_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_history_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_history_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_history_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: History Date */
  $handler->display->display_options['fields']['field_history_date']['id'] = 'field_history_date';
  $handler->display->display_options['fields']['field_history_date']['table'] = 'field_data_field_history_date';
  $handler->display->display_options['fields']['field_history_date']['field'] = 'field_history_date';
  $handler->display->display_options['fields']['field_history_date']['label'] = '';
  $handler->display->display_options['fields']['field_history_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_history_date']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<li data-appear-animation="fadeInUp">
  <div class="thumb" data-appear-animation="fadeInRight">
    [field_history_image]
  </div>
  <div class="featured-box" style="height: auto;">
    <div class="box-content">
      <h4><strong>[field_history_date]</strong></h4>
      [body]
    </div>
  </div>
</li>
';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'our_history' => 'our_history',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['our_history'] = array(
    t('Master'),
    t('Our History'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<hr class="tall">

<div class="row">
  <div class="span12">
    <h3 class="pull-top">Our <strong>History</strong></h3>
  </div>
</div>'),
    t('<li data-appear-animation="fadeInUp">
  <div class="thumb" data-appear-animation="fadeInRight">
    [field_history_image]
  </div>
  <div class="featured-box" style="height: auto;">
    <div class="box-content">
      <h4><strong>[field_history_date]</strong></h4>
      [body]
    </div>
  </div>
</li>
'),
    t('Block'),
  );
  $export['our_history'] = $view;

  $view = new view();
  $view->name = 'parallax';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Parallax';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'One Page Parallax - Dark';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'parallax' => 'parallax',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'parallax';

  /* Display: One Page Parallax - Dark */
  $handler = $view->new_display('block', 'One Page Parallax - Dark', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'parallax' => 'parallax',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'parallax';

  /* Display: One Page Parallax - Light */
  $handler = $view->new_display('block', 'One Page Parallax - Light', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'parallax' => 'parallax',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'parallax';
  $translatables['parallax'] = array(
    t('Master'),
    t('One Page Parallax - Dark'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('One Page Parallax - Light'),
  );
  $export['parallax'] = $view;

  $view = new view();
  $view->name = 'porto_blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Porto Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Porto Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Main Blog */
  $handler = $view->new_display('block', 'Main Blog', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'blog_posts',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Timeline */
  $handler = $view->new_display('block', 'Timeline', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'blog_timeline',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '135',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F d, y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<div class="row">
	<div class="col-md-12">
		[field_image]
	</div>
</div>
<div class="row">
	<div class="col-md-12">

		<div class="post-content">
			<h4>[title]</h4>
			<p>[body]</p>
		</div>

	</div>
</div>
<div class="row">
	<div class="col-md-12">
		<div class="post-meta">
			<span><i class="fa fa-calendar"></i> [created]</span><br>
		</div>
	</div>
</div>
<div class="row">
	<div class="col-md-12">
		<div class="post-meta">
			<span><i class="fa fa-user"></i> By [name]</span>
			<span><i class="fa fa-tag"></i> [field_tags] </span>
			<span><i class="fa fa-comments"></i> <a href="[path]#comments">[comment_count]</a></span>
		</div>
	</div>
</div>
<div class="row">
	<div class="col-md-12">
		<a href="[path]" class="btn btn-xs btn-primary pull-right">Read more...</a>
	</div>
</div>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $translatables['porto_blog'] = array(
    t('Master'),
    t('Porto Blog'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Main Blog'),
    t('Timeline'),
    t('author'),
    t('.'),
    t(','),
    t('<div class="row">
	<div class="col-md-12">
		[field_image]
	</div>
</div>
<div class="row">
	<div class="col-md-12">

		<div class="post-content">
			<h4>[title]</h4>
			<p>[body]</p>
		</div>

	</div>
</div>
<div class="row">
	<div class="col-md-12">
		<div class="post-meta">
			<span><i class="fa fa-calendar"></i> [created]</span><br>
		</div>
	</div>
</div>
<div class="row">
	<div class="col-md-12">
		<div class="post-meta">
			<span><i class="fa fa-user"></i> By [name]</span>
			<span><i class="fa fa-tag"></i> [field_tags] </span>
			<span><i class="fa fa-comments"></i> <a href="[path]#comments">[comment_count]</a></span>
		</div>
	</div>
</div>
<div class="row">
	<div class="col-md-12">
		<a href="[path]" class="btn btn-xs btn-primary pull-right">Read more...</a>
	</div>
</div>'),
  );
  $export['porto_blog'] = $view;

  $view = new view();
  $view->name = 'porto_portfolio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Porto Portfolio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portfolio Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio' => 'portfolio',
  );

  /* Display: Portfolio 4  Columns */
  $handler = $view->new_display('block', 'Portfolio 4  Columns', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '4 Columns';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_four',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'porto_taxonomy:block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'portfolio' => 'portfolio',
    'forums' => 0,
    'parallax' => 0,
    'skills' => 0,
    'tags' => 0,
    'team' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_category']['separator'] = ' ';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="isotope-item [term_node_tid]">
	<div class="portfolio-item img-thumbnail">
		<a href="[path]" class="thumb-info">
			[field_image]
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Portfolio 3 columns */
  $handler = $view->new_display('block', 'Portfolio 3 columns', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '3 Columns';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_three',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'porto_taxonomy:block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'portfolio' => 'portfolio',
    'forums' => 0,
    'parallax' => 0,
    'skills' => 0,
    'tags' => 0,
    'team' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_category']['separator'] = ' ';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="isotope-item [term_node_tid]">
	<div class="portfolio-item img-thumbnail">
		<a href="[path]" class="thumb-info">
			[field_image]
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Portfolio 2  Columns */
  $handler = $view->new_display('block', 'Portfolio 2  Columns', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2 Columns';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_two',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'porto_taxonomy:block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'portfolio' => 'portfolio',
    'forums' => 0,
    'parallax' => 0,
    'skills' => 0,
    'tags' => 0,
    'team' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_category']['separator'] = ' ';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="isotope-item [term_node_tid]">
	<div class="portfolio-item img-thumbnail">
		<a href="[path]" class="thumb-info">
			[field_image]
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Portfolio Timeline */
  $handler = $view->new_display('block', 'Portfolio Timeline', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolio Timeline';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_timeline',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['alter']['text'] = '<div class="portfolio-item img-thumbnail">
	<a href="#" class="thumb-info">
		<img alt="" width="560" height="375" class="img-responsive" src="[field_image]">
		<span class="thumb-info-title">
			<span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" class="thumb-info-action-icon"><i class="fa fa-link"></i></span>
		</span>
	</a>
</div>';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="portfolio-item">
	<a href="[path]" class="thumb-info">
		<img alt="" width="560" height="375" class="img-responsive" src="[field_image]">
		<span class="thumb-info-title">
			<span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" class="thumb-info-action-icon"><i class="fa fa-link"></i></span>
		</span>
	</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Portfolio Fullwidth */
  $handler = $view->new_display('block', 'Portfolio Fullwidth', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolio Fullwidth';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'porto_taxonomy:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'portfolio' => 'portfolio',
    'forums' => 0,
    'parallax' => 0,
    'skills' => 0,
    'tags' => 0,
    'team' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_category']['separator'] = ' ';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="isotope-item [term_node_tid]">
	<div class="portfolio-item m-none">
		<a href="[path]" class="thumb-info secundary">
			[field_image]
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Related Projects */
  $handler = $view->new_display('block', 'Related Projects', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Projects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_related_projects',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Related <strong>Work</strong></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="portfolio-item thumbnail mobile-max-width">
	<a href="[path]" class="thumb-info">
		[field_image]
		<span class="thumb-info-title">
			<span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
		</span>
	</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio' => 'portfolio',
  );

  /* Display: Latest Projects */
  $handler = $view->new_display('block', 'Latest Projects', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Projects';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_carousel',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'porto_portfolio:block_6';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="portfolio-item thumbnail">
	<a class="thumb-info lightbox" href="#popupProject_[nid]" data-plugin-options=\'{"type":"inline", preloader: false}\'>
	  [field_image]
		<span class="thumb-info-title">
		  <span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
		</span>
	</a>
</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;

  /* Display: Latest Projects Content */
  $handler = $view->new_display('block', 'Latest Projects Content', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Projects Block';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Description */
  $handler->display->display_options['fields']['field_portfolio_description']['id'] = 'field_portfolio_description';
  $handler->display->display_options['fields']['field_portfolio_description']['table'] = 'field_data_field_portfolio_description';
  $handler->display->display_options['fields']['field_portfolio_description']['field'] = 'field_portfolio_description';
  $handler->display->display_options['fields']['field_portfolio_description']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_description']['alter']['text'] = '<h4>Project <strong>Description</strong></h4>	
[field_portfolio_description]';
  $handler->display->display_options['fields']['field_portfolio_description']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Link */
  $handler->display->display_options['fields']['field_portfolio_link']['id'] = 'field_portfolio_link';
  $handler->display->display_options['fields']['field_portfolio_link']['table'] = 'field_data_field_portfolio_link';
  $handler->display->display_options['fields']['field_portfolio_link']['field'] = 'field_portfolio_link';
  $handler->display->display_options['fields']['field_portfolio_link']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_link']['alter']['text'] = '<a href="[field_portfolio_link]" class="btn btn-primary btn-icon"><i class="icon icon-external-link"></i>Live Preview</a> <span class="arrow hlb" data-appear-animation="rotateInUpLeft" data-appear-animation-delay="800"></span>';
  $handler->display->display_options['fields']['field_portfolio_link']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Skills */
  $handler->display->display_options['fields']['field_portfolio_skills']['id'] = 'field_portfolio_skills';
  $handler->display->display_options['fields']['field_portfolio_skills']['table'] = 'field_data_field_portfolio_skills';
  $handler->display->display_options['fields']['field_portfolio_skills']['field'] = 'field_portfolio_skills';
  $handler->display->display_options['fields']['field_portfolio_skills']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_skills']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_skills']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_skills']['alter']['text'] = '<li>
    <i class="icon icon-check"></i>[field_portfolio_skills]
</li>';
  $handler->display->display_options['fields']['field_portfolio_skills']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_skills']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_skills']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_skills']['separator'] = ' ';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="popupProject_[nid]" class="popup-inline-content">
  <h2>[title]</h2>
  <div class="row">
    <div class="col-md-6 latest-projects-content-image">
      <img class="img-thumbnail img-responsive" src="[field_image]" alt="item">
    </div>

    <div class="col-md-6">
      [field_portfolio_description]
      [field_portfolio_link]

      <h4 class="push-top">Services</h4>
      <ul class="list icons list-unstyled">
	 [field_portfolio_skills]
      </ul>

    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Portfolio Lightbox */
  $handler = $view->new_display('block', 'Portfolio Lightbox', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolio Lightbox';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_lightbox',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'porto_taxonomy:block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'portfolio' => 'portfolio',
    'forums' => 0,
    'parallax' => 0,
    'skills' => 0,
    'tags' => 0,
    'team' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_category']['separator'] = ' ';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-md-3 col-sm-6 col-xs-12 isotope-item [term_node_tid]">
	<div class="portfolio-item img-thumbnail">
		<a href="[field_image]" class="thumb-info">
                        <img alt="[title]" class="img-responsive" src="[field_image]">
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $translatables['porto_portfolio'] = array(
    t('Master'),
    t('Portfolio Block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All taxonomy terms'),
    t('Portfolio 4  Columns'),
    t('4 Columns'),
    t('<li class="isotope-item [term_node_tid]">
	<div class="portfolio-item img-thumbnail">
		<a href="[path]" class="thumb-info">
			[field_image]
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>'),
    t('Portfolio 3 columns'),
    t('3 Columns'),
    t('Portfolio 2  Columns'),
    t('2 Columns'),
    t('Portfolio Timeline'),
    t('<div class="portfolio-item img-thumbnail">
	<a href="#" class="thumb-info">
		<img alt="" width="560" height="375" class="img-responsive" src="[field_image]">
		<span class="thumb-info-title">
			<span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" class="thumb-info-action-icon"><i class="fa fa-link"></i></span>
		</span>
	</a>
</div>'),
    t('<div class="portfolio-item">
	<a href="[path]" class="thumb-info">
		<img alt="" width="560" height="375" class="img-responsive" src="[field_image]">
		<span class="thumb-info-title">
			<span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" class="thumb-info-action-icon"><i class="fa fa-link"></i></span>
		</span>
	</a>
</div>'),
    t('Portfolio Fullwidth'),
    t('<li class="isotope-item [term_node_tid]">
	<div class="portfolio-item m-none">
		<a href="[path]" class="thumb-info secundary">
			[field_image]
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>'),
    t('Related Projects'),
    t('<h3>Related <strong>Work</strong></h3>'),
    t('<div class="portfolio-item thumbnail mobile-max-width">
	<a href="[path]" class="thumb-info">
		[field_image]
		<span class="thumb-info-title">
			<span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
		</span>
	</a>
</div>'),
    t('All'),
    t('Latest Projects'),
    t('<div class="portfolio-item thumbnail">
	<a class="thumb-info lightbox" href="#popupProject_[nid]" data-plugin-options=\'{"type":"inline", preloader: false}\'>
	  [field_image]
		<span class="thumb-info-title">
		  <span class="thumb-info-inner">[title]</span>
			<span class="thumb-info-type">[field_portfolio_category]</span>
		</span>
		<span class="thumb-info-action">
			<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
		</span>
	</a>
</div>'),
    t('Latest Projects Content'),
    t('Latest Projects Block'),
    t('<h4>Project <strong>Description</strong></h4>	
[field_portfolio_description]'),
    t('<a href="[field_portfolio_link]" class="btn btn-primary btn-icon"><i class="icon icon-external-link"></i>Live Preview</a> <span class="arrow hlb" data-appear-animation="rotateInUpLeft" data-appear-animation-delay="800"></span>'),
    t('<li>
    <i class="icon icon-check"></i>[field_portfolio_skills]
</li>'),
    t('<div id="popupProject_[nid]" class="popup-inline-content">
  <h2>[title]</h2>
  <div class="row">
    <div class="col-md-6 latest-projects-content-image">
      <img class="img-thumbnail img-responsive" src="[field_image]" alt="item">
    </div>

    <div class="col-md-6">
      [field_portfolio_description]
      [field_portfolio_link]

      <h4 class="push-top">Services</h4>
      <ul class="list icons list-unstyled">
	 [field_portfolio_skills]
      </ul>

    </div>
  </div>
</div>'),
    t('Portfolio Lightbox'),
    t('<li class="col-md-3 col-sm-6 col-xs-12 isotope-item [term_node_tid]">
	<div class="portfolio-item img-thumbnail">
		<a href="[field_image]" class="thumb-info">
                        <img alt="[title]" class="img-responsive" src="[field_image]">
			<span class="thumb-info-title">
				<span class="thumb-info-inner">[title]</span>
				<span class="thumb-info-type">[field_portfolio_category]</span>
			</span>
			<span class="thumb-info-action">
				<span title="Universal" href="#" class="thumb-info-action-icon"><i class="icon icon-link"></i></span>
			</span>
		</a>
	</div>
</li>'),
  );
  $export['porto_portfolio'] = $view;

  $view = new view();
  $view->name = 'porto_taxonomy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Porto Taxonomy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Portfolio Filters */
  $handler = $view->new_display('block', 'Portfolio Filters', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_filter',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Isotope Filter';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '<li data-option-value=".[name]"><a href="#" title="Isotope Filter">[name_1]</a></li>';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );

  /* Display: Portfolio Filters Full Width */
  $handler = $view->new_display('block', 'Portfolio Filters Full Width', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'portfolio_filter_full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Isotope Filter';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '<li data-option-value=".[name]"><a href="#" title="Isotope Filter">[name_1]</a></li>';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );

  /* Display: Team Filters */
  $handler = $view->new_display('block', 'Team Filters', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'team_filter',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Isotope Filters';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '<li data-option-value=".[name]"><a href="#" title="Isotope Filter">[name_1]</a></li>';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    3 => '3',
  );

  /* Display: Shop Tags */
  $handler = $view->new_display('block', 'Shop Tags', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list shop-tags';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<hr>
<h5 class="heading-primary">Tags</h5>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'label label-dark';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    9 => '9',
  );
  $translatables['porto_taxonomy'] = array(
    t('Master'),
    t('Taxonomy'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Portfolio Filters'),
    t('Isotope Filter'),
    t('<li data-option-value=".[name]"><a href="#" title="Isotope Filter">[name_1]</a></li>'),
    t('Portfolio Filters Full Width'),
    t('Team Filters'),
    t('Isotope Filters'),
    t('Shop Tags'),
    t('<none>'),
    t('<hr>
<h5 class="heading-primary">Tags</h5>'),
  );
  $export['porto_taxonomy'] = $view;

  $view = new view();
  $view->name = 'porto_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Porto Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Porto Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'team' => 'team',
  );

  /* Display: Team Main */
  $handler = $view->new_display('block', 'Team Main', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'team',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'porto_taxonomy:block_2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'team' => 'team',
    'forums' => 0,
    'parallax' => 0,
    'portfolio' => 0,
    'skills' => 0,
    'tags' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Content: Team Category */
  $handler->display->display_options['fields']['field_team_category']['id'] = 'field_team_category';
  $handler->display->display_options['fields']['field_team_category']['table'] = 'field_data_field_team_category';
  $handler->display->display_options['fields']['field_team_category']['field'] = 'field_team_category';
  $handler->display->display_options['fields']['field_team_category']['label'] = '';
  $handler->display->display_options['fields']['field_team_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_team_category']['delta_offset'] = '0';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Team Bio */
  $handler->display->display_options['fields']['field_team_bio']['id'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['table'] = 'field_data_field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['field'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['label'] = '';
  $handler->display->display_options['fields']['field_team_bio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['element_label_colon'] = FALSE;
  /* Field: Content: Facebook Link */
  $handler->display->display_options['fields']['field_facebook_link']['id'] = 'field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['table'] = 'field_data_field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['field'] = 'field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" target="_blank" href="[field_facebook_link]" data-original-title="Facebook"><i class="icon icon-facebook"></i><span>Facebook</span></a>';
  $handler->display->display_options['fields']['field_facebook_link']['element_label_colon'] = FALSE;
  /* Field: Content: Twitter Link */
  $handler->display->display_options['fields']['field_twitter_link']['id'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['table'] = 'field_data_field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['field'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" href="[field_twitter_link]" data-original-title="Twitter"><i class="icon icon-twitter"></i><span>Twitter</span></a>';
  $handler->display->display_options['fields']['field_twitter_link']['element_label_colon'] = FALSE;
  /* Field: Content: LinkedIn Link */
  $handler->display->display_options['fields']['field_linkedin_link']['id'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['table'] = 'field_data_field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['field'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" href="[field_linkedin_link]" data-original-title="Linkedin"><i class="icon icon-linkedin"></i><span>Linkedin</span></a>';
  $handler->display->display_options['fields']['field_linkedin_link']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-md-3 isotope-item [term_node_tid]">
  <div class="team-item img-thumbnail">
    <a href="[path]" class="thumb-info team">
      [field_image]
      <span class="thumb-info-title">
        <span class="thumb-info-inner">[title]</span>
        <span class="thumb-info-type">[field_team_category]</span>
      </span>
    </a>
    <span class="thumb-info-caption">
      <p>[field_team_bio]</p>
      <span class="thumb-info-social-icons">
	  [field_facebook_link]
          [field_twitter_link]
          [field_linkedin_link]
      </span>
    </span>
  </div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: About Us */
  $handler = $view->new_display('block', 'About Us', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About Us';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'team',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'team' => 'team',
    'forums' => 0,
    'parallax' => 0,
    'portfolio' => 0,
    'skills' => 0,
    'tags' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Content: Team Category */
  $handler->display->display_options['fields']['field_team_category']['id'] = 'field_team_category';
  $handler->display->display_options['fields']['field_team_category']['table'] = 'field_data_field_team_category';
  $handler->display->display_options['fields']['field_team_category']['field'] = 'field_team_category';
  $handler->display->display_options['fields']['field_team_category']['label'] = '';
  $handler->display->display_options['fields']['field_team_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_team_category']['delta_offset'] = '0';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Team Bio */
  $handler->display->display_options['fields']['field_team_bio']['id'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['table'] = 'field_data_field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['field'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['label'] = '';
  $handler->display->display_options['fields']['field_team_bio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['element_label_colon'] = FALSE;
  /* Field: Content: Facebook Link */
  $handler->display->display_options['fields']['field_facebook_link']['id'] = 'field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['table'] = 'field_data_field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['field'] = 'field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" target="_blank" href="[field_facebook_link]" data-original-title="Facebook"><i class="icon icon-facebook"></i><span>Facebook</span></a>';
  $handler->display->display_options['fields']['field_facebook_link']['element_label_colon'] = FALSE;
  /* Field: Content: Twitter Link */
  $handler->display->display_options['fields']['field_twitter_link']['id'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['table'] = 'field_data_field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['field'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" href="[field_twitter_link]" data-original-title="Twitter"><i class="icon icon-twitter"></i><span>Twitter</span></a>';
  $handler->display->display_options['fields']['field_twitter_link']['element_label_colon'] = FALSE;
  /* Field: Content: LinkedIn Link */
  $handler->display->display_options['fields']['field_linkedin_link']['id'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['table'] = 'field_data_field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['field'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" href="[field_linkedin_link]" data-original-title="Linkedin"><i class="icon icon-linkedin"></i><span>Linkedin</span></a>';
  $handler->display->display_options['fields']['field_linkedin_link']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-md-3 isotope-item [term_node_tid]">
  <div class="team-item img-thumbnail">
    <a href="[path]" class="thumb-info team">
      [field_image]
      <span class="thumb-info-title">
        <span class="thumb-info-inner">[title]</span>
        <span class="thumb-info-type">[field_team_category]</span>
      </span>
    </a>
    <span class="thumb-info-caption">
      <p>[field_team_bio]</p>
      <span class="thumb-info-social-icons">
	  [field_facebook_link]
          [field_twitter_link]
          [field_linkedin_link]
      </span>
    </span>
  </div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: One Page */
  $handler = $view->new_display('block', 'One Page', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'One Page';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'team',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 data-appear-animation="fadeInLeft">Meet the <strong>Team</strong></h2>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'team' => 'team',
    'forums' => 0,
    'parallax' => 0,
    'portfolio' => 0,
    'skills' => 0,
    'tags' => 0,
    'video_background' => 0,
  );
  $handler->display->display_options['fields']['term_node_tid']['convert_spaces'] = TRUE;
  /* Field: Content: Team Category */
  $handler->display->display_options['fields']['field_team_category']['id'] = 'field_team_category';
  $handler->display->display_options['fields']['field_team_category']['table'] = 'field_data_field_team_category';
  $handler->display->display_options['fields']['field_team_category']['field'] = 'field_team_category';
  $handler->display->display_options['fields']['field_team_category']['label'] = '';
  $handler->display->display_options['fields']['field_team_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_team_category']['delta_offset'] = '0';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Team Bio */
  $handler->display->display_options['fields']['field_team_bio']['id'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['table'] = 'field_data_field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['field'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['label'] = '';
  $handler->display->display_options['fields']['field_team_bio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['element_label_colon'] = FALSE;
  /* Field: Content: Facebook Link */
  $handler->display->display_options['fields']['field_facebook_link']['id'] = 'field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['table'] = 'field_data_field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['field'] = 'field_facebook_link';
  $handler->display->display_options['fields']['field_facebook_link']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" target="_blank" href="[field_facebook_link]" data-original-title="Facebook"><i class="icon icon-facebook"></i><span>Facebook</span></a>';
  $handler->display->display_options['fields']['field_facebook_link']['element_label_colon'] = FALSE;
  /* Field: Content: Twitter Link */
  $handler->display->display_options['fields']['field_twitter_link']['id'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['table'] = 'field_data_field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['field'] = 'field_twitter_link';
  $handler->display->display_options['fields']['field_twitter_link']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" href="[field_twitter_link]" data-original-title="Twitter"><i class="icon icon-twitter"></i><span>Twitter</span></a>';
  $handler->display->display_options['fields']['field_twitter_link']['element_label_colon'] = FALSE;
  /* Field: Content: LinkedIn Link */
  $handler->display->display_options['fields']['field_linkedin_link']['id'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['table'] = 'field_data_field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['field'] = 'field_linkedin_link';
  $handler->display->display_options['fields']['field_linkedin_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_link']['alter']['text'] = '<a rel="tooltip" data-placement="bottom" href="[field_linkedin_link]" data-original-title="Linkedin"><i class="icon icon-linkedin"></i><span>Linkedin</span></a>';
  $handler->display->display_options['fields']['field_linkedin_link']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-md-3 isotope-item [term_node_tid]">
  <div class="team-item img-thumbnail">
    <a href="[path]" class="thumb-info team">
      [field_image]
      <span class="thumb-info-title">
        <span class="thumb-info-inner">[title]</span>
        <span class="thumb-info-type">[field_team_category]</span>
      </span>
    </a>
    <span class="thumb-info-caption">
      <p>[field_team_bio]</p>
      <span class="thumb-info-social-icons">
	  [field_facebook_link]
          [field_twitter_link]
          [field_linkedin_link]
      </span>
    </span>
  </div>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $translatables['porto_team'] = array(
    t('Master'),
    t('Porto Team'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Team Main'),
    t('<a rel="tooltip" data-placement="bottom" target="_blank" href="[field_facebook_link]" data-original-title="Facebook"><i class="icon icon-facebook"></i><span>Facebook</span></a>'),
    t('<a rel="tooltip" data-placement="bottom" href="[field_twitter_link]" data-original-title="Twitter"><i class="icon icon-twitter"></i><span>Twitter</span></a>'),
    t('<a rel="tooltip" data-placement="bottom" href="[field_linkedin_link]" data-original-title="Linkedin"><i class="icon icon-linkedin"></i><span>Linkedin</span></a>'),
    t('<li class="col-md-3 isotope-item [term_node_tid]">
  <div class="team-item img-thumbnail">
    <a href="[path]" class="thumb-info team">
      [field_image]
      <span class="thumb-info-title">
        <span class="thumb-info-inner">[title]</span>
        <span class="thumb-info-type">[field_team_category]</span>
      </span>
    </a>
    <span class="thumb-info-caption">
      <p>[field_team_bio]</p>
      <span class="thumb-info-social-icons">
	  [field_facebook_link]
          [field_twitter_link]
          [field_linkedin_link]
      </span>
    </span>
  </div>
</li>'),
    t('About Us'),
    t('One Page'),
    t('<h2 data-appear-animation="fadeInLeft">Meet the <strong>Team</strong></h2>
'),
  );
  $export['porto_team'] = $view;

  $view = new view();
  $view->name = 'shop';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Shop';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shop';
  $handler->display->display_options['css_class'] = 'shop';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_variations_product_id']['id'] = 'field_product_variations_product_id';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['table'] = 'field_data_field_product_variations';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['field'] = 'field_product_variations_product_id';
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['label'] = '';
  $handler->display->display_options['fields']['base_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_url']['show_link'] = 0;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => '',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => '',
    'link_target' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['text'] = '<span class="onsale">Sale!</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['type'] = 'list_key';
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['text'] = '<del><span class="amount">[commerce_price]</span></del>
<ins><span class="amount">[field_sale_price]</span></ins>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['empty'] = '<span class="amount">[commerce_price]</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-md-4 col-sm-6 col-xs-12 product">
	<a href="[path]">
	[field_commerce_saleprice_on_sale]	
	</a>
	<span class="product-thumb-info">
		<a href="[base_url]/product/add/[product_id]" class="add-to-cart-product">
			<span><i class="fa fa-shopping-cart"></i> Add to Cart</span>
		</a>
		<a href="[path]">
			<span class="product-thumb-info-image">
				<span class="product-thumb-info-act">
					<span class="product-thumb-info-act-left"><em>View</em></span>
					<span class="product-thumb-info-act-right"><em><i class="fa fa-plus"></i> Details</em></span>
				</span>
				[field_image]
			</span>
		</a>
		<span class="product-thumb-info-content">
			<a href="[path]">
				<h4 class="heading-primary">[title]</h4>
				<span class="price">
					[field_commerce_saleprice]
				</span>
			</a>
		</span>
	</span>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );

  /* Display: Shop */
  $handler = $view->new_display('page', 'Shop', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'shop',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_variations_product_id']['id'] = 'field_product_variations_product_id';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['table'] = 'field_data_field_product_variations';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['field'] = 'field_product_variations_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['label'] = '';
  $handler->display->display_options['fields']['base_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_url']['show_link'] = 0;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => '',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => '',
    'link_target' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['text'] = '<span class="onsale">Sale!</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['type'] = 'list_key';
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['text'] = '<del><span class="amount">[commerce_price]</span></del>
<ins><span class="amount">[field_commerce_saleprice]</span></ins>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['empty'] = '<span class="amount">[commerce_price]</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-md-4 col-sm-6 col-xs-12 product">
	<a href="[path]">
	[field_commerce_saleprice_on_sale]	
	</a>
	<span class="product-thumb-info">
		<a href="[base_url]/product/add/[product_id]" class="add-to-cart-product">
			<span><i class="fa fa-shopping-cart"></i> Add to Cart</span>
		</a>
		<a href="[path]">
			<span class="product-thumb-info-image">
				<span class="product-thumb-info-act">
					<span class="product-thumb-info-act-left"><em>View</em></span>
					<span class="product-thumb-info-act-right"><em><i class="fa fa-plus"></i> Details</em></span>
				</span>
				[field_image]
			</span>
		</a>
		<span class="product-thumb-info-content">
			<a href="[path]">
				<h4 class="heading-primary">[title]</h4>
				<span class="price">
					[field_commerce_saleprice]
				</span>
			</a>
		</span>
	</span>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['path'] = 'shop';

  /* Display: Top Rated Products */
  $handler = $view->new_display('block', 'Top Rated Products', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'simple-post-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<hr />
<h5 class="heading-primary">Top Rated Products</h5>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_variations_product_id']['id'] = 'field_product_variations_product_id';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['table'] = 'field_data_field_product_variations';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['field'] = 'field_product_variations_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumb_60x60',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['text'] = '<span class="old-price">[commerce_price]</span> [field_commerce_saleprice]';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['empty'] = '[commerce_price]';
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="post-image">
	<div class="img-thumbnail">
		<a href="[path]">[field_image]</a>
	</div>
</div>
<div class="post-info">
	<a href="[path]">[title]</a>
	<div class="post-meta">
		[field_commerce_saleprice]
	</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Product Rating (field_product_rating:rating) */
  $handler->display->display_options['sorts']['field_product_rating_rating']['id'] = 'field_product_rating_rating';
  $handler->display->display_options['sorts']['field_product_rating_rating']['table'] = 'field_data_field_product_rating';
  $handler->display->display_options['sorts']['field_product_rating_rating']['field'] = 'field_product_rating_rating';
  $handler->display->display_options['sorts']['field_product_rating_rating']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  /* Filter criterion: Content: Product Rating (field_product_rating:rating) */
  $handler->display->display_options['filters']['field_product_rating_rating']['id'] = 'field_product_rating_rating';
  $handler->display->display_options['filters']['field_product_rating_rating']['table'] = 'field_data_field_product_rating';
  $handler->display->display_options['filters']['field_product_rating_rating']['field'] = 'field_product_rating_rating';
  $handler->display->display_options['filters']['field_product_rating_rating']['operator'] = '>';
  $handler->display->display_options['filters']['field_product_rating_rating']['value']['value'] = '1';

  /* Display: Related Products */
  $handler = $view->new_display('block', 'Related Products', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'products product-thumb-info-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<hr class="tall">
<h4 class="mb-md text-uppercase">Related <strong>Products</strong></h4>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['label'] = '';
  $handler->display->display_options['fields']['base_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_url']['show_link'] = 0;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => '',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => '',
    'link_target' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['text'] = '<span class="onsale">Sale!</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['type'] = 'list_key';
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['text'] = '<del><span class="amount">[commerce_price]</span></del>
<ins><span class="amount">[field_commerce_saleprice]</span></ins>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['empty'] = '<span class="amount">[commerce_price]</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-sm-3 col-xs-12 product">
	<a href="[path]">
	[field_commerce_saleprice_on_sale]	
	</a>
	<span class="product-thumb-info">
		<a href="[base_url]/product/add/[product_id]" class="add-to-cart-product">
			<span><i class="fa fa-shopping-cart"></i> Add to Cart</span>
		</a>
		<a href="[path]">
			<span class="product-thumb-info-image">
				<span class="product-thumb-info-act">
					<span class="product-thumb-info-act-left"><em>View</em></span>
					<span class="product-thumb-info-act-right"><em><i class="fa fa-plus"></i> Details</em></span>
				</span>
				[field_image]
			</span>
		</a>
		<span class="product-thumb-info-content">
			<a href="[path]">
				<h4 class="heading-primary">[title]</h4>
				<span class="price">
					[field_commerce_saleprice]
				</span>
			</a>
		</span>
	</span>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'product_categories' => 'product_categories',
    'product_tags' => 'product_tags',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;

  /* Display: Shop Full Width */
  $handler = $view->new_display('page', 'Shop Full Width', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'porto_views';
  $handler->display->display_options['style_options']['porto_views'] = array(
    'optionset' => 'shop',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_variations_product_id']['id'] = 'field_product_variations_product_id';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['table'] = 'field_data_field_product_variations';
  $handler->display->display_options['relationships']['field_product_variations_product_id']['field'] = 'field_product_variations_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['label'] = '';
  $handler->display->display_options['fields']['base_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_url']['show_link'] = 0;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => '',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => '',
    'link_target' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['alter']['text'] = '<span class="onsale">Sale!</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['type'] = 'list_key';
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product_variations_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['alter']['text'] = '<del><span class="amount">[commerce_price]</span></del>
<ins><span class="amount">[field_commerce_saleprice]</span></ins>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['empty'] = '<span class="amount">[commerce_price]</span>';
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<li class="col-md-3 col-sm-6 col-xs-12 product">
	<a href="[path]">
	[field_commerce_saleprice_on_sale]	
	</a>
	<span class="product-thumb-info">
		<a href="[base_url]/product/add/[product_id]" class="add-to-cart-product">
			<span><i class="fa fa-shopping-cart"></i> Add to Cart</span>
		</a>
		<a href="[path]">
			<span class="product-thumb-info-image">
				<span class="product-thumb-info-act">
					<span class="product-thumb-info-act-left"><em>View</em></span>
					<span class="product-thumb-info-act-right"><em><i class="fa fa-plus"></i> Details</em></span>
				</span>
				[field_image]
			</span>
		</a>
		<span class="product-thumb-info-content">
			<a href="[path]">
				<h4 class="heading-primary">[title]</h4>
				<span class="price">
					[field_commerce_saleprice]
				</span>
			</a>
		</span>
	</span>
</li>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  $handler->display->display_options['path'] = 'shop-full-width';
  $translatables['shop'] = array(
    t('Master'),
    t('Shop'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Products referenced by field_product_variations'),
    t('<span class="onsale">Sale!</span>'),
    t('<del><span class="amount">[commerce_price]</span></del>
<ins><span class="amount">[field_sale_price]</span></ins>'),
    t('<span class="amount">[commerce_price]</span>'),
    t('<li class="col-md-4 col-sm-6 col-xs-12 product">
	<a href="[path]">
	[field_commerce_saleprice_on_sale]	
	</a>
	<span class="product-thumb-info">
		<a href="[base_url]/product/add/[product_id]" class="add-to-cart-product">
			<span><i class="fa fa-shopping-cart"></i> Add to Cart</span>
		</a>
		<a href="[path]">
			<span class="product-thumb-info-image">
				<span class="product-thumb-info-act">
					<span class="product-thumb-info-act-left"><em>View</em></span>
					<span class="product-thumb-info-act-right"><em><i class="fa fa-plus"></i> Details</em></span>
				</span>
				[field_image]
			</span>
		</a>
		<span class="product-thumb-info-content">
			<a href="[path]">
				<h4 class="heading-primary">[title]</h4>
				<span class="price">
					[field_commerce_saleprice]
				</span>
			</a>
		</span>
	</span>
</li>'),
    t('<del><span class="amount">[commerce_price]</span></del>
<ins><span class="amount">[field_commerce_saleprice]</span></ins>'),
    t('Top Rated Products'),
    t('<none>'),
    t('<hr />
<h5 class="heading-primary">Top Rated Products</h5>'),
    t('<span class="old-price">[commerce_price]</span> [field_commerce_saleprice]'),
    t('[commerce_price]'),
    t('<div class="post-image">
	<div class="img-thumbnail">
		<a href="[path]">[field_image]</a>
	</div>
</div>
<div class="post-info">
	<a href="[path]">[title]</a>
	<div class="post-meta">
		[field_commerce_saleprice]
	</div>
</div>'),
    t('Related Products'),
    t('<hr class="tall">
<h4 class="mb-md text-uppercase">Related <strong>Products</strong></h4>'),
    t('<li class="col-sm-3 col-xs-12 product">
	<a href="[path]">
	[field_commerce_saleprice_on_sale]	
	</a>
	<span class="product-thumb-info">
		<a href="[base_url]/product/add/[product_id]" class="add-to-cart-product">
			<span><i class="fa fa-shopping-cart"></i> Add to Cart</span>
		</a>
		<a href="[path]">
			<span class="product-thumb-info-image">
				<span class="product-thumb-info-act">
					<span class="product-thumb-info-act-left"><em>View</em></span>
					<span class="product-thumb-info-act-right"><em><i class="fa fa-plus"></i> Details</em></span>
				</span>
				[field_image]
			</span>
		</a>
		<span class="product-thumb-info-content">
			<a href="[path]">
				<h4 class="heading-primary">[title]</h4>
				<span class="price">
					[field_commerce_saleprice]
				</span>
			</a>
		</span>
	</span>
</li>'),
    t('All'),
    t('Shop Full Width'),
    t('<li class="col-md-3 col-sm-6 col-xs-12 product">
	<a href="[path]">
	[field_commerce_saleprice_on_sale]	
	</a>
	<span class="product-thumb-info">
		<a href="[base_url]/product/add/[product_id]" class="add-to-cart-product">
			<span><i class="fa fa-shopping-cart"></i> Add to Cart</span>
		</a>
		<a href="[path]">
			<span class="product-thumb-info-image">
				<span class="product-thumb-info-act">
					<span class="product-thumb-info-act-left"><em>View</em></span>
					<span class="product-thumb-info-act-right"><em><i class="fa fa-plus"></i> Details</em></span>
				</span>
				[field_image]
			</span>
		</a>
		<span class="product-thumb-info-content">
			<a href="[path]">
				<h4 class="heading-primary">[title]</h4>
				<span class="price">
					[field_commerce_saleprice]
				</span>
			</a>
		</span>
	</span>
</li>'),
  );
  $export['shop'] = $view;

  $view = new view();
  $view->name = 'tabbed_popular_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tabbed Popular Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tabbed Popular Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'tabbed_popular_posts:block_1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'tabbed_recent_posts:block';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $translatables['tabbed_popular_posts'] = array(
    t('Master'),
    t('Tabbed Popular Posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['tabbed_popular_posts'] = $view;

  $view = new view();
  $view->name = 'tabbed_recent_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tabbed Recent Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tabbed Recent Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['tabbed_recent_posts'] = array(
    t('Master'),
    t('Tabbed Recent Posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['tabbed_recent_posts'] = $view;

  $view = new view();
  $view->name = 'testimonials';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2><strong>What</strong> Client’s Say</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonials' => 'testimonials',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['testimonials'] = array(
    t('Master'),
    t('Testimonials'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h2><strong>What</strong> Client’s Say</h2>'),
    t('Block'),
  );
  $export['testimonials'] = $view;

  $view = new view();
  $view->name = 'twitter_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Twitter Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Twitter Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'twitter_feed' => 'twitter_feed',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['twitter_feed'] = array(
    t('Master'),
    t('Twitter Feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['twitter_feed'] = $view;

  return $export;
}
