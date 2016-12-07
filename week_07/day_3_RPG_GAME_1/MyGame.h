#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.hpp"

class MyGame: public Game {
private:
  bool map[10][10];
  void fill_map();
public:
  void init(GameContext&);
  void render(GameContext&);
  void print_array();
  ~MyGame();
};

#endif /* MYGAME_H_ */
