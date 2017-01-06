#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>
#include <iostream>
#include <vector>

struct data {
  TCPsocket socket;
  Uint32 timeout;
  char id;
  data(TCPsocket socket, Uint32 timeout, char id) :
    socket(socket), timeout(timeout), id(id) {}
};

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();

  char curid = 0;
  int player_number = 0;
  bool running = true;
  //char client_text[100];

  char position[2];

  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  std::vector<data> socket_vector;

  TCPsocket server = SDLNet_TCP_Open(&ip); //listening
  SDLNet_SocketSet sockets = SDLNet_AllocSocketSet(3);

  const char* text = "You are connected. Enter 'q' for finish";
  while (running) {
    TCPsocket new_client = SDLNet_TCP_Accept(server);
    if (new_client) {
      if (player_number < 2) {
        SDLNet_TCP_AddSocket(sockets, new_client);
        socket_vector.push_back(data(new_client, SDL_GetTicks(), curid));
        player_number++;
        std::cout << "New connection " << (int)curid << std::endl;
        SDLNet_TCP_Send(new_client, &curid, 1);
        curid++;
      }
    }
    while (SDLNet_CheckSockets(sockets, 0) > 0) {
      for (unsigned int i = 0; i < socket_vector.size(); i++) {
        if (SDLNet_SocketReady(socket_vector[i].socket)) {
          SDLNet_TCP_Recv(socket_vector[i].socket, position, 2);
          std::cout << "received position from client " << i << ": x: " << (int)position[0] << ", y: " << (int)position[1] << std::endl;
          unsigned int otherIndex = (i + 1) % 2;
          std::cout << "sending position to client " << otherIndex << std::endl;
          SDLNet_TCP_Send(socket_vector[otherIndex].socket, position, 2);
        }
      }
    }
  }

  SDLNet_FreeSocketSet(sockets);
  SDLNet_TCP_Close(server);
  SDL_Quit();
  return 0;
}
