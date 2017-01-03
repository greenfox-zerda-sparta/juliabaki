/*
 * HumanCoordinateProvider.h
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#ifndef HUMANMOVELOGICALPOSITIONPROVIDER_H_
#define HUMANMOVELOGICALPOSITIONPROVIDER_H_

#include "LogicalPosition.h"

class HumanMoveLogicalPositionProvider {
public:
  virtual LogicalPosition pollLogicalPosition() = 0;
  virtual ~HumanMoveLogicalPositionProvider() {};
};

#endif /* HUMANMOVELOGICALPOSITIONPROVIDER_H_ */
