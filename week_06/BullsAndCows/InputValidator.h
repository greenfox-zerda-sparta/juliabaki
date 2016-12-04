
#ifndef INPUTVALIDATOR_H_
#define INPUTVALIDATOR_H_

#include <string>
#include <vector>

class InputValidator {
private:
  unsigned int validLength;

  bool containsOnlyDigits(std::string input);
  bool hasRepeatedCharacters(std::string input);
  bool startsWithZero(std::string input);
  bool isValidlength(std::string input);

public:
  InputValidator(int validLength);
  ~InputValidator();
  bool isValid(std::string input);
};

#endif /* INPUTVALIDATOR_H_ */
