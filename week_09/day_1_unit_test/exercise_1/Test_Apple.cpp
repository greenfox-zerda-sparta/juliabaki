#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Apple.h"

TEST_CASE("Apple get_apple()") {
  Apple apple;
  REQUIRE(apple.get_apple() == "apple");
}
