
#include "SecretNumber.h"
#include <stdlib.h>
#include <time.h>

SecretNumber::SecretNumber() {
  generateSecretNumber();
}

SecretNumber::~SecretNumber() {
}

void SecretNumber::printVector(){
  unsigned int size = vector.size();
  for(unsigned int i = 0; i < size; i++){
    std::cout << vector[i];
  }
}

void SecretNumber::generateSecretNumber(){
  int random_number;
  srand (time(NULL));
  random_number = rand() % 9000 + 1000;
  vector.push_back(random_number / 1000 % 10);
  vector.push_back(random_number / 100 % 10);
  vector.push_back(random_number / 10 % 10);
  vector.push_back(random_number % 10);
}

bool SecretNumber::hasRepeatingNumber(){
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
