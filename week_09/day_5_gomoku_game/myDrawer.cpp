#include "myDrawer.h"
#include <iostream>

myDrawer::myDrawer(std::vector<std::vector<Field*>> fields, std::vector<Stone*>* stones) {
  this->fields = fields;
  this->mouse_coordinte_x = -1;
  this->mouse_coordinte_y = -1;
  this->stones = stones;
}

void myDrawer::init(GameContext& context) {
  context.load_file("base.bmp");
  context.load_file("x.bmp");
  context.load_file("o.bmp");
}

void myDrawer::setCoordinates(GameContext& context) {
  if (context.was_key_pressed(MOUSE_DOWN)) {
    mouse_coordinte_x = context.getCoordinate_x();
    mouse_coordinte_y = context.getCoordinate_y();
  }
}

void myDrawer::render(GameContext& context) {
  draw_map(fields, context);
  //setCoordinates(context);
  draw_stone(context);
  context.render();
}

void myDrawer::draw_stone(GameContext& context) {
  for (unsigned int i = 0; i < stones->size(); i++) {
    if ((*stones)[i]->getType() == 0) {
      context.draw_sprite("x.bmp", (*stones)[i]->getCoordinate_x() * 37, (*stones)[i]->getCoordinate_y() * 37);
    } else if ((*stones)[i]->getType() == 1) {
      context.draw_sprite("o.bmp", (*stones)[i]->getCoordinate_x() * 37, (*stones)[i]->getCoordinate_y() * 37);
    }
  }
}

void myDrawer::draw_map(std::vector<std::vector<Field*>>& vector, GameContext& context) {
  for (unsigned int i = 0; i < vector.size(); i++) {
    for (unsigned int j = 0; j < vector.size(); j++) {
      context.draw_sprite("base.bmp", j * 37, i * 37);
    }
  }
}

myDrawer::~myDrawer() {
}
