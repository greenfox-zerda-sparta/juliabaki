/*
 * Board.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef BOARD_H_
#define BOARD_H_



class Board {
private:
  unsigned int logicalWidth;
  unsigned int logicalHeight;
public:
  Board(unsigned int logicalWidth, unsigned int logicalHeight);
  unsigned int getLogicalWidth();
  unsigned int getLogicalHeight();
  virtual ~Board();
};

#endif /* BOARD_H_ */
