<?php
/**
 * @file
 * blocks_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function blocks_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for About Company page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_banner';
  $fe_block_boxes->body = '<div class="banner">
<img alt="" src="/sites/default/files/public/about-banner.jpg" />
<h3>About Company</h3>
</div>
';

  $export['about_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About company: Facts';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_facts';
  $fe_block_boxes->body = '<h2>Our store is the best solution for an easy shopping.</h2>

<div class="horizontal-blocks">
<div class="inline-block block-1">
<div class=\'inline-block-inner\'>
<div class="inline-block-img"><img alt="" src="/sites/default/files/public/about-icon-1.png" style="width: 82px; height: 97px;" /></div>
<div class="inline-block-description">
<p>In our store only fresh products</p>
</div>
</div>
</div>

<div class="inline-block block-2">
<div class=\'inline-block-inner\'>
<div class="inline-block-img"><img alt="" src="/sites/default/files/public/about-icon-2.png" style="width: 74px; height: 111px;" /></div>

<div class="inline-block-description">
<p>Special for you beneficial<br />
offers everyday</p>
</div>
</div>
</div>

<div class="inline-block block-3">
<div class=\'inline-block-inner\'>
<div class="inline-block-img"><img alt="" src="/sites/default/files/public/about-icon-3.png" style="width: 103px; height: 116px;" /></div>

<div class="inline-block-description">
<p>The fast and easy shopping</p>
</div>
</div>
</div>

<div class="inline-block block-4">
<div class=\'inline-block-inner\'>
<div class="inline-block-img"><img alt="" src="/sites/default/files/public/about-icon-4.png" style="width: 101px; height: 106px;" /></div>

<div class="inline-block-description">
<p>Professional and friendly staff</p>
</div>
</div>
</div>
</div>
';

  $export['about_facts'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About company: Our team';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_our_team';
  $fe_block_boxes->body = '<h2>Our team - is a key to your success.</h2>

<div class="horizontal-blocks">
<div class="inline-block block-1">
<div class="inline-block-inner">
<div class="inline-block-img"><img alt="" src="/sites/default/files/photo/about-photo-1.jpg" style="width: 370px; height: 370px;" /></div>

<div class="inline-block-description">
<div class="user-info-wrapper"><span class="user-name">Daniel Moore</span><br />
<span class="user-position">Project Manager</span></div>
</div>
</div>
</div>

<div class="inline-block block-2">
<div class="inline-block-inner">
<div class="inline-block-img"><img alt="" src="/sites/default/files/photo/about-photo-2.jpg" style="width: 370px; height: 370px;" /></div>

<div class="inline-block-description">
<div class="user-info-wrapper"><span class="user-name">Alice Davied</span><br />
<span class="user-position">Co-Founder</span></div>
</div>
</div>
</div>

<div class="inline-block block-3">
<div class="inline-block-inner">
<div class="inline-block-img"><img alt="" src="/sites/default/files/photo/about-photo-3.jpg" style="width: 370px; height: 370px;" /></div>

<div class="inline-block-description">
<div class="user-info-wrapper"><span class="user-name">Susan Evans</span><br />
<span class="user-position">Founder</span></div>
</div>
</div>
</div>
</div>
';

  $export['about_our_team'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block mobile banner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_mobile_banner';
  $fe_block_boxes->body = '<div class="mobile-slide"><img alt="" src="/sites/default/files/public/rectangle-3.jpg" />
<div class="mobile-slide__wrapper"><span class="title">WE CREATED<br />
PERFECT CONDITIONS<br />
FOR FAST<br />
SHOPPING.</span>
<div class="button_back_to_shopping">
<form action="/catalog"><button class="button button-fill-green" type="submit">Go to the catalog</button></form>
</div>
</div>
</div>
';

  $export['block_mobile_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for Shopping Cart page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'cart_banner';
  $fe_block_boxes->body = '<div class=\'banner\'>
<img alt="" src="/sites/default/files/public/products-banner.jpg" />
<h3>Shopping Cart</h3>
</div>
';

  $export['cart_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for Catalog page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'catalog_banner';
  $fe_block_boxes->body = '<div class="banner">
<img alt="" src="/sites/default/files/public/products-banner.jpg" />
<h3>Products catalog</h3>
</div>

';

  $export['catalog_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for Contact Us page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact_banner';
  $fe_block_boxes->body = '<div class="banner"><img alt="" src="/sites/default/files/public/contact-us-banner.jpg" />
<h3>Contact Us</h3>
</div>
';

  $export['contact_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact Us: Info block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact_info';
  $fe_block_boxes->body = '<p>Food Delivery talent of others is an arduous task. We ask you to be considerate in your decisions, thorough in your analysis, understanding in your criticism</p>

<div class="info-blocks-wrapper">
<div class="info-block">
<div class=\'block-icon\'><img alt="" src="/sites/default/files/public/location.png" style="width: 32px; height: 41px;" /></div>

<h3>Adress</h3>

<p>NY Street Name 80,<br />
987654 Food Delivery</p>
</div>

<div class="info-block">
<div class=\'block-icon\'><img alt="" src="/sites/default/files/public/clock.png" style="width: 37px; height: 38px;" /></div>

<h3>Opening hours</h3>

<p>Monday to Friday: 10am to 7pm<br />
Saturday: 10am to 4pm<br />
Sunday: 12am to 4pm</p>
</div>

<div class="info-block">
<div class=\'block-icon\'><img alt="" src="/sites/default/files/public/mail.png" style="width: 39px; height: 28px;" /></div>

<h3>Email</h3>

<p>mail@yourcompany.com</p>
</div>

<div class="info-block">
<div class=\'block-icon\'><img alt="" src="/sites/default/files/public/phone.png" style="width: 36px; height: 35px;" /></div>

<h3>Phone</h3>

<p>Call customer services on<br />
0800 321 4568</p>
</div>
</div>
';

  $export['contact_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright info';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'copyright_info';
  $fe_block_boxes->body = '<p>© 2018 Company name | Cozy Food Shop</p>
';

  $export['copyright_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner "Discover our products"';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'discovery_banner';
  $fe_block_boxes->body = '<a href="/catalog"><div class="banner-content">
    <h3>Catalog</h3>
    <div class="banner-img"><img alt="" src="/sites/default/files/public/banner_catalog.jpg" style="width: 167px; height: 223px;" /></div>
    <p>Discover our<br>products</p>
    </div></a>';

  $export['discovery_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for Featured products page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'featured_products_banner';
  $fe_block_boxes->body = '<div class="banner">
<img alt="" src="/sites/default/files/public/products-banner.jpg" />
<h3>Featured products</h3>
</div>

';

  $export['featured_products_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer first column block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_first_column';
  $fe_block_boxes->body = '<div class="company-description">
<p>Place your company description here: a history, your main clients and whatever you think is appropriate.</p>
</div>

<div class="social-network-images">
<div class="icon twitter-icon"><a href="#">&nbsp;</a></div>

<div class="icon facebook-icon"><a href="#">&nbsp;</a></div>

<div class="icon instagram-icon"><a href="#">&nbsp;</a></div>

<div class="icon pinterest-icon"><a href="#">&nbsp;</a></div>
<div class=\'icon google-plus-icon\'><a href="#">&nbsp;</a></div>
</div>

<div class="copyright-info">
<p>Copyright © 2018 Company name.</p>
</div>
';

  $export['footer_first_column'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner of "Special Price"';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'front_banner_1';
  $fe_block_boxes->body = '<div class="best-deals-banners__content">
<div class="best-deals-banners__img"><a href="/sale"><img alt="" src="/sites/default/files/public/home_banner_1.jpg" /></a></div>

<div class="best-deals-banners__description">
<h3 class="best-deals-banners__title"><a href="/sale">Special Price</a></h3>

<p class="best-deals-banners__text"><a href="/sale">50% off on fresh fruits<br />
and vegetables</a></p>
</div>
</div>';

  $export['front_banner_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner of "Bestsellers"';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'front_banner_2';
  $fe_block_boxes->body = '<div class="best-deals-banners__content">
<div class="best-deals-banners__img"><a href="/new-products"><img alt="" src="/sites/default/files/public/home_banner_2.jpg" /></a></div>

<div class="best-deals-banners__description">
<h3 class="best-deals-banners__title"><a href="/new-products">Bestsellers</a></h3>

<p class="best-deals-banners__text"><a href="/new-products">20% discount on the<br />
best store\'s offers</a></p>
</div>
</div>';

  $export['front_banner_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for How it works page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'how_it_works_banner';
  $fe_block_boxes->body = '<div class=\'banner\'>
<img alt="" src="/sites/default/files/public/how-it-works-banner.jpg" />
<h3>How it works</h3>
</div>';

  $export['how_it_works_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'How it works: Contact us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'how_it_works_contact';
  $fe_block_boxes->body = '<h2>Still Have a questions?</h2>

<div class="contact-banner-img"><img alt="" src="/sites/default/files/public/letter.png" /></div>

<div class="contact-us-button"><a class="button button-fill-gray" href="/contact">Contact us</a></div>
';

  $export['how_it_works_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'How it works: Steps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'how_it_works_steps';
  $fe_block_boxes->body = '<h2>Feeling uncomfortable buying stuff on the Internet?<br />
Let’s see how easy and safe it actually is.</h2>

<div class="steps-wrapper">
<div class="step step-1">
<div class="step-img"><img alt="" src="/sites/default/files/public/catalog.svg" style="height:90px; width:90px" /></div>

<div class="step-title">
<h3>Step 1</h3>
</div>

<div class="step-description">
<p>Check the catalogue and<br />
choose the products you need</p>
</div>
</div>

<div class="step step-2">
<div class="step-img"><img alt="" src="/sites/default/files/public/list.svg" style="height:90px; width:90px" /></div>

<div class="step-title">
<h3>Step 2</h3>
</div>

<div class="step-description">
<p>Place the order and let us<br />
know your delivery address</p>
</div>
</div>

<div class="step step-3">
<div class="step-img"><img alt="" src="/sites/default/files/public/user.svg" style="height:90px; width:90px" /></div>

<div class="step-title">
<h3>Step 3</h3>
</div>

<div class="step-description">
<p>Give our manager the details<br />
in the phone call</p>
</div>
</div>

<div class="step step-4">
<div class="step-img"><img alt="" src="/sites/default/files/public/clock.svg" style="height:90px; width:90pxx" /></div>

<div class="step-title">
<h3>Step 4</h3>
</div>

<div class="step-description">
<p>Get your order in 40 minutes</p>
</div>
</div>
</div>

<div class="button"><a class="button button-border-green" href="/catalog">go to the catalog</a></div>
';

  $export['how_it_works_steps'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for New products page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'new_products_banner';
  $fe_block_boxes->body = '<div class="banner">
<img alt="" src="/sites/default/files/public/products-banner.jpg" />
<h3>New Products</h3>
</div>

';

  $export['new_products_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for Sale page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sale_banner';
  $fe_block_boxes->body = '<div class="banner">
<img alt="" src="/sites/default/files/public/products-banner.jpg" />
<h3>Sale</h3>
</div>

';

  $export['sale_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner of "Culinary day"';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sidebar_banner';
  $fe_block_boxes->body = '<div class="best-deals-banners__content">
<div class="best-deals-banners__img"><a href="https://www.hochschober.com/en/culinary/the-culinary-day/" target="_blank"><img alt="" src="/sites/default/files/public/sidebar_banner.jpg" /></a></div>
<div class="best-deals-banners__description">
<h3 class="best-deals-banners__title"><a href="https://www.hochschober.com/en/culinary/the-culinary-day/" target="_blank">Culinary day</a></h3>
<p class="best-deals-banners__text"><a href="https://www.hochschober.com/en/culinary/the-culinary-day/" target="_blank">Central Park<br />
<strong>28th August at 3:00</strong></a></p>
</div>
</div>';

  $export['sidebar_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner of "Culinary day" in mobile';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sidebar_banner_tablet';
  $fe_block_boxes->body = '<div class="best-deals-banners__content">
<div class="best-deals-banners__img"><a href="https://www.hochschober.com/en/culinary/the-culinary-day/" target="_blank"><img alt="" src="/sites/default/files/public/sidebar-banner-tablet.jpg" /></a></div>

<div class="best-deals-banners__description">
<h3 class="best-deals-banners__title"><a href="https://www.hochschober.com/en/culinary/the-culinary-day/" target="_blank">Culinary day</a></h3>

<p class="best-deals-banners__text"><a href="https://www.hochschober.com/en/culinary/the-culinary-day/" target="_blank">Central Park<br />
<strong>28th August at 3:00</strong></a></p>
</div>
</div>
';

  $export['sidebar_banner_tablet'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shopping cart footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sopping_cart_footer';
  $fe_block_boxes->body = '<div class="services">
<div class="call_services"><img alt="" src="/sites/default/files/public/cart-phone.png" />
<p>Call customer services<br />
on 0800 321 4568</p>
</div>
<div class="free_delivery"><img alt="" src="/sites/default/files/public/cart-clock.png" />
<p>Free delivery within 40<br />
minutes to your home</p>
</div>
<div class="button_back_to_shopping">
<form action="/catalog"><button class="button button-border-gray" type="submit">Back to shopping</button></form>
</div>
<div class="button_next_to_checkout">
<form action="/checkout"><button class="button button-fill-green" type="submit">Checkout now</button></form>
</div>
</div>
';

  $export['sopping_cart_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Steps of Checkout';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'steps_of_checkout';
  $fe_block_boxes->body  ='<div class="steps-of-checkout">
<div class="step step-1"><span class="step__number">1</span><span class="step__name">billing</span></div>
<div class="step step-2"><span class="step__number">2</span><span class="step__name">shipping</span></div>
<div class="step step-3"><span class="step__number">3</span><span class="step__name">payment</span></div>
</div>
';
  $export['steps_of_checkout'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Banner for Typography page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_banner';
  $fe_block_boxes->body = '<div class=\'banner\'>
<img alt="" src="/sites/default/files/public/typography-banner.jpg" />
<h3>Typography</h3>
</div>
';

  $export['typography_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Typography: Blockquote example';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_blockquote';
  $fe_block_boxes->body = '<h1>Blockquote</h1>

<div class="blockquote">
<p>These cases are perfectly simple and easy to distinguish. In a free hour, when our power of choice is untrammelled and when nothing prevents our being able to do what we like best, every pleasure is to be welcomed and every pain avoided. But in certain circumstances and owing to the claims of obligations.</p>
<div class=\'author-info\'>
<span class=\'name\'>Nicolas Flamel</span>
<span class=\'additional-info\'>Philosopher</span>
</div>
</div>
';

  $export['typography_blockquote'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Typography: Breadcrumbs example';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_breadcrumbs';
  $fe_block_boxes->body = '<h1>Breadcrumbs</h1>

<div class="breadcrumb contextual-links-region"><span class="inline odd first"><a href="/">Home</a></span> <span class="delimiter">/</span> <span class="inline even last"><a href="/typography">Typography</a></span></div>

<div class="breadcrumb contextual-links-region"><span class="inline odd first"><a href="/">Home</a></span> <span class="delimiter">/</span> <span class="inline even last"><a href="/catalog">Categories</a></span> <span class="delimiter">/</span> <span class="inline even last"><a href="/catalog/fruits">Fruits</a></span></div>
';

  $export['typography_breadcrumbs'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Typography: Buttons example';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_buttons';
  $fe_block_boxes->body = '<h1>Buttons</h1>

<div class="buttons-area">
<table>
	<tbody>
		<tr>
			<td><a class="button button-border-green" href="#">Checkout</a></td>
			<td><a class="button button-border-gray" href="#">Subscribe</a></td>
			<td><a class="button button-fill-green" href="#">Checkout</a></td>
			<td><a class="button button-fill-gray" href="#">Subscribe</a></td>
		</tr>
	</tbody>
</table>
</div>
';

  $export['typography_buttons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'H1 Heading';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_h1';
  $fe_block_boxes->body = '<h1>H1 Heading</h1>

<p class=\'order-information\'>Your order is formed. Soon you will contact our operator for further details.</p>

<p>If you haven’t read the book, you’ll almost certainly have seen Peter Jackson’s epic three-part movie adaptation of it. As you’ll soon find out, that’s a highly simplified plot summary!</p>
';

  $export['typography_h1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'H2 Heading';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_h2';
  $fe_block_boxes->body = '<h2>H2 Heading</h2>

<p>Your order is formed. Soon you will contact our operator for further details.</p>

<p>If you haven’t read the book, you’ll almost certainly have seen Peter Jackson’s epic three-part movie adaptation of it. As you’ll soon find out, that’s a highly simplified plot summary!</p>
';

  $export['typography_h2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'H3 Heading';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_h3';
  $fe_block_boxes->body = '<h3>H3 Heading</h3>

<p>Your order is formed. Soon you will contact our operator for further details.</p>

<p>If you haven’t read the book, you’ll almost certainly have seen Peter Jackson’s epic three-part movie adaptation of it. As you’ll soon find out, that’s a highly simplified plot summary!</p>
';

  $export['typography_h3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Typography: Highlights example';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_highlights';
  $fe_block_boxes->body = '<h1>Highlights</h1>

<p>These cases are perfectly simple a<span class="highlights">nd easy to d</span>istinguish. In a free hour, when our power of choice is untrammelled and when nothing prevents our being able to do what we like best, every pleasure is to be welcomed and every pain avoided.</p>
';

  $export['typography_highlights'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Typography: Lists';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_lists';
  $fe_block_boxes->body = '<h1>Lists</h1>

<ol>
	<li><a href="#">Vegetables</a></li>
	<li><a href="#">Fruits</a></li>
	<li><a href="#">Berries</a></li>
	<li><a href="#">Mashrooms</a></li>
	<li><a href="#">Nuts</a></li>
	<li><a href="#">Species</a></li>
</ol>

<ul>
	<li><a href="#">Vegetables</a></li>
	<li><a href="#">Fruits</a></li>
	<li><a href="#">Berries</a></li>
	<li><a href="#">Mashrooms</a></li>
	<li><a href="#">Nuts</a></li>
	<li><a href="#">Species</a></li>
</ul>
';

  $export['typography_lists'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Typography: Tables example';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'typography_tables';
  $fe_block_boxes->body = '<h1>Tables</h1>

<table class="zebra">
	<thead>
		<tr class="odd">
			<th>First name</th>
			<th>Last name</th>
			<th>User name</th>
			<th>Telephone</th>
		</tr>
	</thead>
	<tbody>
		<tr class="even">
			<td>Alina</td>
			<td>Olive</td>
			<td>@alineolive</td>
			<td>7-960-584-6369</td>
		</tr>
		<tr class="odd">
			<td>Jack</td>
			<td>Smith</td>
			<td>@jacksmith</td>
			<td>7-850-652-4998</td>
		</tr>
		<tr class="even">
			<td>Polly</td>
			<td>Nirvana</td>
			<td>@pollynirvana</td>
			<td>7-908-107-8885</td>
		</tr>
		<tr class="odd">
			<td>Matt</td>
			<td>Dillon</td>
			<td>@mattdillon</td>
			<td>7-658-789-6336</td>
		</tr>
	</tbody>
</table>

<table class="row-border">
	<thead>
		<tr class="odd">
			<th>First name</th>
			<th>Last name</th>
			<th>User name</th>
			<th>Telephone</th>
		</tr>
	</thead>
	<tbody>
		<tr class="even">
			<td>Alina</td>
			<td>Olive</td>
			<td>@alineolive</td>
			<td>7-960-584-6369</td>
		</tr>
		<tr class="odd">
			<td>Jack</td>
			<td>Smith</td>
			<td>@jacksmith</td>
			<td>7-850-652-4998</td>
		</tr>
		<tr class="even">
			<td>Polly</td>
			<td>Nirvana</td>
			<td>@pollynirvana</td>
			<td>7-908-107-8885</td>
		</tr>
		<tr class="odd">
			<td>Matt</td>
			<td>Dillon</td>
			<td>@mattdillon</td>
			<td>7-658-789-6336</td>
		</tr>
	</tbody>
</table>
';

  $export['typography_tables'] = $fe_block_boxes;

  return $export;
}
