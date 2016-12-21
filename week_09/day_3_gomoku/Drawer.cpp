#include "Drawer.h"

Drawer::Drawer(std::string picture_name, SDL_Renderer* renderer) {
  this->picture_name = picture_name;
  this->renderer = renderer;
  load_image();
}

void Drawer::draw_background() {
  SDL_SetRenderDrawColor(renderer, 230, 230, 250, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}

void Drawer::load_image() {
  image = SDL_LoadBMP(picture_name.c_str());
}

void Drawer::draw_image(int position_x, int position_y, int side_x, int side_y) {
  SDL_Rect rect = { position_x, position_y, side_x, side_y };
  texture = SDL_CreateTextureFromSurface(renderer, image);
  SDL_RenderCopy(renderer, texture, NULL, &rect);
  SDL_RenderPresent(renderer);
}

void Drawer::draw_map(std::vector<std::vector<bool>>& vector) {
  for (unsigned int i = 0; i < vector.size(); i++) {
    for (unsigned int j = 0; j < vector.size(); j++) {
      draw_image(j * 37, i * 37, 37, 37);
    }
  }
}

Drawer::~Drawer() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyTexture(texture);
  SDL_FreeSurface(image);
}
