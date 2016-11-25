#include "Game.h"
#include "Table.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

Game::Game(int rounds, Table* table) {
  this->table = table;
  this->collisionCount = 0;
  this->rounds = rounds;
  this->roundCount = 0;
  createBubble(table, 10);
}

Game::~Game() {
}

int Game::getCollisionCount(){
  return collisionCount;
}

void Game::createBubble(Table* table, int times) {
  srand (time(NULL));
  for (int i = 0; i < times; i++) {
    int x = rand() % 10;
    int y = rand() % 10;
    int v = rand() % 3;
    int z;
    if (v != 0) {
      z = 0;
    } else {
      z = rand() % 3;
    }
    bubbles.push_back(Bubble(x, y, v, z, table));
  }
}

void Game::doRound() {
  moveBubbles();
  roundCount++;
  checkCollisions();
}

void Game::moveBubbles() {
  unsigned int size = bubbles.size();
  for (unsigned int i = 0; i < size; i++) {
    bubbles[i].move();
  }
}

bool Game::isOver(){
  return roundCount >= rounds;
}

void Game::checkCollisions(){
  int counter = 0;
  unsigned int size = bubbles.size();
  for(unsigned int i = 0; i < size; i++ ){
    for(unsigned int j = 0; j < size; j++){
      if(i != j && bubbles[i].getPositionX() == bubbles[j].getPositionX() && bubbles[i].getPositionY() == bubbles[j].getPositionY()){
        counter++;
      }
    }
  }
  counter /= 2;
  this->collisionCount += counter;
}

void Game::print() {
  for (int i = 0; i < table->getWidth(); i++) {
    for (int j = 0; j < table->getHeight(); j++) {
      unsigned int k = 0;
      for (; k < bubbles.size(); k++) {
        if (bubbles[k].getPositionX() == i && bubbles[k].getPositionY() == j) {
          cout << "X";
          break;
        }
      }
      if (k >= bubbles.size()) {
        cout << "_";
      }
    }
    cout << endl;
  }
}
