#ifndef GAMEINPUTOUTPUT_H_
#define GAMEINPUTOUTPUT_H_

#include "InputValidator.h"
#include "SecretNumber.h"

class GameInputOutput {
private:
  std::vector<int> actualGuessNumber;
  InputValidator* inputValidator;
  std::vector<int> convertGuessStringToVector(std::string guessString);
public:
  GameInputOutput();
  ~GameInputOutput();
  void printResult(int roundCount, int BullsCount, int CowsCount);
  std::vector<int> askUserForGuessNumber();
  void printUserWin();
  void printGameOver(const std::vector<int>& secretNumber);
  void printSecretNumber(const std::vector<int>& secretNumber);
};

#endif /* GAMEINPUTOUTPUT_H_ */
