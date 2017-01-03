#include "Stone.h"

Stone::Stone(int coordinate_x, int coordinate_y, int type) {
  this->coordinate_x = coordinate_x;
  this->coordinate_y = coordinate_y;
  this->type = type;
}

int Stone::getCoordinate_x(){
  return coordinate_x;
}

int Stone::getCoordinate_y(){
  return coordinate_y;
}

int Stone::getType(){
  return type;
}

Stone::~Stone() {}

