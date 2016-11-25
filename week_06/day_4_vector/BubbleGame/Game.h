
#ifndef GAME_H_
#define GAME_H_

#include "Table.h"
#include "Bubble.h"
#include <vector>

class Game {
private:
    std::vector<Bubble> bubbles;
    Table* table;
    int collisionCount;
    int rounds;
    int roundCount;

public:
    Game(int rounds, Table* table);
    ~Game();
    int getCollisionCount();
    void createBubble(Table* table, int times);
    void doRound();
    void moveBubbles();
    void checkCollisions();
    bool isOver();
    void print();
};

#endif /* GAME_H_ */
