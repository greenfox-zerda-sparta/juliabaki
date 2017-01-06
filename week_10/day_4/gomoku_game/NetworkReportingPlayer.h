
#ifndef NETWORKREPORTINGPLAYER_H_
#define NETWORKREPORTINGPLAYER_H_

#include "HumanPlayer.h"
#include "ServerConnection.h"

class NetworkReportingPlayer : public HumanPlayer {
private:
  ServerConnection* serverConnection;
  void sendLogicalPositionToServer(LogicalPosition logicalPosition);
public:
  NetworkReportingPlayer(HumanMoveLogicalPositionProvider*, StoneType, ServerConnection*);
  Stone* getMove();
  virtual ~NetworkReportingPlayer();
};

#endif /* NETWORKREPORTINGPLAYER_H_ */
