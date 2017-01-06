/*
 * NetworkHumanMoveLogicalPositionProvider.h
 *
 *  Created on: 2017 jan. 5
 *      Author: juli
 */

#ifndef NETWORKHUMANMOVELOGICALPOSITIONPROVIDER_H_
#define NETWORKHUMANMOVELOGICALPOSITIONPROVIDER_H_

#include "ServerConnection.h"
#include "HumanMoveLogicalPositionProvider.h"

class NetworkHumanMoveLogicalPositionProvider : public HumanMoveLogicalPositionProvider {
private:
  ServerConnection* serverConnection;
public:
  NetworkHumanMoveLogicalPositionProvider(ServerConnection*);
  LogicalPosition pollLogicalPosition();
  virtual ~NetworkHumanMoveLogicalPositionProvider();
};

#endif /* NETWORKHUMANMOVELOGICALPOSITIONPROVIDER_H_ */
