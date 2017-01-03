#include "Player.h"

Player::Player() {}

Stone* Player::placeStone(int coordinate_x, int coordinate_y, int type){
  return new Stone(coordinate_x, coordinate_y, type);
}

Player::~Player() {}

