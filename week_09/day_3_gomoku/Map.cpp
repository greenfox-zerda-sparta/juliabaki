#include "Map.h"

Map::Map(int size) {
  map_vector = std::vector<std::vector<bool>>(size, std::vector<bool>(size));
}

Map::~Map() {}

