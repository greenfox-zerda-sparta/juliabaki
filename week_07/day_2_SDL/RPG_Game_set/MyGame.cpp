#include "MyGame.h"

void MyGame::init(GameContext& context) {
  context.load_file("image.bmp");
}
void MyGame::render(GameContext& context) {
  context.draw_sprite("image.bmp", 0, 0);
  context.render();
}

MyGame::~MyGame(){}
