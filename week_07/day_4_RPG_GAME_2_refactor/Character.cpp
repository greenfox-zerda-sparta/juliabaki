#include "Character.h"
#include "Map.h"

Character::Character() {
}

Character::~Character() {
}

void Character::set_map(Map& map) {
  this->map = map;
}
