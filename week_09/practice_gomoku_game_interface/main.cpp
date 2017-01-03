#include "Game.h"
#include "HumanPlayer.h"
#include "SdlRendererFactory.h"
#include "BoardDrawer.h"
#include "MouseClickHumanMoveLogicalPositionProvider.h"
#include <iostream>

const unsigned int FIELD_SIZE = 37;
const unsigned int LOGICAL_WIDTH = 19;
const unsigned int LOGICAL_HEIGHT = 19;
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

  // EventHandler
  // EventHandler eh = new EventHandler();
  // eh->subscribe();

  SdlRendererFactory* sdlRendererFactory = new SdlRendererFactory();
  SDL_Renderer* sdlRenderer = sdlRendererFactory->create(SCREEN_WIDTH, SCREEN_HEIGHT);
  Drawer* drawer = new Drawer(sdlRenderer);
  BoardDrawer* boardDrawer = new BoardDrawer(drawer, FIELD_SIZE);
  EventBus* eventBus = new EventBus();
  std::vector<Player*> players;
  MouseClickHumanMoveLogicalPositionProvider* mouseClickHumanMoveLogicalPositionProvider = new MouseClickHumanMoveLogicalPositionProvider(FIELD_SIZE, eventBus);
  players.push_back(new HumanPlayer(mouseClickHumanMoveLogicalPositionProvider, BLACK));
  players.push_back(new HumanPlayer(mouseClickHumanMoveLogicalPositionProvider, WHITE));
  Board* board = new Board(LOGICAL_WIDTH, LOGICAL_HEIGHT);
  VictoryChecker* victorChecker = new VictoryChecker(5);
  Game* game = new Game(board, players, drawer, boardDrawer, eventBus, victorChecker);

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
  SDL_Quit();
  return 0;
}
