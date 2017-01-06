#include "Game.h"
#include "HumanPlayer.h"
#include "SdlRendererFactory.h"
#include "BoardDrawer.h"
#include "MouseClickHumanMoveLogicalPositionProvider.h"
#include <iostream>
#include "NetworkReportingPlayer.h"
#include "NetworkHumanMoveLogicalPositionProvider.h"
#include "ServerConnection.h"

const unsigned int FIELD_SIZE = 37;
const unsigned int LOGICAL_WIDTH = 5;
const unsigned int LOGICAL_HEIGHT = 5;
const unsigned int SCREEN_WIDTH = FIELD_SIZE * LOGICAL_WIDTH;
const unsigned int SCREEN_HEIGHT = FIELD_SIZE * LOGICAL_HEIGHT;


int main(int argc, char *argv[]) {

  // Game
  // Board
  // Stone
  // Player
  // Round

  // 1. create new Game
  // 2. create new Board
  // 3. create 2 Players
  // 4. start Game
  // 5. while (!Game->isOver()) game->nextRound()

  SdlRendererFactory* sdlRendererFactory = new SdlRendererFactory();
  SDL_Renderer* sdlRenderer = sdlRendererFactory->create(SCREEN_WIDTH, SCREEN_HEIGHT);
  Drawer* drawer = new Drawer(sdlRenderer);
  BoardDrawer* boardDrawer = new BoardDrawer(drawer, FIELD_SIZE);
  EventBus* eventBus = new EventBus();
  std::vector<Player*> players;
  ServerConnection* serverConnection = new ServerConnection();
  NetworkHumanMoveLogicalPositionProvider* networkHumanMoveLogicalPositionProvider = new NetworkHumanMoveLogicalPositionProvider(serverConnection);
  MouseClickHumanMoveLogicalPositionProvider* mouseClickHumanMoveLogicalPositionProvider = new MouseClickHumanMoveLogicalPositionProvider(FIELD_SIZE, eventBus);
  StoneType homeStoneType = BLACK;
  StoneType opponentStoneType = WHITE;
  if (serverConnection->getClientIndex() > 0) {
    homeStoneType = WHITE;
    opponentStoneType = BLACK;
  }
  NetworkReportingPlayer* homePlayer = new NetworkReportingPlayer(mouseClickHumanMoveLogicalPositionProvider, homeStoneType, serverConnection);
  HumanPlayer* opponentPlayer = new HumanPlayer(networkHumanMoveLogicalPositionProvider, opponentStoneType);
  if (serverConnection->getClientIndex() == 0) {
    players.push_back(homePlayer);
    players.push_back(opponentPlayer);
  } else {
    players.push_back(opponentPlayer);
    players.push_back(homePlayer);
  }
  Board* board = new Board(LOGICAL_WIDTH, LOGICAL_HEIGHT);
  VictoryChecker* victoryChecker = new VictoryChecker(5);
  Game* game = new Game(board, players, drawer, boardDrawer, eventBus, victoryChecker);

  game->start();
  while (!game->isQuitHappened() && !game->isOver()) {
    game->doNextRound();
  }
  if (game->isVictoryState()) {
    game->showWinner();
  }

  delete game;
  delete board;
  for (unsigned int i = 0; i < players.size(); delete players[i++]);
  delete eventBus;
  delete boardDrawer;
  delete drawer;
  SDL_DestroyRenderer(sdlRenderer);
  delete sdlRendererFactory;
  delete serverConnection;
  SDL_Quit();
  return 0;
}
