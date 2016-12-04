
#ifndef GAME_H_
#define GAME_H_

#include "SecretNumber.h"
#include "GuessNumber.h"
#include "GameInputOutput.h"
#include <vector>


class Game {
private:
  unsigned int bullsCounter;
  unsigned int cowsCounter;
  int rounds;
  int roundCount;
  bool userWin;
  SecretNumber secretNumber;
  GuessNumber guessNumber;
  GameInputOutput gameInputOutput;

public:
  Game(int rounds);
  ~Game();

  void doRound();

  void countBulls();
  void countCows();

  int getBullsCount();
  int getCowsCount();

  bool isUserWin();

  void resetGuessNumberAndCounters();

  bool isOver();
};

#endif /* GAME_H_ */
