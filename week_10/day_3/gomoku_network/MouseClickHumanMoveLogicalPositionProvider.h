/*
 * MouseClickHumanMoveLogicalPositionProvider.h
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#ifndef MOUSECLICKHUMANMOVELOGICALPOSITIONPROVIDER_H_
#define MOUSECLICKHUMANMOVELOGICALPOSITIONPROVIDER_H_

#include "HumanMoveLogicalPositionProvider.h"
#include "Coordinates.h"
#include "LogicalPosition.h"
#include "SDL2/SDL.h"
#include "EventBus.h"

class MouseClickHumanMoveLogicalPositionProvider : public HumanMoveLogicalPositionProvider {
private:
  unsigned int fieldSize;
  EventBus* eventBus;
  LogicalPosition translateCoordinates(Coordinates coordinates);
public:
  MouseClickHumanMoveLogicalPositionProvider(unsigned int, EventBus*);
  LogicalPosition pollLogicalPosition();
  virtual ~MouseClickHumanMoveLogicalPositionProvider();
};

#endif /* MOUSECLICKHUMANMOVELOGICALPOSITIONPROVIDER_H_ */
