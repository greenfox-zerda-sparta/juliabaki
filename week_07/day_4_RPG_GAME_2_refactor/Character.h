
#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "game-engine.hpp"
#include <vector>
#include "Map.h"

class Character {
protected:
  int character_x;
  int character_y;
  Map map;
  virtual void move(GameContext&) = 0;
public:
  Character();
  virtual ~Character();

  int get_character_x();
  int get_character_y();

  void set_map(Map& map);

  bool valid_coordinate();
  void set_coordinates();

  virtual void draw(GameContext& context) = 0;
};

#endif /* CHARACTER_H_ */
