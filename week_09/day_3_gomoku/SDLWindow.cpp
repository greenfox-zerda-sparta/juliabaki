#include "SDLWindow.h"

SDL_Window::SDL_Window(int width, int height) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku",
  SDL_WINDOWPOS_CENTERED,
  SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);

  running = true;

  renderer = SDL_CreateRenderer(window, -1, 0);
  drawer = new Drawer("boss.bmp", renderer);

  drawer->draw_background();
  run();
}

void SDL_Window::mouse_event() {
  int x = event.button.x;
  int y = event.button.y;
  if (x < 72 && y < 72) {
    drawer->draw_image(0, 0, 72, 72);
  }
}

void SDL_Window::run() {
  while (running) {

    if (event.type == SDL_MOUSEBUTTONDOWN) {
      mouse_event();
    }
    if (SDL_PollEvent(&event) != 0) {
      if (event.type == SDL_QUIT) {
        running = false;
        break;
      }
    }
  }
}

SDL_Window::~SDL_Window() {
  delete drawer;
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}
