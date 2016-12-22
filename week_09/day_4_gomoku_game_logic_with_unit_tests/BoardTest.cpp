#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Board.h"

TEST_CASE("Board has an empty Field vector") {
  Board board(19, 19);
  REQUIRE(board.fieldRows.size() == 0);
}

TEST_CASE("Board getlogicalWidth() and getlogicalHeight() is 19"){
  Board board(19, 19);
  REQUIRE(board.getLogicalWidth() == 19);
  REQUIRE(board.getLogicalHeight() == 19);
}

TEST_CASE("Board's Field vector size = getLogicalWidth"){
  Board board(19, 19);
  board.fillUpFieldRows();
  REQUIRE(board.getLogicalWidth() == board.fieldRows.size());
}

TEST_CASE("Board's Field vector one element size = getLogicalHeight"){
  Board board(19, 19);
  board.fillUpFieldColumns();
  REQUIRE(board.getLogicalHeight() == board.fieldColumns.size());
}
