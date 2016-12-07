#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.hpp"

class MyGame: public Game {
private:
  int hero_x = 0;
  int hero_y = 0;
  int hero_x_max = 648;
  int hero_y_max = 648;
  int hero_x_min = 0;
  int hero_y_min = 0;
  std::string hero_status = "hero-down.bmp";
public:
  void init(GameContext&);
  void render(GameContext&);
  void move_hero(GameContext&);
  ~MyGame();
};

#endif /* MYGAME_H_ */
