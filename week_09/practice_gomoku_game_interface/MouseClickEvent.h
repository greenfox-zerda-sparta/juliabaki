/*
 * MouseClickEvent.h
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#ifndef MOUSECLICKEVENT_H_
#define MOUSECLICKEVENT_H_
#include "Event.h"
#include "Coordinates.h"

class MouseClickEvent : public Event {
private:
  Coordinates coordinates;
public:
  MouseClickEvent(Coordinates);
  virtual ~MouseClickEvent();
};

#endif /* MOUSECLICKEVENT_H_ */
