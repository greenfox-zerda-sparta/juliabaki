#ifndef MAP_H_
#define MAP_H_

#include <vector>

class Map {
public:
  std::vector<std::vector<bool>> map_vector;
  Map(int size);
  ~Map();
};

#endif /* MAP_H_ */
