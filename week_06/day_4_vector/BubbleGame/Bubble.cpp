#include "Bubble.h"

Bubble::Bubble(int positionX, int positionY, int directionX, int directionY,
    Table* table) {
  this->positionX = positionX;
  this->positionY = positionY;
  this->directionX = directionX;
  this->directionY = directionY;
  this->table = table;
}

Bubble::~Bubble() {
}

int Bubble::getPositionX() {
  return positionX;
}

int Bubble::getPositionY() {
  return positionY;
}

int Bubble::getDirectionX() {
  return directionX;
}

int Bubble::getDirectionY() {
  return directionY;
}

void Bubble::move() {
  if (is_bubble_going_to_hit_the_wall()) {
    switchDirection();
  } else {
    positionX += directionX;
    positionY += directionY;
  }
}

void Bubble::switchDirection() {
  int new_position_X = positionX + directionX;
  if (new_position_X < 0) {
    positionX = new_position_X * -1;
    directionX *= -1;
  } else if (new_position_X > table->getWidth()){
    positionX = table->getWidth() - (new_position_X - table->getWidth());
    directionX *= -1;
  }

  int new_position_Y = positionY + directionY;
  if (new_position_Y < 0) {
    positionY = new_position_Y * -1;
    directionY *= -1;
  } else if (new_position_Y > table->getHeight()){
    positionY = table->getHeight() - (new_position_Y - table->getHeight());
    directionY *= -1;
  }
}

bool Bubble::is_bubble_going_to_hit_the_wall() {
  if (positionX + directionX > table->getWidth()
      || positionY + directionY > table->getHeight()) {
    return true;
  } else if (positionX + directionX < 0 || positionY + directionY < 0) {
    return true;
  }
  return false;
}
