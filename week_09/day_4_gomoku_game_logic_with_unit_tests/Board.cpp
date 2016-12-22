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

void Board::fillUpFieldRows() {
  for(unsigned int i = 0; i < logicalWidth; i++){
    Field* field = new Field;
    fieldRows.push_back(field);
  }
}

void Board::fillUpFieldColumns(){
  for(unsigned int i = 0; i < logicalHeight; i++){
    fieldColumns.push_back(fieldRows);
  }
}

Board::~Board() {
  for(unsigned int i = 0; i < fieldRows.size(); i++){
    delete fieldRows[i];
  }
}
