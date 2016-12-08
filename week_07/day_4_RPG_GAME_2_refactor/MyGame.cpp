#include "MyGame.h"
#include <fstream>
#include <string>
#include <iostream>

MyGame::MyGame() {
  this->map = new Map;
  this->hero_count = 1;
  this->skeleton_count = 3;
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
  Hero* hero = new Hero();
  hero->set_map(*map);
  this->characters.push_back(hero);

  skeleton_factory();
}

void MyGame::render(GameContext& context) {
  map->draw_map(context);
  draw_characters(context);
  context.draw_sprite("boss.bmp", 648, 648);
  context.render();
}

void MyGame::draw_characters(GameContext& context) {
  for (unsigned int i = characters.size() ; i > 0 ; --i) {
    characters[i-1]->draw(context);
  }
}

void MyGame::skeleton_factory() {
  for (int i = 0; i < skeleton_count; i++) {
    Skeleton* skeleton = new Skeleton();
    skeleton->set_map(*map);
    this->characters.push_back(skeleton);
  }
}
