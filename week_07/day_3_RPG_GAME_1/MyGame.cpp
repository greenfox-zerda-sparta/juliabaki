#include "MyGame.h"

void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
}

void MyGame::render(GameContext& context) {
  int x = 0;
  int y = 0;
  for (int column = 0; column < 10; column++) {
    context.draw_sprite("floor.bmp", x, y);
    for (int row = 0; row < 10; row++) {
      context.draw_sprite("floor.bmp", x, y);
      x += 72;
    }
    x = 0;
    y += 72;
  }
  context.render();
}

MyGame::~MyGame() {
}
