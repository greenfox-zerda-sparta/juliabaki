/*
 * Board.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "Board.h"

Board::Board(unsigned int logicalWidth, unsigned int logicalHeight) {
  this->logicalWidth = logicalWidth;
  this->logicalHeight = logicalHeight;
  // TODO Auto-generated constructor stub

}

unsigned int Board::getLogicalWidth() {
  return this->logicalWidth;
}

unsigned int Board::getLogicalHeight() {
  return this->logicalHeight;
}


Board::~Board() {
  // TODO Auto-generated destructor stub
}

