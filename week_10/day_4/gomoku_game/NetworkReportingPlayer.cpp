#include "NetworkReportingPlayer.h"

#include <iostream>
#include "Game.h"

NetworkReportingPlayer::NetworkReportingPlayer(HumanMoveLogicalPositionProvider* humanMoveLogicalPositionProvider, StoneType stoneType, ServerConnection* serverConnection) :
    HumanPlayer(humanMoveLogicalPositionProvider, stoneType) {
  this->serverConnection = serverConnection;
}

Stone* NetworkReportingPlayer::getMove() {
  Stone* stone = HumanPlayer::getMove();
  serverConnection->sendLogicalPositionToServer(stone->getLogicalPosition());
  return stone;
}

/*void NetworkReportingPlayer::sendLogicalPositionToServer(LogicalPosition logicalPosition){
  std::string s1 = std::to_string(logicalPosition.x);
  std::string s2 = std::to_string(logicalPosition.y);
  std::string sum = s1 + " " + s2;
  const char* client_text = sum.c_str();
  //SDLNet_TCP_Send(client, client_text, 100);
}*/

NetworkReportingPlayer::~NetworkReportingPlayer() {
  //SDLNet_TCP_Close (client);
  //SDLNet_Quit();
}

