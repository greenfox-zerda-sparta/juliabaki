#ifdef _TEST
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "binary_search.h"

TEST_CASE("Vector has the number") {
  std::vector<int> test_input;
  for (int i = 0; i < 10; i++) {
    test_input.push_back(i);
  }
  REQUIRE(binary_search(test_input, 3) == true);
}

TEST_CASE("Vector not has the number (101)") {
  std::vector<int> test_input;
  for (int i = 0; i < 10; i++) {
    test_input.push_back(i);
  }
  REQUIRE(binary_search(test_input, 101) == false);
}

TEST_CASE("Vector not has the number (-1)") {
  std::vector<int> test_input;
  for (int i = 0; i < 10; i++) {
    test_input.push_back(i);
  }
  REQUIRE(binary_search(test_input, -1) == false);
}

#endif