/*
 * Event.cpp
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#include "Event.h"

Event::Event(EventType type) {
  this->type = type;
}

EventType Event::getEventType() {
  return this->type;
}

Event::~Event() {
}

