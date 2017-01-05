/*
 * SdlRendererFactory.cpp
 *
 *  Created on: 2016 dec. 29
 *      Author: juli
 */

#include "SdlRendererFactory.h"

SdlRendererFactory::SdlRendererFactory() {
}

SDL_Renderer* SdlRendererFactory::create(int screenWidth, int screenHeight) {
  SDL_Init(SDL_INIT_VIDEO);
  sdlWindow = SDL_CreateWindow("Game Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screenWidth, screenHeight, 0);
  return SDL_CreateRenderer(sdlWindow, -1, 0);
}

SdlRendererFactory::~SdlRendererFactory() {
  SDL_DestroyWindow(sdlWindow);
}

