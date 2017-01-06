/*
 * Game.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "Game.h"
#include <algorithm>
#include <iostream>

Game::Game(Board* board, std::vector<Player*> players, Drawer* drawer, BoardDrawer* boardDrawer, EventBus* eventBus, VictoryChecker* victoryChecker) {
  this->board = board;
  this->players = players;
  this->drawer = drawer;
  this->boardDrawer = boardDrawer;
  this->currentPlayerIndex = 0;
  this->isQuitEventHappened = false;
  this->victoryChecker = victoryChecker;
  for (unsigned int i = 0; i < this->players.size(); i++) {
    this->players[i]->setGame(this);
  }
  eventBus->subscribe(this);
}

void Game::start() {
  boardDrawer->draw(this->board, "base.bmp");
}

bool Game::isOver() {
  return isTableFull() || isVictoryState();
}

bool Game::isTableFull() {
  bool result = false;
  int maxStoneCount = this->board->getLogicalWidth() * this->board->getLogicalHeight();
  if (this->stones.size() >= maxStoneCount) {
    result = true;
  }
  return result;
}

bool Game::isVictoryState() {
  return victoryChecker->isVictoryState(&stones);
}

void Game::doNextRound() {
  setNextPlayer();
  Stone* stone = getCurrentPlayer()->getMove();
  std::cout << "Now in a Game doNextRound" << std::endl;
  addStone(stone);
  drawer->draw(stone);
}

void Game::setNextPlayer() {
  if (currentPlayerIndex < players.size() - 1) {
    currentPlayerIndex++;
  } else {
    currentPlayerIndex = 0;
  }
}

Player* Game::getCurrentPlayer() {
  return players[currentPlayerIndex];
}

void Game::addStone(Stone* stone) {
  stones.push_back(stone);
}

bool Game::isLogicalPositionReserved(LogicalPosition logicalPosition) {
  bool result = false;
  for (unsigned int i = 0; !result && i < this->stones.size(); i++) {
    if (this->stones[i]->getLogicalPosition() == logicalPosition) {
      result = true;
    }
  }
  return result;
}

bool Game::isQuitHappened() {
  return isQuitEventHappened;
}

void Game::onEvent(Event* event) {
  if (event->getEventType() == QUIT_GAME) {
    isQuitEventHappened = true;
  }
}

void Game::showWinner() {
  std::vector<LogicalPosition> victoryPositions = victoryChecker->getVictoryPositions(&stones);
  bool showVictoryStones = false;
  while (!isQuitHappened()) {
    boardDrawer->draw(this->board, "base.bmp");
    for (unsigned int i = 0; i < stones.size(); i++) {
      if (showVictoryStones || std::find(victoryPositions.begin(), victoryPositions.end(), stones[i]->getLogicalPosition()) != victoryPositions.end()) {
        drawer->draw(stones[i]);
      }
    }
    showVictoryStones = !showVictoryStones;
  }
}

Game::~Game() {
  // TODO Auto-generated destructor stub
}

