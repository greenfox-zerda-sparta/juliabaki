#include "Game.h"

Game::Game(int rounds) {
  this->BullsCounter = 0;
  this->CowsCounter = 0;
  this->rounds = rounds;
  this->roundCount = 0;
}

Game::~Game() {}

int Game::getBullsCount(){
  return BullsCounter;
}

int Game::getCowsCount(){
  return CowsCounter;
}

void Game::countBulls(){
  unsigned int secret_number_size = secret_number.secret_number.size();
  for(unsigned int i = 0; i < secret_number_size; i++){
    if(secret_number.secret_number[i] == guess_number.guess_number_vector[i]){
      this->BullsCounter++;
    }
  }
}

void Game::countCows(){
  unsigned int secret_number_size = secret_number.secret_number.size();
  unsigned int guess_number_size = guess_number.guess_number_vector.size();
  for(unsigned int i = 0; i < secret_number_size; i++){
    for(unsigned int j = 0; j < guess_number_size; j++){
      if(secret_number.secret_number[i] == guess_number.guess_number_vector[j]
         && secret_number.secret_number[i] != guess_number.guess_number_vector[i]){
        this->CowsCounter++;
      }
    }
  }
}

void Game::doRound(){
  secret_number.printVector();
  std::cout << std::endl;
  int actual_guess_number;
  std::cout << "Your guess: " << std::endl;
  std::cin >> actual_guess_number;
  guess_number.setGuessNumber(actual_guess_number);
  guess_number.printVector();
  std::cout << std::endl;
  countBulls();
  countCows();
  std::cout  << "Bulls: " << getBullsCount() << " ";
  std::cout  << "Cows: " << getCowsCount();
  roundCount++;
}
