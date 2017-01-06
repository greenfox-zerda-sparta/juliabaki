/*
 * EventBus.h
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#ifndef EVENTBUS_H_
#define EVENTBUS_H_

#include "Event.h"
#include "EventHandler.h"
#include <vector>

class EventBus {
private:
  std::vector<EventHandler*> eventHandlers;
public:
  EventBus();
  void raiseEvent(Event*);
  void subscribe(EventHandler*);
  virtual ~EventBus();
};

#endif /* EVENTBUS_H_ */
