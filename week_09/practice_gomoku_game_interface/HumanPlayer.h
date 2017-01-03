/*
 * HumanPlayer.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef HUMANPLAYER_H_
#define HUMANPLAYER_H_

#include "Player.h"
#include "HumanMoveLogicalPositionProvider.h"

class HumanPlayer: public Player {
private:
  HumanMoveLogicalPositionProvider* humanMoveLogicalPositionProvider;
public:
  HumanPlayer(HumanMoveLogicalPositionProvider*, StoneType);
  Stone* getMove();
  ~HumanPlayer();
};

#endif /* HUMANPLAYER_H_ */
