#include "Field.h"

Field::Field() {
  this->empty = true;
}

bool Field::isEmpty(){
  return empty;
}

void Field::setReserved(){
  this->empty = false;
}

Field::~Field() {}

