#ifndef BOSS_H_
#define BOSS_H_

#include "Character.h"

class Boss: public Character {
public:
  Boss();
  ~Boss();
  void draw(GameContext& context);
  void move(GameContext&);
};

#endif /* BOSS_H_ */
