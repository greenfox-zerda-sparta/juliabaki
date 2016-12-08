#include "Skeleton.h"

Skeleton::Skeleton() {
  set_coordinates();
}

Skeleton::~Skeleton() {
}

void Skeleton::draw(GameContext& context) {
  context.draw_sprite("skeleton.bmp", coordinate_x * 72, coordinate_y * 72);
}

void Skeleton::move(GameContext&) {
}
