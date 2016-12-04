#include "InputValidator.h"
#include <ctype.h>
#include <iostream>

InputValidator::InputValidator(int validLength) {
  this->validLength = validLength;
}

InputValidator::~InputValidator() {
}

bool InputValidator::isValid(std::string input) {
  bool result = true;
  if (!containsOnlyDigits(input) || !isValidlength(input) || startsWithZero(input)){
    result = false;
    std::cout << "Please provide a 4 digit number! " << std::endl;
  }
  return result;
}

bool InputValidator::containsOnlyDigits(std::string input) {
  bool result = true;
  for (unsigned int i = 0; i < input.length(); i++) {
    if (!isdigit(input[i])) {
      result = false;
    }
  }
  return result;
}

bool InputValidator::startsWithZero(std::string input) {
  bool result = false;
  if (input[0] == '0') {
    result = true;
  }
  return result;
}

bool InputValidator::hasRepeatedCharacters(std::string input) {
  bool result = false;
  unsigned int initial_index = 0;
  for (unsigned int i = 0; i < input.length(); i++) {
    if (input[i] == input[initial_index] && i != initial_index) {
      result = true;
    } else if (i == input.length() - 1) {
      initial_index++;
    }
  }
  return result;
}

bool InputValidator::isValidlength(std::string input) {
  bool result = false;
  if (input.length() == validLength) {
    result = true;
  }
  return result;
}
