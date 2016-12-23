#include "Player.h"

Player::Player() {}

Stone* Player::placeStone(int coordinate_x, int coordinate_y){
  return new Stone(coordinate_x, coordinate_y);
}

Player::~Player() {}

