#include "myDrawer.h"

myDrawer::myDrawer(std::vector<std::vector<Field*>> fields){
  this->fields = fields;
};

void myDrawer::init(GameContext& context) {
  context.load_file("base.bmp");
}
void myDrawer::render(GameContext& context) {
  context.draw_sprite("base.bmp", 0, 0);
  draw_map(fields, context);
  context.render();
}

void myDrawer::draw_map(std::vector<std::vector<Field*>>& vector, GameContext& context) {
  for (unsigned int i = 0; i < vector.size(); i++) {
    for (unsigned int j = 0; j < vector.size(); j++) {
      context.draw_sprite("base.bmp", j * 37, i * 37);
    }
  }
}

myDrawer::~myDrawer(){}
