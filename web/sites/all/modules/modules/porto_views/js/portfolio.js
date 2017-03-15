jQuery(document).ready(function($){
	$("div.portfolio_four").each(function() {
		$("li.isotope-item").addClass("col-md-3 col-sm-6 col-xs-12");
	});
	$("div.portfolio_three").each(function() {
		$("li.isotope-item").addClass("col-md-4 col-sm-6 col-xs-12");
	});
	$("div.portfolio_two").each(function() {
		$("li.isotope-item").addClass("col-sm-6 col-xs-12");
	});
	$(".sort-source li").not(':first-child').each(function() {
		var val = $(this).attr("data-option-value");
		$(this).attr("data-option-value", "."+val.substring(1, val.length).replace('.','-')+"");
	});
	
});