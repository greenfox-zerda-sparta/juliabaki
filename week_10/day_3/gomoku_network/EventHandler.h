/*
 * EventHandler.h
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#ifndef EVENTHANDLER_H_
#define EVENTHANDLER_H_

#include "Event.h"

class EventHandler {
public:
  EventHandler();
  virtual void onEvent(Event*) = 0;
  virtual ~EventHandler();
};

#endif /* EVENTHANDLER_H_ */
