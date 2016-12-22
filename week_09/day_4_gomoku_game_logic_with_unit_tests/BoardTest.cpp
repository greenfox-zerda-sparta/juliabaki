#ifdef BOARDTEST
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Board.h"

TEST_CASE("Board has an empty Field vector") {
  Board board(19, 19);
  REQUIRE(board.fields.size() == 0);
}

TEST_CASE("Board getlogicalWidth() and getlogicalHeight() is 19"){
  Board board(19, 19);
  REQUIRE(board.getLogicalWidth() == 19);
  REQUIRE(board.getLogicalHeight() == 19);
}


TEST_CASE("Board's Field vector size = getLogicalWidth"){
  Board* board = new Board(19, 19);
  board->fillUpFields();
  REQUIRE(board->getLogicalWidth() == board->fields.size());
}

TEST_CASE("Field isEmpty in the start"){
  Board board(19, 19);
  board.fillUpFields();
  REQUIRE(board.fields[0][0]->isEmpty());
}

#endif
