#ifndef MAP_H_
#define MAP_H_

#include <vector>
#include "game-engine.hpp"

class Map {
public:
  std::vector<std::vector <bool>> map_vector;
  Map();
  ~Map();
  void load_map_from_file_to_vector();
  void draw_map(GameContext& context);
};

#endif /* MAP_H_ */
