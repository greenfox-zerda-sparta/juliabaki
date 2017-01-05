
#ifndef NETWORKPLAYER_H_
#define NETWORKPLAYER_H_

#include "Player.h"
#include "HumanMoveLogicalPositionProvider.h"
#include <SDL2/SDL_net.h>

class NetworkPlayer : public Player {
private:
  HumanMoveLogicalPositionProvider* humanMoveLogicalPositionProvider;
  TCPsocket client;

  void connectToServer();
  void sendLogicalPositionToServer(LogicalPosition logicalPosition);

public:
  NetworkPlayer(HumanMoveLogicalPositionProvider*, StoneType);
  Stone* getMove();
  virtual ~NetworkPlayer();
};

#endif /* NETWORKPLAYER_H_ */
