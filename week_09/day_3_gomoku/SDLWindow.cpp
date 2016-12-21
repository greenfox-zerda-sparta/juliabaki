#include "SDLWindow.h"

SDL_Window::SDL_Window(int width, int height) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku",
  SDL_WINDOWPOS_CENTERED,
  SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);

  draw_background();
  draw_image();
  run();
}

void SDL_Window::run() {
  int running = 1;
  while (running) {
    if (SDL_PollEvent(&event) != 0) {
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

void SDL_Window::draw_image() {
  image = SDL_LoadBMP("boss.bmp");
  SDL_Rect dstrect = { 5, 5, 72, 72 };
  texture = SDL_CreateTextureFromSurface(renderer, image);
  SDL_RenderCopy(renderer, texture, NULL, &dstrect);
  SDL_RenderPresent(renderer);
}

SDL_Window::~SDL_Window() {
  SDL_DestroyTexture(texture);
  SDL_FreeSurface(image);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}
