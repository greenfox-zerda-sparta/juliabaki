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
  askUserForGuessNumber();
  countBulls();
  countCows();
  printResult();
  userWin = isUserWin();
  roundCount++;
  resetGuessNumberAndCounters();
}

void Game::askUserForGuessNumber() {
  int actual_guess_number;
  std::cout << "Your guess: " << std::endl;
  std::cin >> actual_guess_number;
  guess_number.setGuessNumber(actual_guess_number);
}

void Game::countBulls() {
  unsigned int secret_number_size = secret_number.vector.size();
  for (unsigned int i = 0; i < secret_number_size; i++) {
    if (secret_number.vector[i] == guess_number.vector[i]) {
      this->bullsCounter++;
    }
  }
}

void Game::countCows() {
  unsigned int size = secret_number.vector.size();
  for (unsigned int i = 0; i < size; i++) {
    for (unsigned int j = 0; j < size; j++) {
      if (secret_number.vector[i] == guess_number.vector[j] && i != j
          && secret_number.vector[i] == guess_number.vector[j]) {
        this->cowsCounter++;
      }
    }
  }
}

void Game::printResult() {
  secret_number.printVector();
  std::cout << "Round: " << roundCount << " ";
  std::cout << "Bulls: " << getBullsCount() << " ";
  std::cout << "Cows: " << getCowsCount() << std::endl;
}

int Game::getBullsCount() {
  return bullsCounter;
}

int Game::getCowsCount() {
  return cowsCounter;
}

bool Game::isUserWin() {
  return bullsCounter == secret_number.vector.size();
}

void Game::resetGuessNumberAndCounters() {
  guess_number.vector.clear();
  cowsCounter = 0;
  bullsCounter = 0;
}

bool Game::isOver() {
  bool result = false;
  if (userWin) {
    std::cout << "Congratulations: You win!" << std::endl;
    result = true;
  } else if (roundCount > rounds) {
    std::cout << "Game over!" << std::endl;
    result = true;
  }
  return result;
}
