#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>
#include <iostream>

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();

  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  TCPsocket server = SDLNet_TCP_Open(&ip); //listening
  TCPsocket client;

  const char* text = "You are connected. Enter 'q' for finish";
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      SDLNet_TCP_Send(client, text, 100);
      char client_text[100];

      while(client_text[0] != 'q'){
        SDLNet_TCP_Recv(client, client_text, 100);
        std::cout << client_text;
      }

      SDLNet_TCP_Close(client);
      break;
    }
  }
  SDL_Quit();
  return 0;
}
