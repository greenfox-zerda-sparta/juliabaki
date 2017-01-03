#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "SDL2/SDL.h"

#include <map>
#include <string>

#define ARROW_UP 0
#define ARROW_RIGHT 1
#define ARROW_DOWN 2
#define ARROW_LEFT 3
#define SPACE 4
#define MOUSE_DOWN 5

class GameContext {
private:
  SDL_Window* screen;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  bool keys[6];
  int coordinate_x;
  int coordinate_y;

public:
  int gameover;
  GameContext(unsigned int screen_width, unsigned int screen_height) {
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_CreateWindow("My Game Window",
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, 0);
    renderer = SDL_CreateRenderer(screen, -1, 0);
    reset_keys();
    this->coordinate_x = 0;
    this->coordinate_y = 0;
    this->gameover = 0;
  }
  ~GameContext() {
    for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
      SDL_DestroyTexture(it->second);
    }
    SDL_Quit();
  }

  int getCoordinate_x() {
    return coordinate_x;
  }
  int getCoordinate_y() {
    return coordinate_y;
  }

  void setCoordinate_x(int coordinate_x) {
    this->coordinate_x = coordinate_x;
  }
  void setCoordinate_y(int coordinate_y) {
    this->coordinate_y = coordinate_y;
  }

  void load_file(std::string name) {
    SDL_Surface* result = SDL_LoadBMP(name.c_str());
    SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
    sprites[name] = SDL_CreateTextureFromSurface(renderer, result);
    SDL_FreeSurface(result);
  }
  void draw_sprite(std::string name, int x, int y) {
    SDL_Rect temp;
    temp.x = x;
    temp.y = y;
    temp.w = 37;
    temp.h = 37;
    SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
  }
  void render() {
    SDL_RenderPresent(renderer);
  }
  void reset_keys() {
    for (unsigned int i = 0; i < 6; ++i) {
      keys[i] = false;
    }
  }
  void on_key_down(unsigned int key_code) {
    keys[key_code] = true;
  }

  bool was_key_pressed(unsigned int key_code) {
    return keys[key_code];
  }
};

class Game {
public:
  virtual void init(GameContext& context) = 0;
  virtual void render(GameContext&) = 0;
  virtual ~Game() {
  }
  ;
};

class GameEngine {
private:
  GameContext* context;
  Game* game;

public:
  GameEngine(Game* g, GameContext* context ) {
    this->context = context;
    game = g;
    game->init(*context);
  }
  ~GameEngine() {}

  void run() {
    SDL_Event event;
    SDL_WaitEvent(&event);
    while (event.type != SDL_MOUSEBUTTONDOWN && event.type != SDL_QUIT) {
      SDL_WaitEvent(&event);
    }
    switch (event.type) {
    case SDL_QUIT:
      break;
    case SDL_MOUSEBUTTONDOWN:
      context->on_key_down(MOUSE_DOWN);
      context->setCoordinate_x(event.button.x / 37);
      context->setCoordinate_y(event.button.y / 37);
      break;
    }
  }
};
#endif
