#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.hpp"
#include "Character.h"
#include <vector>

class MyGame: public Game {
private:
  std::vector<std::vector <bool>> map_vector;
private:
  int hero_x = 0;
  int hero_y = 0;
  int hero_x_max = 648;
  int hero_y_max = 648;
  int hero_x_min = 0;
  int hero_y_min = 0;
  std::string hero_status = "hero-down.bmp";

  Character* hero;

  void draw_map(GameContext& context);
  void draw_hero(GameContext& context);

public:
  MyGame();
  void init(GameContext&);
  void render(GameContext&);
  void move_hero(GameContext&);
  void load_map_from_file_to_vector();
  ~MyGame();
};

#endif /* MYGAME_H_ */
