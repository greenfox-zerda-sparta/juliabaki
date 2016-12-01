
#include "SecretNumber.h"
#include <stdlib.h>
#include <time.h>

SecretNumber::SecretNumber() {
  generateSecretNumber();
}

SecretNumber::~SecretNumber() {
}

void SecretNumber::printVector(){
  unsigned int size = secret_number.size();
  for(unsigned int i = 0; i < size; i++){
    std::cout << secret_number[i];
  }
}

void SecretNumber::generateSecretNumber(){
  int random_number;
  srand (time(NULL));
  random_number = rand() % 9000 + 1000;
  secret_number.push_back(random_number / 1000 % 10);
  secret_number.push_back(random_number / 100 % 10);
  secret_number.push_back(random_number / 10 % 10);
  secret_number.push_back(random_number % 10);
}
