/*
 * Drawable.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "Drawable.h"

Drawable::Drawable(std::string imageFile) {
  this->imageFile = imageFile;
}

std::string Drawable::getImageFile() {
  return imageFile;
}

Drawable::~Drawable() {
  // TODO Auto-generated destructor stub
}

