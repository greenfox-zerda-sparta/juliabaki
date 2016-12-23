#ifndef TEST

#include "myGame.h"

#include "game-engine.hpp"
#include "myDrawer.h"
#include <vector>

using namespace std;

int main(int argc, char* args[]) {
  Board* board = new Board(19, 19);
  board->fillUpFields();
  Player* player_1 = new Player;
  Player* player_2 = new Player;
  myGame my_game(board, player_1, player_2);

  myDrawer my_drawer(board->getFieldsVector());
  GameEngine engine(&my_drawer, 703, 703);
  engine.run();

  return 0;
}

#else
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#endif

