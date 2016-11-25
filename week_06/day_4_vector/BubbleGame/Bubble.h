#ifndef BUBBLE_H_
#define BUBBLE_H_

#include "Table.h"

class Bubble {
private:
  int positionX;
  int positionY;
  int directionX;
  int directionY;
  Table* table;
public:
  Bubble(int positionX, int positionY, int directionX, int directionY, Table* table);
  ~Bubble();
  int getPositionX();
  int getPositionY();
  int getDirectionX();
  int getDirectionY();
  void move();
  bool is_bubble_going_to_hit_the_wall();
  void switchDirection();
};

#endif /* BUBBLE_H_ */
