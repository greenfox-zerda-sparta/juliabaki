#include <iostream>
#include <string>
#include "GameInputOutput.h"
#include "InputValidator.h"

GameInputOutput::GameInputOutput() {
  inputValidator = new InputValidator(4);
}

GameInputOutput::~GameInputOutput() {
  delete inputValidator;
  inputValidator = NULL;
}

void GameInputOutput::printResult(int roundCount, int BullsCount, int CowsCount) {
  std::cout << "Round: " << roundCount << " ";
  std::cout << "Bulls: " << BullsCount << " ";
  std::cout << "Cows: " << CowsCount << std::endl;
}

std::vector<int> GameInputOutput::askUserForGuessNumber() {
  std::string guessString;
  do {
    guessString = "";
    std::cout << "Your guess: " << std::endl;
    std::cin >> guessString;
  } while (!inputValidator->isValid(guessString));
  return convertGuessStringToVector(guessString);
}

std::vector<int> GameInputOutput::convertGuessStringToVector(std::string guessString) {
  std::vector<int> result;
  for (unsigned int i = 0; i < guessString.length(); i++) {
    result.push_back(guessString[i] - '0');
  }
  return result;
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
