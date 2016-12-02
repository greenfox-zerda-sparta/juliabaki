
#ifndef GAME_H_
#define GAME_H_

#include "SecretNumber.h"
#include "GuessNumber.h"
#include <vector>

class Game {
private:
  unsigned int bullsCounter;
  unsigned int cowsCounter;
  int rounds;
  int roundCount;
  bool userWin;
  SecretNumber secret_number;
  GuessNumber guess_number;

public:
  Game(int rounds);
  ~Game();

  void doRound();
  void askUserForGuessNumber();

  void countBulls();
  void countCows();

  void printResult();
  int getBullsCount();
  int getCowsCount();

  bool isUserWin();

  void resetGuessNumberAndCounters();

  bool isOver();
};

#endif /* GAME_H_ */
