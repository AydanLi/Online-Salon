<?php
/**
 * @file
 * content_products.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function content_products_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'tubers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '2cee2bd0-6e24-4606-8c9a-6ab966bca61e',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'berries',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => '6c0b5fdd-708e-4b2e-8c11-4177d8162082',
    'vocabulary_machine_name' => 'products_categories',
  );
  $terms[] = array(
    'name' => 'test',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '73cfa0d3-94b5-496a-8672-918515653840',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'roots',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7b4b0545-54fb-40fa-acfe-b1062740c0dc',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'onion',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '81836aeb-1390-49b9-b1bc-9df0b58ba363',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'nuts',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 15,
    'uuid' => '8963d5ea-33d1-41c6-a5bc-c36a45e398b8',
    'vocabulary_machine_name' => 'products_categories',
  );
  $terms[] = array(
    'name' => 'melons',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8f1d12a1-564a-4f71-9f22-9143412cc409',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'tubers',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9b6e7b1a-995d-4968-a93f-435676cb1b5d',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'spices',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 14,
    'uuid' => '9eebcaca-90ef-4424-9f68-9ed4293fbf6d',
    'vocabulary_machine_name' => 'products_categories',
  );
  $terms[] = array(
    'name' => 'salad',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '9f31fba4-5e0b-462f-8618-90cc7daab276',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'dessert',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9fed20e9-378c-42c7-97d9-a94e0c325d72',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'tropical',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'a7310ce2-d37a-400f-8b93-fb06022ed651',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'e57472bd-a685-46bb-a44f-a71401fbb382',
    ),
  );
  $terms[] = array(
    'name' => 'vegetables',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 18,
    'uuid' => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    'vocabulary_machine_name' => 'products_categories',
  );
  $terms[] = array(
    'name' => 'mushrooms',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 16,
    'uuid' => 'b3dc9889-dccd-46a7-a1cc-cdfc37f476c9',
    'vocabulary_machine_name' => 'products_categories',
  );
  $terms[] = array(
    'name' => 'citrus',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bb0d29d2-623f-4593-af52-8328c50944d9',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'e57472bd-a685-46bb-a44f-a71401fbb382',
    ),
  );
  $terms[] = array(
    'name' => 'vegetables',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c57cc0fd-bb78-4cd2-b268-9a6b87b24e66',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'roots',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'c59889ad-8bcd-41bd-9584-dd4d02f749a9',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'solanaceae',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'd1853a30-4075-4eb8-a12d-128c71f01114',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'rosaceae',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd5273128-4ab0-43b7-b685-4ee7b0802d95',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'cabbage',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'd64d1a43-7bbf-4401-84de-00d19892d38b',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'rosaceae',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'dadfe18b-0f23-4672-bc95-66471a538d06',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'e57472bd-a685-46bb-a44f-a71401fbb382',
    ),
  );
  $terms[] = array(
    'name' => 'legumes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'dccf6c6c-b57c-402f-94f0-f0a6f6808637',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  $terms[] = array(
    'name' => 'fruits',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 17,
    'uuid' => 'e57472bd-a685-46bb-a44f-a71401fbb382',
    'vocabulary_machine_name' => 'products_categories',
  );
  $terms[] = array(
    'name' => 'spicy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'e9112082-fb8f-465f-8764-247870d939ac',
    'vocabulary_machine_name' => 'products_categories',
    'parent' => array(
      0 => 'ade1f377-fe46-4f5b-bdf9-ea5829d39c03',
    ),
  );
  return $terms;
}
