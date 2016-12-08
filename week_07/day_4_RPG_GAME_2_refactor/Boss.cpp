#include "Boss.h"

Boss::Boss() {
  set_coordinates();
}

Boss::~Boss() {
}

void Boss::draw(GameContext& context) {
  context.draw_sprite("boss.bmp", boss_x, boss_y);
}

void Boss::move(GameContext&) {
}

void Boss::set_coordinates() {
  this->boss_x = (rand() % 9) * 72;
  this->boss_y = (rand() % 9) * 72;
  if(!valid_coordinate()){
    set_coordinates();
  }
}

bool Boss::valid_coordinate() {
  return map.map_vector[boss_y / 72][boss_x / 72];
}
