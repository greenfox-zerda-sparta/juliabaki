#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.hpp"
#include "Character.h"
#include "Hero.h"
#include <vector>

class MyGame: public Game {
private:
  std::vector<std::vector <bool>> map_vector;
  std::vector<Character*> characters;
  Hero* hero;

public:
  MyGame();
  ~MyGame();
  void load_map_from_file_to_vector();
  void load_characters();
  void draw_map(GameContext& context);
  void init(GameContext&);
  void render(GameContext&);
};

#endif /* MYGAME_H_ */
