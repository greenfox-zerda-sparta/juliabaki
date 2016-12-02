
#include "GuessNumber.h"

GuessNumber::GuessNumber(){}

GuessNumber::~GuessNumber(){}

void GuessNumber::setGuessNumber(int guess_number){
  vector.push_back(guess_number / 1000 % 10);
  vector.push_back(guess_number / 100 % 10);
  vector.push_back(guess_number / 10 % 10);
  vector.push_back(guess_number % 10);
}

void GuessNumber::printVector(){
  unsigned int size = vector.size();
  for(unsigned int i = 0; i < size; i++){
    std::cout << vector[i];
  }
}

bool GuessNumber::hasRepeatingNumber(){
  bool result = false;
  unsigned int initial_index = 0;
  for(unsigned int i = 0; i < vector.size(); i++){
    if(vector[i] == vector[initial_index] && i != initial_index){
      result = true;
    } else if (i == vector.size() - 1 ){
      initial_index++;
    }
  }
  return result;
}
