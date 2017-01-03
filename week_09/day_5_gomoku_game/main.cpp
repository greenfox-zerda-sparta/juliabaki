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

  GameContext* gameContext = new GameContext(703, 703);
  myDrawer my_drawer(board->getFieldsVector(), my_game.getStonesVector());
  GameEngine engine(&my_drawer, gameContext);


  while(!my_game.isOver()){
    if(my_drawer.getMouseCoordinte_x() > -1 && my_drawer.getMouseCoordinte_y() > -1){
      my_game.doRound(my_drawer.getMouseCoordinte_x(), my_drawer.getMouseCoordinte_y());
    }
    my_drawer.render(*gameContext);
    engine.run();
    my_drawer.setCoordinates(*gameContext);
  }

  delete board;
  delete player_1;
  delete player_2;
  delete gameContext;

  return 0;
}

#else
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#endif

