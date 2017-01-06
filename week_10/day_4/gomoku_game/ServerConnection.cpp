/*
 * ServerConnection.cpp
 *
 *  Created on: 2017 jan. 5
 *      Author: juli
 */

#include "ServerConnection.h"
#include <iostream>

ServerConnection::ServerConnection() {
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  client = SDLNet_TCP_Open(&ip);
  // setting client index
  SDLNet_TCP_Recv(client, &clientIndex, 1);
  std::cout << "connected to server with ID: " << (int)clientIndex << std::endl;
}

char ServerConnection::getClientIndex() {
  return clientIndex;
}

void ServerConnection::sendLogicalPositionToServer(LogicalPosition logicalPosition) {
  char data[2];
  data[0] = (char)logicalPosition.x;
  data[1] = (char)logicalPosition.y;
  std::cout << "sending position from client " << (int)clientIndex << ": x: " << (int)data[0] << " y: " << (int)data[1] << std::endl;
  SDLNet_TCP_Send(client, data, 2);
}

LogicalPosition ServerConnection::pollLogicalPositionFromServer() {
  char data[2];
  SDLNet_TCP_Recv(client, data, 2);
  std::cout << "received position in client " << (int)clientIndex << ": x: " << (int)data[0] << " y: " << (int)data[1] << std::endl;
  return LogicalPosition{(unsigned int)data[0], (unsigned int)data[1]};
}

ServerConnection::~ServerConnection() {
  SDLNet_TCP_Close(client);
}

