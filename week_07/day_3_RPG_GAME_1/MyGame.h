#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.hpp"

class MyGame: public Game {
public:
  void init(GameContext&);
  void render(GameContext&);
  ~MyGame();
};

#endif /* MYGAME_H_ */
