/*
 * Drawer.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "Drawer.h"

Drawer::Drawer(SDL_Renderer* renderer) {
  this->renderer = renderer;
}

void Drawer::draw(Drawable* drawable) {
  SDL_RenderCopy(renderer, createTexture(drawable->getImageFile()), NULL, createSdlRect(drawable->getTopLeftPosition(), drawable->getBottomRightPosition()));
  SDL_RenderPresent(renderer);
}

SDL_Texture* Drawer::createTexture(std::string imageFile) {
  SDL_Surface* sdlSurface = SDL_LoadBMP(imageFile.c_str());
  return SDL_CreateTextureFromSurface(renderer, sdlSurface);
}

SDL_Rect* Drawer::createSdlRect(Coordinates topLeftPosition, Coordinates bottomRightPosition) {
  SDL_Rect* temp = new SDL_Rect();
  temp->x = topLeftPosition.x;
  temp->y = topLeftPosition.y;
  temp->w = 37;
  temp->h = 37;
  return temp;
}

Drawer::~Drawer() {
  // TODO Auto-generated destructor stub
}

