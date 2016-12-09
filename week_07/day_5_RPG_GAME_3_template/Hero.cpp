#include "Hero.h"
#include <iostream>

Hero::Hero() {
  this->coordinate_x = 0;
  this->coordinate_y = 0;
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
  context.draw_sprite(hero_status, coordinate_x, coordinate_y);
}

bool Hero::is_it_floor(){
  return map.map_vector[coordinate_y / IMAGE_SIZE][coordinate_x / IMAGE_SIZE];
}

void Hero::move(GameContext& context) {
  if (context.was_key_pressed(ARROW_DOWN)) {
    if (coordinate_y < hero_y_max) {
      coordinate_y += IMAGE_SIZE;
      if (!is_it_floor()) {
        coordinate_y -= IMAGE_SIZE;
      }
    }
    hero_status = "hero-down.bmp";
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    if (coordinate_x > hero_x_min) {
      coordinate_x -= IMAGE_SIZE;
      if (!is_it_floor()) {
        coordinate_x += IMAGE_SIZE;
      }
    }
    hero_status = "hero-left.bmp";
  }
  if (context.was_key_pressed(ARROW_RIGHT)) {
    if (coordinate_x < hero_x_max) {
      coordinate_x += IMAGE_SIZE;
      if (!is_it_floor()) {
        coordinate_x -= IMAGE_SIZE;
      }
    }
    hero_status = "hero-right.bmp";
  }
  if (context.was_key_pressed(ARROW_UP)) {
    if (coordinate_y > hero_y_min) {
      coordinate_y -= IMAGE_SIZE;
      if (!is_it_floor()) {
        coordinate_y += IMAGE_SIZE;
      }
    }
    hero_status = "hero-up.bmp";
  }
}
