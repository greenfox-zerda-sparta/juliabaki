#include "SDLWindow.h"

SDL_Window::SDL_Window(int width, int height) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku",
  SDL_WINDOWPOS_CENTERED,
  SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);

  running = true;

  renderer = SDL_CreateRenderer(window, -1, 0);

  map = new Map(19);

  drawer = new Drawer("base.bmp", renderer);
  drawer_x = new Drawer("x.bmp", renderer);

  drawer->draw_background();
  drawer->draw_map(map->map_vector);

  run();
}

void SDL_Window::mouse_event() {
  int x = event.button.x;
  int y = event.button.y;
  if (x < 37 && y < 37) {
    drawer_x->draw_image(0, 0, 37, 37);
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
  delete drawer_x;
  delete map;
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}
