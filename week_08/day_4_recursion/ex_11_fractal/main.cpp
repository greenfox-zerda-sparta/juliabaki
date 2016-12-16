#include <iostream>
#include "SDL2/SDL.h"
#include "draw.h"

int drawLine_x(draw d, SDL_Renderer* renderer, int x){
  d.MoveTo(0, 200);
  int y = 200;
  int size = 200;
  x = x + size;
  d.DrawTo(renderer, x, y);
  if(x < 600){
    x = drawLine_x(d, renderer, x);
  }
  return x;
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
    drawLine_x(d, renderer, 200);
    // vonal húzása
    /*d.DrawTo(renderer, 200, 0);
    d.DrawTo(renderer, 200, 200);
    d.DrawTo(renderer, 0, 200);
    d.DrawTo(renderer, 0, 0);

    for (int i = 0; i < 600; i += 200) {
      d.MoveTo(0 + i, 0);
      d.DrawTo(renderer, 200 + i, 0);
      d.DrawTo(renderer, 200 + i, 200);
      d.DrawTo(renderer, 0 + i, 200);
      d.DrawTo(renderer, 0 + i, 0);
    }
*/
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    SDL_RenderPresent(renderer);
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
