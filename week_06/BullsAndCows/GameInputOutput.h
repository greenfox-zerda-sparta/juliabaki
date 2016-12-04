#ifndef GAMEINPUTOUTPUT_H_
#define GAMEINPUTOUTPUT_H_

#include "SecretNumber.h"

class GameInputOutput {
private:
  int actualGuessNumber;
public:
  GameInputOutput();
  ~GameInputOutput();
  void printResult(int roundCount, int BullsCount, int CowsCount);
  void askUserForGuessNumber();
  int getActualGuessNumber();
  void printUserWin();
  void printGameOver(const std::vector<int>& secretNumber);
  void printSecretNumber(const std::vector<int>& secretNumber);
};

#endif /* GAMEINPUTOUTPUT_H_ */
