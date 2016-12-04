#include "GuessNumber.h"

GuessNumber::GuessNumber(){}

GuessNumber::~GuessNumber(){}

void GuessNumber::setGuessNumber(int guess_number){
  vector.push_back(guess_number / 1000 % 10);
  vector.push_back(guess_number / 100 % 10);
  vector.push_back(guess_number / 10 % 10);
  vector.push_back(guess_number % 10);
}
