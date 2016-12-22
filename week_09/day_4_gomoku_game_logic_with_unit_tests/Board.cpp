#include "Board.h"

Board::Board(int width, int height) {
  this->logicalWidth = width;
  this->logicalHeight = height;
}

unsigned int Board::getLogicalWidth() {
  return logicalWidth;
}

unsigned int Board::getLogicalHeight() {
  return logicalHeight;
}

void Board::fillUpFields() {
  fields = std::vector<std::vector<Field*>>(19, std::vector<Field*>(19));
  for (unsigned int i = 0; i < logicalWidth; i++) {
    for (unsigned int j = 0; j < logicalHeight; j++) {
      fields[i][j] = new Field();
    }
  }
}

Board::~Board() {

  for (unsigned int i = 0; i < fields.size(); i++) {
    for (unsigned int j = 0; j < fields[i].size(); j++) {
      delete fields[i][j];
    }
  }

}
