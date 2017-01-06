/*
 * NetworkHumanMoveLogicalPositionProvider.cpp
 *
 *  Created on: 2017 jan. 5
 *      Author: juli
 */

#include "NetworkHumanMoveLogicalPositionProvider.h"
#include <iostream>

NetworkHumanMoveLogicalPositionProvider::NetworkHumanMoveLogicalPositionProvider(ServerConnection* serverConnection) {
  this->serverConnection = serverConnection;
}

LogicalPosition NetworkHumanMoveLogicalPositionProvider::pollLogicalPosition() {
  std::cout << "pollLogical position in NetworkHumanMoveLogicalPositionProvider is done" << std::endl;
  return serverConnection->pollLogicalPositionFromServer();
}

NetworkHumanMoveLogicalPositionProvider::~NetworkHumanMoveLogicalPositionProvider() {
}

