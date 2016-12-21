#include "SDLWindow.h"

SDL_Window::SDL_Window(int width, int height) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku",
  SDL_WINDOWPOS_CENTERED,
  SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);

  draw_background();
  run();
}

SDL_Window::~SDL_Window() {
  SDL_DestroyWindow(window);
  SDL_Quit();
}

void SDL_Window::run() {
  int running = 1;
  while (running) {
    while (SDL_PollEvent(&event) != 0) {
      if (event.type == SDL_QUIT) {
        running = 0;
        break;
      }
    }
  }
}

void SDL_Window::draw_background() {
  renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawColor(renderer, 230, 230, 250, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}
