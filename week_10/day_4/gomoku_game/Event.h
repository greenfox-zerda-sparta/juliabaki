/*
 * Event.h
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#ifndef EVENT_H_
#define EVENT_H_

enum EventType {
  MOUSE_CLICK, QUIT_GAME
};

class Event {
protected:
  EventType type;
public:
  Event(EventType);
  EventType getEventType();
  virtual ~Event();
};

#endif /* EVENT_H_ */
