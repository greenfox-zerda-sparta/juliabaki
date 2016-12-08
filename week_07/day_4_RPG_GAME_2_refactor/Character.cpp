#include "Character.h"
#include "Map.h"

Character::Character() {
  character_x = 0;
  character_y = 0;
}

Character::~Character() {
}

void Character::set_map(Map& map) {
  this->map = map;
}

void Character::set_coordinates() {
  this->character_x = (rand() % 9);
  this->character_y = (rand() % 9);
  if(!valid_coordinate()){
    set_coordinates();
  }
}

bool Character::valid_coordinate() {
  bool result = true;
  if (!map.map_vector[character_y][character_x]) {
    result = false;
  }
  return result;
}
