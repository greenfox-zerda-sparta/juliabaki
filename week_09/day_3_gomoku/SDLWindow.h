#ifndef SDLWINDOW_H_
#define SDLWINDOW_H_

#include "SDL2/SDL.h"
#include <string>
#include "Drawer.h"
#include "Map.h"

class SDL_Window {
private:
  bool running;
  SDL_Window *window;
  SDL_Renderer* renderer;
  SDL_Event event;
  Drawer* drawer;
  Drawer* drawer_x;
  Map* map;

public:
  SDL_Window(int, int);

  void run();
  void mouse_event();

  ~SDL_Window();
};

#endif /* SDLWINDOW_H_ */
