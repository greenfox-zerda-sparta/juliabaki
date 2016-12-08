#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.hpp"
#include "Character.h"
#include "Hero.h"
#include "Map.h"
#include <vector>

class MyGame: public Game {
private:
  std::vector<Character*> characters;
  Hero* hero;
  Map* map;

public:
  MyGame();
  ~MyGame();
  void load_characters();

  void load_map_from_file_to_vector();
  void draw_map(GameContext& context);

  void init(GameContext&);
  void render(GameContext&);
};

#endif /* MYGAME_H_ */
