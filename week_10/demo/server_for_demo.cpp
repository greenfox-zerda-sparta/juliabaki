#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>
#include <iostream>

int main(int argc, char *argv[]) {
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  TCPsocket server = SDLNet_TCP_Open(&ip);
  TCPsocket client;

  bool running = 1;
  const char* text = "You are connected. Enter 'q' for finish";

  while (running) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      SDLNet_TCP_Send(client, text, 100);
      char client_text[100];

      while (client_text[0] != 'q') {
        SDLNet_TCP_Recv(client, client_text, 100);
        std::cout << client_text << std::endl;
        SDLNet_TCP_Send(client, client_text, 100);
      }
      SDLNet_TCP_Close(client);
      break;
    }
  }
  SDLNet_TCP_Close(server);
  SDLNet_Quit();
  return 0;
}
