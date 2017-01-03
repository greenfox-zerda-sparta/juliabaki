/*
 * VictoryChecker.h
 *
 *  Created on: 2017 jan. 1
 *      Author: juli
 */

#ifndef VICTORYCHECKER_H_
#define VICTORYCHECKER_H_

#include <vector>
#include "LogicalPosition.h"
#include "Stone.h"

enum Axis {
  WE, NS, NWSE, NESW
};

class VictoryChecker {
private:
  std::vector<LogicalPosition> victoryPositions;
  unsigned int stoneCountToWin;
  bool hasStoneAtLogicalPosition(std::vector<Stone*>* stones, LogicalPosition logicalPosition, StoneType stoneType);
  std::vector<LogicalPosition> getPossiblePositions(LogicalPosition stonePosition, Axis axis);
public:
  VictoryChecker(unsigned int stoneCountToWin);
  bool isVictoryState(std::vector<Stone*>* stones);
  std::vector<LogicalPosition> getVictoryPositions(std::vector<Stone*>* stones);
  virtual ~VictoryChecker();
};

#endif /* VICTORYCHECKER_H_ */
