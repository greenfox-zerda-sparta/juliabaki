/*
 * Drawer.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef DRAWER_H_
#define DRAWER_H_

#include "SDL2/SDL.h"
#include "Drawable.h"
#include <string>

class Drawer {
private:
  SDL_Renderer* renderer;
  SDL_Texture* createTexture(std::string);
  SDL_Rect* createSdlRect(Coordinates topLeftPosition, Coordinates bottomRightPosition);
public:
  Drawer(SDL_Renderer* renderer);
  void draw(Drawable*);
  virtual ~Drawer();
};

#endif /* DRAWER_H_ */
