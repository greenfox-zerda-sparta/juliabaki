/*
 * MouseClickEvent.cpp
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#include "MouseClickEvent.h"

MouseClickEvent::MouseClickEvent(Coordinates coordinates) : Event(MOUSE_CLICK) {
  this->coordinates = coordinates;
}

MouseClickEvent::~MouseClickEvent() {
}

