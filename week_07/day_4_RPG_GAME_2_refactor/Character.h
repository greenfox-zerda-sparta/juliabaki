
#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "game-engine.hpp"
#include <vector>
#include "Map.h"

class Character {
protected:
  Map map;
  virtual void move(GameContext&) = 0;
public:
  Character();
  void set_map(Map& map);
  virtual ~Character();
  virtual void draw(GameContext& context) = 0;
};

#endif /* CHARACTER_H_ */
