#ifndef BOSS_H_
#define BOSS_H_

#include "Monster.h"

class Boss: public Monster {
public:
  Boss();
  ~Boss();
  void draw(GameContext& context);
  void move(GameContext&);
};

#endif /* BOSS_H_ */
