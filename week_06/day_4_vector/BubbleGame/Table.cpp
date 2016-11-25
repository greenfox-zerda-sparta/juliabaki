#include "Table.h"

Table::Table(int width, int height) :
    width(width), height(height) {
}

Table::~Table() {
}

void Table::setHeight(int height) {
  this->height = height;
}

void Table::setWidth(int width) {
  this->width = width;
}

int Table::getHeight(){
  return height;
}

int Table::getWidth(){
  return width;
}
