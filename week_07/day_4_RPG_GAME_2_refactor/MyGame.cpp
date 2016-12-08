#include "MyGame.h"
#include <fstream>
#include <string>
#include <iostream>

MyGame::MyGame() {
  load_characters();
}

MyGame::~MyGame() {
  for (unsigned int i = 0; i < characters.size(); i++) {
    delete characters[i];
  }

  delete map;
}

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

void MyGame::load_characters() {
  hero = new Hero;
  this->characters.push_back(hero);

  map = new Map;
}

void MyGame::render(GameContext& context) {
  map->draw_map(context);

  context.draw_sprite("skeleton.bmp", 0, 72);
  context.draw_sprite("skeleton.bmp", 216, 72);
  context.draw_sprite("skeleton.bmp", 648, 216);
  context.draw_sprite("boss.bmp", 648, 648);

  hero->draw(context);

  context.render();
}

