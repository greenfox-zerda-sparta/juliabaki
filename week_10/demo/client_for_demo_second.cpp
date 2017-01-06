#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>

int main(int argc, char *argv[]) {
  SDLNet_Init();
  IPaddress ip;

  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  TCPsocket client = SDLNet_TCP_Open(&ip);

  char text[100];
  SDLNet_TCP_Recv(client, text, 100);

  const char* client_text = "";

   do {
    std::cout << text << std::endl;
    std::cout << "Write something: " << std::endl;
    std::string input;
    std::getline(std::cin, input);
    client_text = input.c_str();
    SDLNet_TCP_Send(client, client_text, 100);
    SDLNet_TCP_Recv(client, text, 100);
  } while (client_text[0] != 'q');

  SDLNet_TCP_Close(client);
  SDLNet_Quit();
  return 0;
}
