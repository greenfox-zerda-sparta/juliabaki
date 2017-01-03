/*
 * Game.h
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#ifndef GAME_H_
#define GAME_H_

#include <vector>
#include "Player.h"
#include "Board.h"
#include "Stone.h"
#include "Drawer.h"
#include "BoardDrawer.h"
#include "LogicalPosition.h"
#include "EventHandler.h"
#include "EventBus.h"
#include "VictoryChecker.h"

class Game : public EventHandler {
private:
  std::vector<Player*> players;
  unsigned int currentPlayerIndex;
  Board* board;
  std::vector<Stone*> stones;
  Drawer* drawer;
  BoardDrawer* boardDrawer;
  bool isQuitEventHappened;
  VictoryChecker* victoryChecker;
  Player* getCurrentPlayer();
  void setNextPlayer();
  void addStone(Stone*);
  bool isTableFull();
public:
  Game(Board*, std::vector<Player*>, Drawer*, BoardDrawer*, EventBus*, VictoryChecker*);
  void start();
  bool isOver();
  void doNextRound();
  bool isLogicalPositionReserved(LogicalPosition);
  bool isVictoryState();
  void showWinner();
  bool isQuitHappened();
  void onEvent(Event*);
  virtual ~Game();
};

#endif /* GAME_H_ */
