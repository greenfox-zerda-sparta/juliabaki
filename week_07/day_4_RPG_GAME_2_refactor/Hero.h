#ifndef HERO_H_
#define HERO_H_

#include "Character.h"
#include "Map.h"

class Hero : public Character {
public:
  int hero_x;
  int hero_y;
  int hero_x_max;
  int hero_y_max;
  int hero_x_min;
  int hero_y_min;
  std::string hero_status = "hero-down.bmp";

  Hero();
  ~Hero();
  void draw(GameContext& context);
  void move(GameContext&);
};

#endif /* HERO_H_ */
