/*
 * Drawable.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef DRAWABLE_H_
#define DRAWABLE_H_

#include <string>
#include "Coordinates.h"

class Drawable {
protected:
  std::string imageFile;
public:
  Drawable(std::string imageFile);
  std::string getImageFile();
  virtual Coordinates getTopLeftPosition() = 0;
  virtual Coordinates getBottomRightPosition() = 0;
  virtual ~Drawable();
};

#endif /* DRAWABLE_H_ */
