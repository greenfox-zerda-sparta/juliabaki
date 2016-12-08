#include "Boss.h"

Boss::Boss() {
  Character::set_coordinates();
}

Boss::~Boss() {
}

void Boss::draw(GameContext& context) {
  context.draw_sprite("boss.bmp", character_x * 72, character_y * 72);
}

void Boss::move(GameContext&) {
}

