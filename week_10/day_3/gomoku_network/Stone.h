/*
 * Stone.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef STONE_H_
#define STONE_H_

#include "Drawable.h"
#include "LogicalPosition.h"

enum StoneType { BLACK, WHITE };

class Stone: public Drawable {
private:
  LogicalPosition logicalPosition;
  StoneType type;
public:
  Stone(StoneType, LogicalPosition);
  LogicalPosition getLogicalPosition();
  Coordinates getTopLeftPosition();
  Coordinates getBottomRightPosition();
  StoneType getType();
  virtual ~Stone();
};

#endif /* STONE_H_ */
