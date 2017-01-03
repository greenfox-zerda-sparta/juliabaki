#ifndef PLAYER_H_
#define PLAYER_H_

#include "Stone.h"

class Player {
public:
  Player();
  Stone* placeStone(int coordinate_x, int coordinate_y, int type);
  ~Player();
};

#endif /* PLAYER_H_ */
