#include "draw.h"
#include <iostream>
#include "WindowProvider.h"

using namespace std;

void draw_triangle(WindowProvider* windowProvider, draw* d, int line_lenght) {
  if (line_lenght > 1) {
    for (int i = 0; i < 3; i++) {
      d->DrawBy(windowProvider->getRender(), line_lenght);
      d->TurnTo(120);
      draw_triangle(windowProvider, d, line_lenght / 2);
      windowProvider->render();
    }
  }
  return;
}

int main(int argc, char* argv[]) {

  WindowProvider* windowProvider = new WindowProvider(600, 600);
  draw* d = new draw;

  windowProvider->run();

  if(windowProvider->is_mouse_event_happened()){
    draw_triangle(windowProvider, d, 500);
  }

  delete windowProvider;
  delete d;

  return 0;
}
