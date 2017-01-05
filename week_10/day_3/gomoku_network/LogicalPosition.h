/*
 * LogicalPosition.h
 *
 *  Created on: 2016 dec. 30
 *      Author: juli
 */

#ifndef LOGICALPOSITION_H_
#define LOGICALPOSITION_H_

struct LogicalPosition {
  unsigned int x;
  unsigned int y;
  bool operator==(const LogicalPosition& second) {
    return x == second.x && y == second.y;
  }
};



#endif /* LOGICALPOSITION_H_ */
