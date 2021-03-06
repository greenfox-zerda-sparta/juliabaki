#include "game-engine.hpp"
#include "MyGame.h"
#include <time.h>


int main(int argc, char *argv[]) {
  srand (time(NULL));
  MyGame game;
  GameEngine engine(&game, 720, 720);
  engine.run();
  return 0;
}
