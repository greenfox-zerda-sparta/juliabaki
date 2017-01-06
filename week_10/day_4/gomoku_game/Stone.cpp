/*
 * Stone.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "Stone.h"

Stone::Stone(StoneType type, LogicalPosition logicalPosition) : Drawable(""){
  this->type = type;
  this->logicalPosition = logicalPosition;
  switch (this->type) {
  case BLACK: imageFile = "o.bmp"; break;
  case WHITE: imageFile = "x.bmp"; break;
  }
}

LogicalPosition Stone::getLogicalPosition() {
  return this->logicalPosition;
}

Coordinates Stone::getBottomRightPosition() {
  return Coordinates {
    (logicalPosition.x + 1) * 37,
    (logicalPosition.y + 1) * 37
  };

}

Coordinates Stone::getTopLeftPosition() {
  return Coordinates {
    logicalPosition.x * 37,
    logicalPosition.y * 37
  };
}

StoneType Stone::getType() {
  return this->type;
}

Stone::~Stone() {
}

