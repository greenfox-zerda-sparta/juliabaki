
#ifndef GAME_H_
#define GAME_H_

#include <vector>
#include "Board.h"
#include "Player.h"

class Game {
private:
  Board* board;
  std::vector<Player*> players;
  int playerIndex;
public:
  Game(Board* board, Player* player_1, Player* player_2);

  Board* getBoard();
  Player* getActualPlayer();
  int getActualPlayerIndex();

  void doRound(int coordinate_x, int coordinate_y);
  void switchPlayer();
  bool isOver();

  ~Game();
};

#endif /* GAME_H_ */
