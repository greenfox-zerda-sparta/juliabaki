/*
 * EventBus.cpp
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#include "EventBus.h"

EventBus::EventBus() {
}

void EventBus::subscribe(EventHandler* eventHandler) {
  eventHandlers.push_back(eventHandler);
}

void EventBus::raiseEvent(Event* event) {
  for (unsigned int i = 0; i < eventHandlers.size(); i++) {
    eventHandlers[i]->onEvent(event);
  }
}

EventBus::~EventBus() {
}

