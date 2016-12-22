
#ifndef BOARD_H_
#define BOARD_H_

#include "Field.h"
#include <vector>

class Board {
  unsigned int logicalWidth;
  unsigned int logicalHeight;
public:
  std::vector<Field*> fieldRows;
  std::vector<std::vector<Field*>> fieldColumns;

  Board(int width, int height);

  unsigned int getLogicalWidth();
  unsigned int getLogicalHeight();

  void fillUpFieldRows();
  void fillUpFieldColumns();

  ~Board();
};

#endif /* BOARD_H_ */
