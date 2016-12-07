#include "MyGame.h"
#include <iostream>

void MyGame::fill_map() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (i % 2 == 0) {
        if (j % 2 == 0) {
          map[i][j] = false;
        } else {
          map[i][j] = true;
        }
      } else {
        if (j % 2 != 0) {
          map[i][j] = false;
        } else {
          map[i][j] = true;
        }
      }
    }
  }
}

void MyGame::print_array() {
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; j++) {
      std::cout << (map[i][j]) << " ";
    }
    std::cout << "\n";
  }
}

void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
}

void MyGame::render(GameContext& context) {
  fill_map();
  print_array();
  std::cout << std::endl;
  int x = 0;
  int y = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (map[i][j] == 1) {
        context.draw_sprite("floor.bmp", x, y);
        x += 72;
      } else {
        context.draw_sprite("wall.bmp", x, y);
        x += 72;
      }
    }
    x = 0;
    y += 72;
  }
  context.render();
}

MyGame::~MyGame() {
}
