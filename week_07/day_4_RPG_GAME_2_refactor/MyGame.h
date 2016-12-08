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
  int hero_count;
  int skeleton_count;
  int boss_count;

public:
  MyGame();
  ~MyGame();
  void load_characters();
  void hero_factory();
  void skeleton_factory();
  void boss_factory();
  bool are_characters_in_same_position();

  void draw_map(GameContext& context);
  void draw_characters(GameContext& context);

  void init(GameContext&);
  void render(GameContext&);
};

#endif /* MYGAME_H_ */
