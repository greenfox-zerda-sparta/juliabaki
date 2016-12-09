#ifndef SKELETON_H_
#define SKELETON_H_

#include "Monster.h"
#include "Map.h"

class Skeleton: public Monster {
public:
  Skeleton();
  ~Skeleton();

  void draw(GameContext& context);
  void move(GameContext&);
};

#endif /* SKELETON_H_ */
