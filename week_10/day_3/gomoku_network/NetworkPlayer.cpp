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

NetworkPlayer::~NetworkPlayer() {
  SDLNet_TCP_Close (client);
  SDL_Quit();
}

