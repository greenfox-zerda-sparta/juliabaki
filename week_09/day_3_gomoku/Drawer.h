
#ifndef DRAWER_H_
#define DRAWER_H_

#include "SDL2/SDL.h"
#include <string>
#include <vector>

class Drawer {
private:
  SDL_Renderer* renderer;
  SDL_Surface * image;
  SDL_Texture * texture;
  std::string picture_name;
public:
  Drawer(std::string, SDL_Renderer*);
  void draw_background();
  void load_image();
  void draw_image(int position_x, int position_y, int side_x, int side_y);
  void draw_map(std::vector<std::vector<bool>>&);
  ~Drawer();
};

#endif /* DRAWER_H_ */
