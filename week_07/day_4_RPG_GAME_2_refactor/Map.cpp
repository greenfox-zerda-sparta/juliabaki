#include "Map.h"
#include <fstream>
#include <iostream>

Map::Map() {
  map_vector = std::vector<std::vector<bool>>(10, std::vector<bool>(10));
  load_map_from_file_to_vector();
}

Map::~Map() {
}

void Map::load_map_from_file_to_vector() {
  std::ifstream input;
  input.open("good_map.txt");
  char temp;
  if (input.is_open()) {
    for (unsigned int k = 0; k < 10; k++) {
      for (int h = 0; h < 10; h++) {
        input >> temp;
        if (temp == '0') {
          map_vector[k][h] = false;
        } else if (temp == '1') {
          map_vector[k][h] = true;
        }
      }
    }
  }
  input.close();
}

void Map::draw_map(GameContext& context) {
  load_map_from_file_to_vector();
  for (unsigned int i = 0; i < 10; i++) {
    for (unsigned int j = 0; j < 10; j++) {
      if (map_vector[i][j] == false) {
        context.draw_sprite("wall.bmp", j * 72, i * 72);
      } else if (map_vector[i][j] == true) {
        context.draw_sprite("floor.bmp", j * 72, i * 72);
      }
    }
  }
}
