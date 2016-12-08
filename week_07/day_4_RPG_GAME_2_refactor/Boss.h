#ifndef BOSS_H_
#define BOSS_H_

#include "Character.h"

class Boss: public Character {
private:
  int boss_x, boss_y;
public:
  Boss();
  ~Boss();
  void draw(GameContext& context);
  void move(GameContext&);
  void set_coordinates();
  bool valid_coordinate();
};

#endif /* BOSS_H_ */
