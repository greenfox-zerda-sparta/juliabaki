#include "Stone.h"

Stone::Stone(int coordinate_x, int coordinate_y) {
  this->coordinate_x = coordinate_x;
  this->coordinate_y = coordinate_y;
}

int Stone::getCoordinate_x(){
  return coordinate_x;
}

int Stone::getCoordinate_y(){
  return coordinate_y;
}

Stone::~Stone() {}

