
#ifndef MONSTER_H_
#define MONSTER_H_

#include "Character.h"
#include "game-engine.hpp"

class Monster : public Character{
private:
  int direction;
public:
  Monster();
  virtual ~Monster();

  int choose_direction();
  void def_directions();
  void move();

  int get_direction();

};

#endif /* MONSTER_H_ */
