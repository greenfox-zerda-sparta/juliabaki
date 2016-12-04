#include "Game.h"

Game::Game(int rounds) {
  this->bullsCounter = 0;
  this->cowsCounter = 0;
  this->rounds = rounds;
  this->roundCount = 1;
  this->userWin = false;
}

Game::~Game() {
}

void Game::doRound() {
  guessNumber = gameInputOutput.askUserForGuessNumber();
  countBulls();
  countCows();
  gameInputOutput.printResult(roundCount, getBullsCount(), getCowsCount());
  userWin = isUserWin();
  roundCount++;
  resetGuessNumberAndCounters();
}

void Game::countBulls() {
  unsigned int secret_number_size = secretNumber.vector.size();
  for (unsigned int i = 0; i < secret_number_size; i++) {
    if (secretNumber.vector[i] == guessNumber[i]) {
      this->bullsCounter++;
    }
  }
}

void Game::countCows() {
  unsigned int size = secretNumber.vector.size();
  for (unsigned int i = 0; i < size; i++) {
    for (unsigned int j = 0; j < size; j++) {
      if (secretNumber.vector[i] == guessNumber[j] && i != j) {
        this->cowsCounter++;
      }
    }
  }
}

int Game::getBullsCount() {
  return bullsCounter;
}

int Game::getCowsCount() {
  return cowsCounter;
}

bool Game::isUserWin() {
  return bullsCounter == secretNumber.vector.size();
}

void Game::resetGuessNumberAndCounters() {
  guessNumber.clear();
  cowsCounter = 0;
  bullsCounter = 0;
}

bool Game::isOver() {
  bool result = false;
  if (userWin) {
    gameInputOutput.printUserWin();
    result = true;
  } else if (roundCount > rounds) {
    gameInputOutput.printGameOver(secretNumber.vector);
    result = true;
  }
  return result;
}
