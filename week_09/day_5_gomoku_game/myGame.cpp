#include "myGame.h"

myGame::myGame(Board* board, Player* player_1, Player* player_2) {
  this->board = board;
  players.push_back(player_1);
  players.push_back(player_2);
  playerIndex = 0;
}

Board* myGame::getBoard() {
  return board;
}

Player* myGame::getActualPlayer() {
  return players[playerIndex];
}

int myGame::getActualPlayerIndex() {
  return playerIndex;
}

void myGame::switchPlayer() {
  if (playerIndex > 0) {
    playerIndex--;
  } else {
    playerIndex++;
  }
}

void myGame::doRound(int coordinate_x, int coordinate_y) {
  getActualPlayer()->placeStone(coordinate_x, coordinate_y);
  board->fields[coordinate_x][coordinate_y]->setReserved();
  switchPlayer();
}

bool myGame::isOver() {
  return false;
}

myGame::~myGame() {
}

