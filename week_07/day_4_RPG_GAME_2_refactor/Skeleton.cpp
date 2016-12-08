#include "Skeleton.h"

Skeleton::Skeleton() {
  set_coordinates();
}

Skeleton::~Skeleton() {
}

void Skeleton::draw(GameContext& context) {
  context.draw_sprite("skeleton.bmp", character_x * 72, character_y * 72);
}

void Skeleton::move(GameContext&) {
}

void Skeleton::set_coordinates() {
  this->character_x = (rand() % 9);
  this->character_y = (rand() % 9);
  if(!Character::valid_coordinate()){
    set_coordinates();
  }
}
