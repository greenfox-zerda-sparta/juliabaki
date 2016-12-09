#include "Character.h"
#include "Map.h"

Character::Character() {
  coordinate_x = 0;
  coordinate_y = 0;
}

Character::~Character() {
}

void Character::set_map(Map& map) {
  this->map = map;
}

void Character::set_coordinates() {
  this->coordinate_x = rand() % 9 + 1;
  this->coordinate_y = rand() % 9 + 1;
  if(!valid_coordinate()){
    set_coordinates();
  }
}

int Character::get_coordinate_x(){
  return coordinate_x;
}

int Character::get_coordinate_y(){
  return coordinate_y;
}

bool Character::valid_coordinate() {
  return map.map_vector[coordinate_y][coordinate_x];
}
