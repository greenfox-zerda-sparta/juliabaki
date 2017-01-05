/*
 * DrawableImpl.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "DrawableImpl.h"

DrawableImpl::DrawableImpl(std::string imageFile, Coordinates topLeftPosition, Coordinates bottomRightPosition) : Drawable(imageFile){
  this->topLeftPosition = topLeftPosition;
  this->bottomRightPosition = bottomRightPosition;
}

Coordinates DrawableImpl::getTopLeftPosition() {
  return topLeftPosition;
}

Coordinates DrawableImpl::getBottomRightPosition() {
  return bottomRightPosition;
}

DrawableImpl::~DrawableImpl() {
  // TODO Auto-generated destructor stub
}

