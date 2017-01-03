/*
 * BoardDrawer.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef BOARDDRAWER_H_
#define BOARDDRAWER_H_

#include "Drawer.h"
#include "Board.h"
#include "DrawableImpl.h"

class BoardDrawer {
private:
  Drawer* drawer;
  unsigned int fieldSize;
  Coordinates calculateTopLeftPositionByLogicalPosition(Coordinates logicalPosition);
  Coordinates calculateBottomRightPositionByLogicalPosition(Coordinates logicalPosition);
public:
  BoardDrawer(Drawer* drawer, unsigned int fieldSize);
  void draw(Board* board, std::string imageFile);
  virtual ~BoardDrawer();
};

#endif /* BOARDDRAWER_H_ */
