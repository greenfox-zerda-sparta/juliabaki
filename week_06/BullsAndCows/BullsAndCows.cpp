#include <iostream>
#include "Game.h"

using namespace std;

int main(){
  Game game(3);
  while(!game.isOver()){
    game.doRound();
  }

  return 0;
}
