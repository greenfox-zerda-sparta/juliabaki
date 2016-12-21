#ifndef SDLWINDOW_H_
#define SDLWINDOW_H_

#include "SDL2/SDL.h"

class SDL_Window {
public:
  SDL_Window *window;
  SDL_Window();
  ~SDL_Window();
};

#endif /* SDLWINDOW_H_ */
