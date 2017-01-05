#include "NetworkPlayer.h"
#include <iostream>
#include "Game.h"

NetworkPlayer::NetworkPlayer(HumanMoveLogicalPositionProvider* humanMoveLogicalPositionProvider, StoneType stoneType) :
    Player(stoneType) {
  this->humanMoveLogicalPositionProvider = humanMoveLogicalPositionProvider;
  connectToServer();
}

Stone* NetworkPlayer::getMove() {
  // ask player for coordinates
  // check if coordinates are valid or not
  // if not, ask again
  // create Stone
  bool isCorrectLogicalPosition = false;
  LogicalPosition logicalPosition;
  while (!isCorrectLogicalPosition) {
    logicalPosition = humanMoveLogicalPositionProvider->pollLogicalPosition();
    if (!game->isLogicalPositionReserved(logicalPosition)) {
      isCorrectLogicalPosition = true;
      sendLogicalPositionToServer(logicalPosition);
    }
  }
  return new Stone(stoneType, logicalPosition);
}

void NetworkPlayer::connectToServer() {
  SDLNet_Init();
  IPaddress ip;

  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  client = SDLNet_TCP_Open(&ip);
}

void NetworkPlayer::sendLogicalPositionToServer(LogicalPosition logicalPosition){
  std::string s1 = std::to_string(logicalPosition.x);
  std::string s2 = std::to_string(logicalPosition.y);
  std::string sum = s1 + " " + s2;
  const char* client_text = sum.c_str(); ;
  SDLNet_TCP_Send(client, client_text, 100);
}

NetworkPlayer::~NetworkPlayer() {
  SDLNet_TCP_Close (client);
  SDL_Quit();
}

