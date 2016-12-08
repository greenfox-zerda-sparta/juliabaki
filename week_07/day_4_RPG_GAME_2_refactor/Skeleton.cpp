#include "Skeleton.h"
#include <iostream>

Skeleton::Skeleton() {
  set_coordinates();
}

Skeleton::~Skeleton() {
}

void Skeleton::draw(GameContext& context) {
  context.draw_sprite("skeleton.bmp", skeleton_x, skeleton_y);
}

void Skeleton::move(GameContext&) {
}

void Skeleton::set_coordinates() {
  this->skeleton_x = (rand() % 9) * 72;
  this->skeleton_y = (rand() % 9) * 72;
  if(!valid_coordinate()){
    set_coordinates();
  }
}

bool Skeleton::valid_coordinate() {
  bool result = true;
  if (!map.map_vector[skeleton_y / 72][skeleton_x / 72]) {
    result = false;
  }
  return result;
}
