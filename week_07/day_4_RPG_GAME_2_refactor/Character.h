
#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "game-engine.hpp"
#include <vector>

class Character {
public:
  int hero_x = 0;
  int hero_y = 0;
  int hero_x_max = 648;
  int hero_y_max = 648;
  int hero_x_min = 0;
  int hero_y_min = 0;
  std::string hero_status = "hero-down.bmp";

  Character();
  virtual ~Character();
  void draw_hero(GameContext& context);
  void move_hero(GameContext&);
};

#endif /* CHARACTER_H_ */
