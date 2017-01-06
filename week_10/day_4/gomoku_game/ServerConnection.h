/*
 * ServerConnection.h
 *
 *  Created on: 2017 jan. 5
 *      Author: juli
 */

#ifndef SERVERCONNECTION_H_
#define SERVERCONNECTION_H_

#include <SDL2/SDL_Net.h>
#include "LogicalPosition.h"

class ServerConnection {
private:
  char clientIndex;
  TCPsocket client;
public:
  ServerConnection();
  char getClientIndex();
  void sendLogicalPositionToServer(LogicalPosition);
  LogicalPosition pollLogicalPositionFromServer();
  virtual ~ServerConnection();
};

#endif /* SERVERCONNECTION_H_ */
