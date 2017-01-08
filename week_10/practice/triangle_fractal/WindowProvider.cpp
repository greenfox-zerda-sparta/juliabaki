#include "WindowProvider.h"

WindowProvider::WindowProvider(int lenght, int height) {
  this->quit = false;
  this->mouse_event_happened = false;
  SDL_Init(SDL_INIT_EVERYTHING);
  window = SDL_CreateWindow("SDL2 Triangle Fractal", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, lenght, height, 0);
  renderer = SDL_CreateRenderer(window, -1, 0);

  SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0.6);
  SDL_RenderClear(renderer);
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderPresent(renderer);
}

WindowProvider::~WindowProvider() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

void WindowProvider::run() {
  while (!quit) {
    SDL_WaitEvent(&event);
    switch (event.type) {
    case SDL_QUIT:
      quit = true;
      break;
    case SDL_MOUSEBUTTONDOWN:
      mouse_event_happened = true;
      quit = true;
      break;
    }
    render();
  }
}

void WindowProvider::render() {
  SDL_RenderPresent(renderer);
}

SDL_Renderer* WindowProvider::getRender(){
  return renderer;
}

bool WindowProvider::is_mouse_event_happened(){
  return mouse_event_happened;
}
