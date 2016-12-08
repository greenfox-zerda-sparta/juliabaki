#ifndef HERO_H_
#define HERO_H_

#include "Character.h"
#include "Map.h"

class Hero : public Character {
private:
  int hero_x_max;
  int hero_y_max;
  int hero_x_min;
  int hero_y_min;
  std::string hero_status;
  int move_counter;
public:
  Hero();
  ~Hero();

  void draw(GameContext& context);
  void move(GameContext&);

  int get_move_counter();
};

#endif /* HERO_H_ */
