#ifndef SDLWINDOW_H_
#define SDLWINDOW_H_

#include "SDL2/SDL.h"

class SDL_Window {
private:
  SDL_Window *window;
  SDL_Renderer* renderer;
  SDL_Event event;
public:
  SDL_Window(int, int);
  ~SDL_Window();
  void run();
  void draw_background();
};

#endif /* SDLWINDOW_H_ */
