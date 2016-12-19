#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "MyClass.h"

TEST_CASE("MyClass get_sum_of_vector_elements()"){
  MyClass my_class;
  std::vector<int> vector (1, 5);
  REQUIRE( my_class.get_sum_of_vector_elements(vector) == 5 );
}

TEST_CASE("MyClass get_sum_of_vector_elements()" "Empty List"){
  MyClass my_class;
  std::vector<int> vector;
  REQUIRE( my_class.get_sum_of_vector_elements(vector) == 0 );
}

TEST_CASE("MyClass get_sum_of_vector_elements()" "One Element"){
  MyClass my_class;
  std::vector<int> vector (1, 1);
  REQUIRE( my_class.get_sum_of_vector_elements(vector) == 1 );
}

TEST_CASE("MyClass get_sum_of_vector_elements()" "Multiple elements"){
  MyClass my_class;
  std::vector<int> vector (1, 1);
  vector.push_back(3);
  vector.push_back(4);
  REQUIRE( my_class.get_sum_of_vector_elements(vector) == 8 );
}

