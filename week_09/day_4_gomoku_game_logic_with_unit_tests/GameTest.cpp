#ifdef GAMETEST
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Game.h"

TEST_CASE("Game init") {
  Board* board = new Board(19, 19);
  Player* player_1 = new Player;
  Player* player_2 = new Player;
  Game game(board, player_1, player_2);
  REQUIRE(game.getBoard()->getLogicalHeight() == 19);
  delete player_1;
  delete player_2;
  delete board;
}

TEST_CASE("Game getActualPlayer()") {
  Board* board = new Board(19, 19);
  Player* player_1 = new Player;
  Player* player_2 = new Player;
  Game game(board, player_1, player_2);
  REQUIRE(game.getActualPlayer()->placeStone(3, 4)->getCoordinate_x() == 3);
  delete player_1;
  delete player_2;
  delete board;
}

TEST_CASE("Game isOver is false") {
  Board* board = new Board(19, 19);
  Player* player_1 = new Player;
  Player* player_2 = new Player;
  Game game(board, player_1, player_2);
  REQUIRE(!game.isOver());
  delete player_1;
  delete player_2;
  delete board;
}

TEST_CASE("Game doRound() with switchPlayer()") {
  Board* board = new Board(19, 19);
  board->fillUpFields();
  Player* player_1 = new Player;
  Player* player_2 = new Player;
  Game game(board, player_1, player_2);
  game.doRound(3, 4);
  REQUIRE(game.getActualPlayerIndex() == 1);
  delete player_1;
  delete player_2;
  delete board;
}

TEST_CASE("Game doRound() with field reserved") {
  Board* board = new Board(19, 19);
  board->fillUpFields();
  Player* player_1 = new Player;
  Player* player_2 = new Player;
  Game game(board, player_1, player_2);
  game.doRound(3, 4);
  REQUIRE(game.getBoard()->fields.size() == 19);
  delete player_1;
  delete player_2;
  delete board;
}

#endif
