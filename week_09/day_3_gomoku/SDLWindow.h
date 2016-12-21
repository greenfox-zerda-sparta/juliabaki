#ifndef SDLWINDOW_H_
#define SDLWINDOW_H_

#include "SDL2/SDL.h"

class SDL_Window {
private:
  SDL_Window *window;
  SDL_Event event;
public:
  SDL_Window(int, int);
  ~SDL_Window();
  void run();
};

#endif /* SDLWINDOW_H_ */
