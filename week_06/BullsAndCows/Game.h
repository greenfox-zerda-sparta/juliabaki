
#ifndef GAME_H_
#define GAME_H_

#include "SecretNumber.h"
#include "GuessNumber.h"
#include <vector>

class Game {
private:
  int BullsCounter;
  int CowsCounter;
  int rounds;
  int roundCount;
  SecretNumber secret_number;
  GuessNumber guess_number;
public:
  Game(int rounds);
  ~Game();
  int getBullsCount();
  int getCowsCount();
  void countBulls();
  void countCows();
  void doRound();
  bool isOver();
};

#endif /* GAME_H_ */
