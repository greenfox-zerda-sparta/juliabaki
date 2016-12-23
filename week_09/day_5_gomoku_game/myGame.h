
#ifndef MYGAME_H_
#define MYGAME_H_

#include <vector>
#include "Board.h"
#include "Player.h"

class myGame {
private:
  Board* board;
  std::vector<Player*> players;
  int playerIndex;
public:
  myGame(Board* board, Player* player_1, Player* player_2);

  Board* getBoard();
  Player* getActualPlayer();
  int getActualPlayerIndex();

  void doRound(int coordinate_x, int coordinate_y);
  void switchPlayer();
  bool isOver();

  ~myGame();
};

#endif /* MYGAME_H_ */
