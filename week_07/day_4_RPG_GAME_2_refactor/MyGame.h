#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.hpp"
#include "Hero.h"
#include "Skeleton.h"
#include "Boss.h"
#include "Map.h"
#include <vector>

class MyGame: public Game {
private:
  std::vector<Character*> characters;
  Map* map;
  int hero_count = 1;
  int skeleton_count = 3;

public:
  MyGame();
  ~MyGame();
  void load_characters();
  void skeleton_factory();

  void load_map_from_file_to_vector();
  void draw_map(GameContext& context);
  void draw_characters(GameContext& context);

  void init(GameContext&);
  void render(GameContext&);
};

#endif /* MYGAME_H_ */
