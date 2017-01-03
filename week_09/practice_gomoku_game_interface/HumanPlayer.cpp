/*
 * HumanPlayer.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "HumanPlayer.h"
#include "Game.h"

HumanPlayer::HumanPlayer(HumanMoveLogicalPositionProvider* humanMoveLogicalPositionProvider, StoneType stoneType) : Player(stoneType) {
  this->humanMoveLogicalPositionProvider = humanMoveLogicalPositionProvider;
}

Stone* HumanPlayer::getMove() {
  // ask player for coordinates
  // check if coordinates are valid or not
  // if not, ask again
  // create Stone
  bool isCorrectLogicalPosition = false;
  LogicalPosition logicalPosition;
  while (!isCorrectLogicalPosition) {
    logicalPosition = humanMoveLogicalPositionProvider->pollLogicalPosition();
    if (!game->isLogicalPositionReserved(logicalPosition)) {
      isCorrectLogicalPosition = true;
    }
  }
  return new Stone(stoneType, logicalPosition);
}

HumanPlayer::~HumanPlayer() {
}

