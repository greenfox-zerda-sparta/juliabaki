#include "Hero.h"

Hero::Hero() {
  this->hero_x = 0;
  this->hero_y = 0;
  this->hero_x_max = 648;
  this->hero_y_max = 648;
  this->hero_x_min = 0;
  this->hero_y_min = 0;
}

Hero::~Hero() {
}

void Hero::draw(GameContext& context) {
  move(context);
  context.draw_sprite(hero_status, hero_x, hero_y);
}

void Hero::move(GameContext& context) {
  if (context.was_key_pressed(ARROW_DOWN)) {
    if (hero_y < hero_y_max) {
      hero_y += 72;
      if (map.map_vector[hero_y / 72][hero_x / 72] == false) {
        hero_y -= 72;
      }
    }
    hero_status = "hero-down.bmp";
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    if (hero_x > hero_x_min) {
      hero_x -= 72;
      if (map.map_vector[hero_y / 72][hero_x / 72] == false) {
        hero_x += 72;
      }
    }
    hero_status = "hero-left.bmp";
  }
  if (context.was_key_pressed(ARROW_RIGHT)) {
    if (hero_x < hero_x_max) {
      hero_x += 72;
      if (map.map_vector[hero_y / 72][hero_x / 72] == false) {
        hero_x -= 72;
      }
    }
    hero_status = "hero-right.bmp";
  }
  if (context.was_key_pressed(ARROW_UP)) {
    if (hero_y > hero_y_min) {
      hero_y -= 72;
      if (map.map_vector[hero_y / 72][hero_x / 72] == false) {
        hero_y += 72;
      }
    }
    hero_status = "hero-up.bmp";
  }
}

