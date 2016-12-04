#include "GameInputOutput.h"

#include <iostream>

GameInputOutput::GameInputOutput() {
  this->actualGuessNumber = 0;
}

GameInputOutput::~GameInputOutput() {
}

void GameInputOutput::printResult(int roundCount, int BullsCount, int CowsCount) {
  std::cout << "Round: " << roundCount << " ";
  std::cout << "Bulls: " << BullsCount << " ";
  std::cout << "Cows: " << CowsCount << std::endl;
}

void GameInputOutput::askUserForGuessNumber() {
  std::cout << "Your guess: " << std::endl;
  std::cin >> actualGuessNumber;
}

int GameInputOutput::getActualGuessNumber() {
  return actualGuessNumber;
}

void GameInputOutput::printUserWin() {
  std::cout << "Congratulations: You win!" << std::endl;
}

void GameInputOutput::printGameOver(const std::vector<int>& secret_number) {
  std::cout << "Game over!" << std::endl;
  std::cout << "Secret number: ";
  printSecretNumber(secret_number);
  std::cout << std::endl;
}

void GameInputOutput::printSecretNumber(const std::vector<int>& secret_number) {
  unsigned int size = secret_number.size();
  for (unsigned int i = 0; i < size; i++) {
    std::cout << secret_number[i];
  }
}
