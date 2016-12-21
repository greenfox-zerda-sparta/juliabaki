#include "Map.h"

Map::Map() {
  map_vector = std::vector<std::vector<bool>>(19, std::vector<bool>(19));
}

Map::~Map() {}

