#include "Monster.h"
#include <random>
#include <chrono>
#include <array>
#include <algorithm>

Monster::Monster() {
  direction = choose_direction();
}

Monster::~Monster() {
}

int Monster::choose_direction() {
  std::array<int, 10> possible_directions = { 1, 2, 3, 4 };
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::shuffle(possible_directions.begin(), possible_directions.end(),
      std::default_random_engine(seed));
  return possible_directions[0];;
}

void Monster::move() {
  if (direction == 1) {
    if (coordinate_y < map.map_vector.size() * 72) {
      coordinate_y += 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_y -= 72;
      }
    }
  }
  if (direction == 2) {
    if (coordinate_x > 0) {
      coordinate_x -= 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_x += 72;
      }
    }
  }
  if (direction == 3) {
    if (coordinate_x < map.map_vector.size() * 72) {
      coordinate_x += 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_x -= 72;
      }
    }
  }
  if (direction == 4) {
    if (coordinate_y > 0) {
      coordinate_y -= 72;
      if (map.map_vector[coordinate_y / 72][coordinate_x / 72] == false) {
        coordinate_y += 72;
      }
    }
  }
}

int Monster::get_direction() {
  return direction;
}
