/*
 * Drawer.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "Drawer.h"
#include <iostream>

Drawer::Drawer(SDL_Renderer* renderer) {
  this->renderer = renderer;
}

void Drawer::draw(Drawable* drawable) {
  std::cout << "In DRAWER!" << std::endl;
  SDL_RenderCopy(renderer, createTexture(drawable->getImageFile()), NULL, createSdlRect(drawable->getTopLeftPosition(), drawable->getBottomRightPosition()));
  std::cout << "In drawer, TopLeftPosition x: " << drawable->getTopLeftPosition().x  << " y: " << drawable->getTopLeftPosition().y << std::endl;
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

