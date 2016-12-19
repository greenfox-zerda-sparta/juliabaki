#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fibonacci.h"

TEST_CASE("Fibonacci: get_fibonacci_by_index()"){
  Fibonacci fibonacci;
  REQUIRE(fibonacci.get_fibonacci_by_index(4) == 3);
}

TEST_CASE("Fibonacci: get_fibonacci_by_index()" "Index 0"){
  Fibonacci fibonacci;
  REQUIRE(fibonacci.get_fibonacci_by_index(0) == 0);
}

TEST_CASE("Fibonacci: get_fibonacci_by_index()" "Index -1"){
  Fibonacci fibonacci;
  REQUIRE_THROWS(fibonacci.get_fibonacci_by_index(-1));
}

TEST_CASE("Fibonacci: get_fibonacci_by_index()" "Index -1 exception"){
  Fibonacci fibonacci;
 // REQUIRE_THROWS_AS(fibonacci.get_fibonacci_by_index(-1) , const char*);
  REQUIRE_THROWS_WITH(fibonacci.get_fibonacci_by_index(-1), "wrong index");
}

