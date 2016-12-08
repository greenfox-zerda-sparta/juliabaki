#include "Hero.h"

Hero::Hero() {
  this->max_health_point = 20 + 3 * (rand() % 6);
  this->current_health_point = max_health_point;
  this->defend_point = 2 * (rand() % 6);
  this->strike_point = 5 + (rand() % 6);

  this->coordinate_x = 0;
  this->coordinate_y = 0;
  this->hero_x_max = 648;
  this->hero_y_max = 648;
  this->hero_x_min = 0;
  this->hero_y_min = 0;
  this->hero_status = "hero-down.bmp";

  this->move_counter = 0;
}

Hero::~Hero() {
}

int Hero::get_move_counter(){
  return move_counter;
}

void Hero::draw(GameContext& context) {
  move(context);
  context.draw_sprite(hero_status, coordinate_x, coordinate_y);
}

void Hero::move(GameContext& context) {
  if (context.was_key_pressed(ARROW_DOWN)) {
    if (coordinate_y < hero_y_max) {
      coordinate_y += 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_y -= 72;
      }
      move_counter++;
    }
    hero_status = "hero-down.bmp";
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    if (coordinate_x > hero_x_min) {
      coordinate_x -= 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_x += 72;
      }
      move_counter++;
    }
    hero_status = "hero-left.bmp";
  }
  if (context.was_key_pressed(ARROW_RIGHT)) {
    if (coordinate_x < hero_x_max) {
      coordinate_x += 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_x -= 72;
      }
      move_counter++;
    }
    hero_status = "hero-right.bmp";
  }
  if (context.was_key_pressed(ARROW_UP)) {
    if (coordinate_y > hero_y_min) {
      coordinate_y -= 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_y += 72;
      }
      move_counter++;
    }
    hero_status = "hero-up.bmp";
  }
}
