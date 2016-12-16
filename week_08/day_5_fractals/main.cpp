#include <iostream>
#include "SDL2/SDL.h"
#include "draw.h"

int drawLines(draw d, SDL_Renderer* renderer, int size) {
  int x = size / 3;

  d.MoveTo(1 * x, 0 * x);
  d.DrawTo(renderer, 1 * x, 3 * x);

  d.MoveTo(2 * x, 0 * x);
  d.DrawTo(renderer, 2 * x, 3 * x);

  d.MoveTo(0 * x, x);
  d.DrawTo(renderer, 3 * x, 1 * x);

  d.MoveTo(0 * x, 2 * x);
  d.DrawTo(renderer, 3 * x, 2 * x);

  size = x;
  if(size > 0){
    drawLines(d, renderer, size);
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

    int size = 600;
    drawLines(d, renderer, size);

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    SDL_RenderPresent(renderer);
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
