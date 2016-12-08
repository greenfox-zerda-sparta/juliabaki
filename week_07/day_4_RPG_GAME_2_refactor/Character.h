
#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "game-engine.hpp"
#include <vector>

class Character {
public:
  Character();
  virtual ~Character();
  virtual void draw(GameContext& context) = 0;
  virtual void move(GameContext&) = 0;
};

#endif /* CHARACTER_H_ */
