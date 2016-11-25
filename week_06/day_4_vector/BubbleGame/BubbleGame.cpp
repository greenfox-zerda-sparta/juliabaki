#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Table.h"
#include "Bubble.h"
#include "Game.h"

using namespace std;

int main() {
  //Bubble Game!!!!
  //Create a class template that has the values and methods to operate our bubble game!
  //Our bubble game has a fix 10*10 square map, where our newly generated bubbles move in constant direction
  //they move with predefined x-y coordinates, which they take in their constructor
  //If they "hit" the wall multiply the correct direction "vector" with -1
  //The game has 10 bubbles
  //the bubbles start from random x-y coordinates, and can move 0-3 unit maximum in each direction
  //You have to run the games for 10 rounds
  //In each round the bubble move from their spot to the next spot pointed with its direction vector
  //After 10 rounds print how many times did the balls collide, and how many times did they hit the wall

  Table* table = new Table(10, 10);

  Game game(10, table);
  while(!game.isOver()){
    game.print();
    cout << endl << endl;
    game.doRound();
    cout << game.getCollisionCount() << endl;
  }

  cout << "Sum: " << game.getCollisionCount() << endl;

  delete table;

/*
  srand (time(NULL));

  Table* table = new Table(10, 10);
  int x = rand() % 10;
  cout << x << endl;
  int y = rand() % 10;
  cout << y << endl;
  Bubble bubble_1(x, y, 3, 0, table);

  cout << bubble_1.getPositionX() << " " << bubble_1.getPositionY() << endl;
  bubble_1.move();
  cout << bubble_1.getPositionX() << " " << bubble_1.getPositionY() << endl;
  bubble_1.move();
  cout << bubble_1.getPositionX() << " " << bubble_1.getPositionY() << endl;
  bubble_1.move();
  cout << bubble_1.getPositionX() << " " << bubble_1.getPositionY() << endl;
  bubble_1.move();
  cout << bubble_1.getPositionX() << " " << bubble_1.getPositionY() << endl;


  delete table;
  */
  return 0;
}
