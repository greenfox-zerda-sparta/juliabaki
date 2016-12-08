#ifndef SKELETON_H_
#define SKELETON_H_

#include "Character.h"
#include "Map.h"

#include <stdlib.h>
#include <time.h>

class Skeleton: public Character {
public:
  Map map;
  int skeleton_x, skeleton_y;
public:
  Skeleton(Map& map);
  ~Skeleton();
  void draw(GameContext& context);
  void move(GameContext&);
};

#endif /* SKELETON_H_ */
