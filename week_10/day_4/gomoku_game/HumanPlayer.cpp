/*
 * HumanPlayer.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "HumanPlayer.h"
#include "Game.h"
#include <iostream>

HumanPlayer::HumanPlayer(HumanMoveLogicalPositionProvider* humanMoveLogicalPositionProvider, StoneType stoneType) : Player(stoneType) {
  this->humanMoveLogicalPositionProvider = humanMoveLogicalPositionProvider;
}

Stone* HumanPlayer::getMove() {
  bool isCorrectLogicalPosition = false;
  LogicalPosition logicalPosition;
  while (!isCorrectLogicalPosition) {
    logicalPosition = humanMoveLogicalPositionProvider->pollLogicalPosition();
    std::cout << "Now I'm in HumanPlayer getMove() method" << std::endl;
    if (!game->isLogicalPositionReserved(logicalPosition)) {
      isCorrectLogicalPosition = true;
    }
  }
  return new Stone(stoneType, logicalPosition);
}

HumanPlayer::~HumanPlayer() {
}

