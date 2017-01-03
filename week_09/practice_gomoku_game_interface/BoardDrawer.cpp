/*
 * BoardDrawer.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "BoardDrawer.h"

BoardDrawer::BoardDrawer(Drawer* drawer, unsigned int fieldSize) {
  this->drawer = drawer;
  this->fieldSize = fieldSize;
}

void BoardDrawer::draw(Board* board, std::string imageFile) {
  for (unsigned int i = 0; i < board->getLogicalWidth(); i++) {
    for (unsigned int j = 0; j < board->getLogicalHeight(); j++) {
      Coordinates logicalPosition = {i, j};
      DrawableImpl* field = new DrawableImpl(imageFile, calculateTopLeftPositionByLogicalPosition(logicalPosition), calculateBottomRightPositionByLogicalPosition(logicalPosition));
      drawer->draw(field);
    }
  }
}

Coordinates BoardDrawer::calculateTopLeftPositionByLogicalPosition(Coordinates logicalPosition) {
  return {logicalPosition.x * fieldSize, logicalPosition.y * fieldSize};
}

Coordinates BoardDrawer::calculateBottomRightPositionByLogicalPosition(Coordinates logicalPosition) {
  return {(logicalPosition.x + 1) * fieldSize, (logicalPosition.y + 1) * fieldSize};
}

BoardDrawer::~BoardDrawer() {
  // TODO Auto-generated destructor stub
}

