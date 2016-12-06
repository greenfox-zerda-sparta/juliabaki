#include "game-engine.hpp"
#include "MyGame.h"

int main(int argc, char *argv[]) {
  MyGame game;
  GameEngine engine(&game, 400, 300);
  engine.run();
  return 0;
}
