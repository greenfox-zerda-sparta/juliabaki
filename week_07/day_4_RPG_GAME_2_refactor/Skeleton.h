#ifndef SKELETON_H_
#define SKELETON_H_

#include "Character.h"
#include "Map.h"

#include <stdlib.h>
#include <time.h>

class Skeleton: public Character {
public:
  Skeleton();
  ~Skeleton();

  void draw(GameContext& context);
  void move(GameContext&);
};

#endif /* SKELETON_H_ */
