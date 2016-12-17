#include <iostream>
#include "SDL2/SDL.h"
#include "draw.h"

int drawLines(draw& d, SDL_Renderer* renderer, int x_null, int x_max, int y_null, int y_max) {
  int size = x_max - x_null;
  int step = size / 3;

  d.MoveTo(x_null + step, y_null);
  d.DrawTo(renderer, x_null + step, y_max);

  d.MoveTo(x_max - step, y_null);
  d.DrawTo(renderer, x_max - step, y_max);

  d.MoveTo(x_null, y_null + step);
  d.DrawTo(renderer, x_max, y_null + step);

  d.MoveTo(x_null, y_max - step);
  d.DrawTo(renderer, x_max, y_max - step);

  if (size > 10) {
    drawLines(d, renderer, x_null + step, x_max - step, y_null, y_null + step);
    drawLines(d, renderer, x_null, x_null + step, y_null + step, y_max - step);
    drawLines(d, renderer, x_max - step, x_max, y_null + step, y_max - step);
    drawLines(d, renderer, x_null + step, x_max - step, y_max - step, y_max);
  }
  return size;
}

int main(int argc, char ** argv) {
  bool quit = false;
  SDL_Event event;

  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Window* window = SDL_CreateWindow("SDL2 Fractal",
  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, 0);

  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);

  while (!quit) {

    SDL_WaitEvent(&event);

    switch (event.type) {
    case SDL_QUIT:
      quit = true;
      break;
    }

    SDL_SetRenderDrawColor(renderer, 255, 255, 50, 50); //háttér színe 255, 255, 50, 50 = sárga

    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 80); //vonal színe
    draw d;

    drawLines(d, renderer, 0, 600, 0, 600);

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

  }
  SDL_RenderPresent(renderer);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
