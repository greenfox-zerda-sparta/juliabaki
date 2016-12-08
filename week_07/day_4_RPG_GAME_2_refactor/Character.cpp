#include "Character.h"

Character::Character() {
}

Character::~Character() {
}

void Character::draw_hero(GameContext& context){
  move_hero(context);
  context.draw_sprite(hero_status, hero_x, hero_y);
}

void Character::move_hero(GameContext& context) {
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
