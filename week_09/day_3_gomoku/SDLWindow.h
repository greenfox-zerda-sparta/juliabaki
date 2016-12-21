#ifndef SDLWINDOW_H_
#define SDLWINDOW_H_

#include "SDL2/SDL.h"

class SDL_Window {
private:
  bool running;
  SDL_Window *window;
  SDL_Renderer* renderer;
  SDL_Surface * image;
  SDL_Texture * texture;
  SDL_Event event;
public:
  SDL_Window(int, int);

  void run();
  void draw_background();
  void draw_image();

  ~SDL_Window();
};

#endif /* SDLWINDOW_H_ */
