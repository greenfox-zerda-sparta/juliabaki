
#ifndef MYDRAWER_H_
#define MYDRAWER_H_

#include "game-engine.hpp"
#include <vector>
#include "Board.h"

class myDrawer: public Game {
private:
  std::vector<std::vector<Field*>> fields;
public:
  myDrawer(std::vector<std::vector<Field*>> fields);
  ~myDrawer();

  void init(GameContext&);
  void render(GameContext&);
  void draw_map(std::vector<std::vector<Field*>>& vector, GameContext& context);
};

#endif /* MYDRAWER_H_ */
