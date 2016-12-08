
#include "Skeleton.h"
#include <iostream>

Skeleton::Skeleton(Map& map) {
  this->map = map;
  this->skeleton_x = (rand() % 9 )* 72;
  this->skeleton_y = (rand() % 9 )* 72;
}

Skeleton::~Skeleton() {
}

void Skeleton::draw(GameContext& context){
  context.draw_sprite("skeleton.bmp", skeleton_x, skeleton_y);
}

void Skeleton::move(GameContext&){}
