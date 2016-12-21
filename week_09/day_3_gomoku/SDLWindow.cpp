#include "SDLWindow.h"

SDL_Window::SDL_Window() {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow(
          "Gomoku",                  // window title
          SDL_WINDOWPOS_CENTERED,           // initial x position
          SDL_WINDOWPOS_CENTERED,           // initial y position
          640,                               // width, in pixels
          480,                               // height, in pixels
          SDL_WINDOW_OPENGL                  // flags - see below
      );
  SDL_Delay(3000);
}

SDL_Window::~SDL_Window() {
  SDL_DestroyWindow(window);
  SDL_Quit();
}

