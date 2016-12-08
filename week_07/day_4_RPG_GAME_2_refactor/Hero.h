#ifndef HERO_H_
#define HERO_H_

#include "Character.h"

class Hero : public Character {
public:
  int hero_x = 0;
  int hero_y = 0;
  int hero_x_max = 648;
  int hero_y_max = 648;
  int hero_x_min = 0;
  int hero_y_min = 0;
  std::string hero_status = "hero-down.bmp";

  Hero();
  ~Hero();
  void draw(GameContext& context);
  void move(GameContext&);
};

#endif /* HERO_H_ */
