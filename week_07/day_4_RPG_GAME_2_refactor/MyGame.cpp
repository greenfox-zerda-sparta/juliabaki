#include "MyGame.h"
#include "Character.h"

MyGame::MyGame() {
  this->map = new Map;
  this->hero_count = 1;
  this->skeleton_count = 3;
  this->boss_count = 1;
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
  hero_factory();
  skeleton_factory();
  boss_factory();
}

void MyGame::hero_factory() {
  for (int i = 0; i < hero_count; i++) {
    Hero* hero = new Hero();
    hero->set_map(*map);
    this->characters.push_back(hero);
  }
}

void MyGame::skeleton_factory() {
  for (int i = 0; i < skeleton_count; i++) {
    Skeleton* skeleton = new Skeleton();
    skeleton->set_map(*map);
    this->characters.push_back(skeleton);
  }
}

void MyGame::boss_factory() {
  for (int i = 0; i < boss_count; i++) {
    Boss* boss = new Boss();
    boss->set_map(*map);
    this->characters.push_back(boss);
  }
}

void MyGame::draw_characters(GameContext& context) {
  for (unsigned int i = characters.size() ; i > 0 ; --i) {
    characters[i-1]->draw(context);
  }
}

void MyGame::render(GameContext& context) {
  map->draw_map(context);
  draw_characters(context);
  context.render();
}

