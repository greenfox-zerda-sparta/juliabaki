#include "Hero.h"

Hero::Hero() {
  this->character_x = 0;
  this->character_y = 0;
  this->hero_x_max = 648;
  this->hero_y_max = 648;
  this->hero_x_min = 0;
  this->hero_y_min = 0;
  this->hero_status = "hero-down.bmp";
}

Hero::~Hero() {
}

void Hero::draw(GameContext& context) {
  move(context);
  context.draw_sprite(hero_status, character_x, character_y);
}

void Hero::move(GameContext& context) {
  if (context.was_key_pressed(ARROW_DOWN)) {
    if (character_y < hero_y_max) {
      character_y += 72;
      if (map.map_vector[character_y / 72][character_x / 72] == false) {
        character_y -= 72;
      }
    }
    hero_status = "hero-down.bmp";
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    if (character_x > hero_x_min) {
      character_x -= 72;
      if (map.map_vector[character_y / 72][character_x / 72] == false) {
        character_x += 72;
      }
    }
    hero_status = "hero-left.bmp";
  }
  if (context.was_key_pressed(ARROW_RIGHT)) {
    if (character_x < hero_x_max) {
      character_x += 72;
      if (map.map_vector[character_y / 72][character_x / 72] == false) {
        character_x -= 72;
      }
    }
    hero_status = "hero-right.bmp";
  }
  if (context.was_key_pressed(ARROW_UP)) {
    if (character_y > hero_y_min) {
      character_y -= 72;
      if (map.map_vector[character_y / 72][character_x / 72] == false) {
        character_y += 72;
      }
    }
    hero_status = "hero-up.bmp";
  }
}

