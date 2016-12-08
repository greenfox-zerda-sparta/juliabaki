
#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "game-engine.hpp"
#include <vector>
#include "Map.h"

class Character {
public:
  Map map;
  Character(){};
  Character(Map& map);
  virtual ~Character();
  virtual void draw(GameContext& context) = 0;
  virtual void move(GameContext&) = 0;
};

#endif /* CHARACTER_H_ */
