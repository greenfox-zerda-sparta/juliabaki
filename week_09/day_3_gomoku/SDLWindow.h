#ifndef SDLWINDOW_H_
#define SDLWINDOW_H_

#include "SDL2/SDL.h"
#include <string>
#include "Drawer.h"

class SDL_Window {
private:
  bool running;
  SDL_Window *window;
  SDL_Renderer* renderer;
  //SDL_Surface * image;
  //SDL_Texture * texture;
  SDL_Event event;
  Drawer* drawer;

public:
  SDL_Window(int, int);

  void run();
  void draw_background();

  void load_image(std::string);
  void draw_image(std::string, int, int, int, int);

  void mouse_event();

  ~SDL_Window();
};

#endif /* SDLWINDOW_H_ */
