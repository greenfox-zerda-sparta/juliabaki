
#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "game-engine.hpp"
#include <vector>
#include "Map.h"

class Character {
protected:
  int coordinate_x;
  int coordinate_y;
  Map map;
  virtual void move(GameContext&) = 0;
public:
  Character();
  virtual ~Character();

  int get_coordinate_x();
  int get_coordinate_y();

  void set_map(Map& map);

  bool valid_coordinate();
  void set_coordinates();

  virtual void draw(GameContext& context) = 0;
};

#endif /* CHARACTER_H_ */
