/*
 * VictoryChecker.cpp
 *
 *  Created on: 2017 jan. 1
 *      Author: juli
 */

#include "VictoryChecker.h"
#include <map>

struct LogicalStep {
  int x;
  int y;
};

VictoryChecker::VictoryChecker(unsigned int stoneCountToWin) {
  this->stoneCountToWin = stoneCountToWin;
}

bool VictoryChecker::isVictoryState(std::vector<Stone*>* stones) {
  bool result = false;
  unsigned int stoneCount;
  for (unsigned int i = 0; !result && i < stones->size(); i++) {
    Stone* stone = (*stones)[i];
    for (int axis = WE; !result && axis <= NESW; axis++) {
      stoneCount = 0;
      std::vector<LogicalPosition> possiblePositions = getPossiblePositions(stone->getLogicalPosition(), static_cast<Axis>(axis));
      for (unsigned int j = 0; !result && j < possiblePositions.size(); j++) {
        if (hasStoneAtLogicalPosition(stones, possiblePositions[j], stone->getType())) {
          stoneCount++;
          victoryPositions.push_back(possiblePositions[j]);
          if (stoneCount >= stoneCountToWin) {
            result = true;
          }
        } else {
          victoryPositions.clear();
          stoneCount = 0;
        }
      }
    }
  }
  return result;
}

std::vector<LogicalPosition> VictoryChecker::getVictoryPositions(std::vector<Stone*>* stones) {
  isVictoryState(stones);
  return victoryPositions;
}

bool VictoryChecker::hasStoneAtLogicalPosition(std::vector<Stone*>* stones, LogicalPosition logicalPosition, StoneType stoneType) {
  bool result = false;
  for (unsigned int i = 0; !result && i < stones->size(); i++) {
    Stone* stone = (*stones)[i];
    if (stone->getLogicalPosition() == logicalPosition && stone->getType() == stoneType) {
      result = true;
    }
  }
  return result;
}

std::vector<LogicalPosition> VictoryChecker::getPossiblePositions(LogicalPosition stonePosition, Axis axis) {
  std::vector<LogicalPosition> result;
  std::map<Axis, LogicalStep> axisStepMap;
  axisStepMap[WE] = LogicalStep{-1, 0};
  axisStepMap[NS] = LogicalStep{0, -1};
  axisStepMap[NWSE] = LogicalStep{-1, -1};
  axisStepMap[NESW] = LogicalStep{1, -1};
  int maxStep = stoneCountToWin - 1;
  LogicalStep logicalStep = axisStepMap[axis];
  for (int i = -maxStep; i < maxStep; i++) {
    LogicalPosition logicalPosition = LogicalPosition {
      stonePosition.x + i * logicalStep.x,
      stonePosition.y + i * logicalStep.y
    };
    result.push_back(logicalPosition);
  }
  return result;
}

VictoryChecker::~VictoryChecker() {
}

