
#ifndef MYDRAWER_H_
#define MYDRAWER_H_

#include "game-engine.hpp"
#include <vector>
#include "Board.h"
#include "Stone.h"

class myDrawer: public Game {
private:
  std::vector<std::vector<Field*>> fields;
  std::vector<Stone*>* stones;
  int mouse_coordinte_x;
  int mouse_coordinte_y;

public:
  myDrawer(std::vector<std::vector<Field*>>, std::vector<Stone*>*);
  ~myDrawer();

  void init(GameContext&);
  void render(GameContext&);
  void draw_map(std::vector<std::vector<Field*>>&, GameContext&);
  void draw_stone(GameContext&);

  int getMouseCoordinte_x(){return mouse_coordinte_x;};
  int getMouseCoordinte_y(){return mouse_coordinte_y;};
  void setCoordinates(GameContext&);
};

#endif /* MYDRAWER_H_ */
