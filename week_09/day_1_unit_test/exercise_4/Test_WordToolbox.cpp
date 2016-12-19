#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "WordToolbox.h"

#include <algorithm>

TEST_CASE("WordToolbox countHowMany()" "Check 'a'"){
  WordToolbox source("Tarzan's toenails");
  REQUIRE(source.countHowMany('a') == 3);
}

TEST_CASE("WordToolbox countHowMany()" "With uppercase"){
  WordToolbox source("Tarzan's toenails");
  REQUIRE(source.countHowMany('T') == 2);
}

TEST_CASE("WordToolbox countHowMany()" "With lowercase"){
  WordToolbox source("Tarzan's toenails");
  REQUIRE(source.countHowMany('t') == 2);
}

TEST_CASE("WordToolbox countHowMany()" "no find"){
  WordToolbox source("Tarzan's toenails");
  REQUIRE(source.countHowMany('x') == 0);
}

TEST_CASE("WordToolbox countHowMany()" "check space"){
  WordToolbox source("Tarzan's toenails");
  REQUIRE(source.countHowMany(' ') == 1);
}

TEST_CASE("WordToolbox countHowMany()" "check bela"){
  WordToolbox source("bela");
  REQUIRE(source.countHowMany('b') == 1);
}

TEST_CASE("WordToolbox isAnAnagram()" "check-input same"){
  WordToolbox source("Tarzan's toenails");
  REQUIRE(source.isAnAnagram("Tarzan's toenails") == true);
}

TEST_CASE("WordToolbox isAnAnagram()" "check-input Tarzan's different"){
  WordToolbox source("Tarzan's toenails");
  REQUIRE(source.isAnAnagram("something else") == false);
}
