/*
 * Player.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Stone.h"

class Game;

class Player {
protected:
  StoneType stoneType;
  Game* game = NULL;
public:
  Player(StoneType);
  void setGame(Game*);
  virtual Stone* getMove() = 0;
  virtual ~Player();
};

#endif /* PLAYER_H_ */
