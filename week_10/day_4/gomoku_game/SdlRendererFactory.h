/*
 * SdlRendererFactory.h
 *
 *  Created on: 2016 dec. 29
 *      Author: juli
 */

#ifndef SDLRENDERERFACTORY_H_
#define SDLRENDERERFACTORY_H_

#include "SDL2/SDL.h"

class SdlRendererFactory {
private:
  SDL_Window* sdlWindow = NULL;
public:
  SdlRendererFactory();
  SDL_Renderer* create(int screenWidth, int screenHeight);
  virtual ~SdlRendererFactory();
};

#endif /* SDLRENDERERFACTORY_H_ */
