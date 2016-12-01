
#include "GuessNumber.h"

GuessNumber::GuessNumber(){}

GuessNumber::~GuessNumber(){}

void GuessNumber::setGuessNumber(int guess_number){
  guess_number_vector.push_back(guess_number / 1000 % 10);
  guess_number_vector.push_back(guess_number / 100 % 10);
  guess_number_vector.push_back(guess_number / 10 % 10);
  guess_number_vector.push_back(guess_number % 10);
}

void GuessNumber::printVector(){
  unsigned int size = guess_number_vector.size();
  for(unsigned int i = 0; i < size; i++){
    std::cout << guess_number_vector[i];
  }
}
