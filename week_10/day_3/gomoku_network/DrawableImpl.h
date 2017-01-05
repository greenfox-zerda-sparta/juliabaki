/*
 * DrawableImpl.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef DRAWABLEIMPL_H_
#define DRAWABLEIMPL_H_

#include "Drawable.h"

class DrawableImpl: public Drawable {
private:
  Coordinates topLeftPosition;
  Coordinates bottomRightPosition;
public:
  DrawableImpl(std::string imageFile, Coordinates topLeftPosition, Coordinates bottomRightPosition);
  Coordinates getTopLeftPosition();
  Coordinates getBottomRightPosition();
  virtual ~DrawableImpl();
};

#endif /* DRAWABLEIMPL_H_ */
