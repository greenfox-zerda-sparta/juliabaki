#ifndef WINDOWPROVIDER_H_
#define WINDOWPROVIDER_H_

#include "SDL2/SDL.h"

class WindowProvider {
private:
  bool quit;
  bool mouse_event_happened;
  SDL_Window* window;
  SDL_Renderer* renderer;
  SDL_Event event;
public:
  WindowProvider(int lenght, int height);
  void run();
  void render();
  bool is_mouse_event_happened();
  SDL_Renderer* getRender();
  ~WindowProvider();
};

#endif /* WINDOWPROVIDER_H_ */
