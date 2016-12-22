#include "Game.h"

Game::Game(Board* board, Player* player_1, Player* player_2) {
  this->board = board;
  players.push_back(player_1);
  players.push_back(player_2);
  playerIndex = 0;
}

Board* Game::getBoard() {
  return board;
}

Player* Game::getActualPlayer() {
  return players[playerIndex];
}

int Game::getActualPlayerIndex() {
  return playerIndex;
}

void Game::switchPlayer() {
  if (playerIndex > 0) {
    playerIndex--;
  } else {
    playerIndex++;
  }
}

void Game::doRound(int coordinate_x, int coordinate_y) {
  getActualPlayer()->placeStone(coordinate_x, coordinate_y);
  board->fields[coordinate_x][coordinate_y]->setReserved();
  switchPlayer();
}

bool Game::isOver() {
  return false;
}

Game::~Game() {
}

