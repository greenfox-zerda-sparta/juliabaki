#ifndef MAP_H_
#define MAP_H_

#include <vector>

class Map {
private:
  std::vector<std::vector<bool>> map_vector;
public:
  Map();
  ~Map();
};

#endif /* MAP_H_ */
