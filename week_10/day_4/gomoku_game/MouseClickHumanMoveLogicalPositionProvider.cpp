/*
 * MouseClickHumanMoveLogicalPositionProvider.cpp
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#include "MouseClickHumanMoveLogicalPositionProvider.h"

MouseClickHumanMoveLogicalPositionProvider::MouseClickHumanMoveLogicalPositionProvider(unsigned int fieldSize, EventBus* eventBus) {
  this->fieldSize = fieldSize;
  this->eventBus = eventBus;
}

LogicalPosition MouseClickHumanMoveLogicalPositionProvider::pollLogicalPosition() {
  SDL_Event event;
  SDL_WaitEvent(&event);
  while (event.type != SDL_MOUSEBUTTONDOWN && event.type != SDL_QUIT) {
    SDL_WaitEvent(&event);
  }
  LogicalPosition logicalPosition;
  if (event.type == SDL_MOUSEBUTTONDOWN) {
    Coordinates mouseCoords = Coordinates {
      event.button.x,
      event.button.y
    };
    logicalPosition = translateCoordinates(mouseCoords);
  }
  else {
    Event* event = new Event(QUIT_GAME);
    eventBus->raiseEvent(event);
  }
  return logicalPosition;
}

LogicalPosition MouseClickHumanMoveLogicalPositionProvider::translateCoordinates(Coordinates coordinates) {
  return LogicalPosition {
    coordinates.x / fieldSize,
    coordinates.y / fieldSize
  };
}

MouseClickHumanMoveLogicalPositionProvider::~MouseClickHumanMoveLogicalPositionProvider() {
}

