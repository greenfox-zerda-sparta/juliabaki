/*
 * Player.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: juli
 */

#include "Player.h"

Player::Player(StoneType stoneType) {
  this->stoneType = stoneType;
}

void Player::setGame(Game* game) {
  this->game = game;
}

Player::~Player() {
}

