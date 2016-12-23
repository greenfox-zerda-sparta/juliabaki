#ifndef BOARD_H_
#define BOARD_H_

#include "Field.h"
#include <vector>

class Board {
  unsigned int logicalWidth;
  unsigned int logicalHeight;
public:
  std::vector<std::vector<Field*>> fields;

  Board(int width, int height);

  unsigned int getLogicalWidth();
  unsigned int getLogicalHeight();
  std::vector<std::vector<Field*>> getFieldsVector();

  void fillUpFields();

  ~Board();
};

#endif /* BOARD_H_ */
