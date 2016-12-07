#include "MyGame.h"
#include <fstream>
#include <string>
#include <iostream>

void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-left.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("skeleton.bmp");
  context.load_file("boss.bmp");
}

void MyGame::render(GameContext& context) {
  std::ifstream input;
  input.open("good_map.txt");
  char temp;
  if (input.is_open()) {
    for (unsigned int k = 0; k < 10; k++) {
      for (int h = 0; h < 10; h++) {
        input >> temp;
        if (temp == '0') {
          context.draw_sprite("wall.bmp", h * 72, k * 72);
        } else {
          context.draw_sprite("floor.bmp", h * 72, k * 72);
        }
      }
    }
  }
  context.draw_sprite("skeleton.bmp", 0, 72);
  context.draw_sprite("skeleton.bmp", 216, 72);
  context.draw_sprite("skeleton.bmp", 648, 216);
  context.draw_sprite("boss.bmp", 648, 648);
  move_hero(context);
  context.draw_sprite(hero_status, hero_x, hero_y);
  context.render();
  input.close();
}

void MyGame::move_hero(GameContext& context) {
  if (context.was_key_pressed(ARROW_DOWN)) {
    if (hero_y < hero_y_max) {
      hero_y += 72;
    }
    hero_status = "hero-down.bmp";
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    if (hero_x > hero_x_min) {
      hero_x -= 72;
    }
    hero_status = "hero-left.bmp";
  }
  if (context.was_key_pressed(ARROW_RIGHT)) {
    if (hero_x < hero_x_max) {
      hero_x += 72;
    }
    hero_status = "hero-right.bmp";
  }
  if (context.was_key_pressed(ARROW_UP)) {
    if (hero_y > hero_y_min) {
      hero_y -= 72;
    }
    hero_status = "hero-up.bmp";
  }
}

MyGame::~MyGame() {
}
