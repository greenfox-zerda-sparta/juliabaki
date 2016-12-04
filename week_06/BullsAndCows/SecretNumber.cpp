#include "SecretNumber.h"
#include <random>
#include <chrono>
#include <array>
#include <algorithm>

SecretNumber::SecretNumber() {
  generateSecretNumberWithoutRepeating();
}

SecretNumber::~SecretNumber() {
}

void SecretNumber::generateSecretNumberWithoutRepeating(){
  std::array<int,10> possible_digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::shuffle (possible_digits.begin(), possible_digits.end(), std::default_random_engine(seed));
  int digit = 0;
  for(int i = 0; i < 4; i++){
    digit = possible_digits[i];
    if(vector.empty() && digit == 0){
      digit = possible_digits[i + 1];
    } else {
      vector.push_back(digit);
    }
  }
}
