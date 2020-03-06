/*
 * Player.cpp
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#include "Player.h"

Player::Player(char *name, int x, int y)
: Entity(x,y) {
	// TODO Auto-generated constructor stub
	this->name = name;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

char *Player::getName()
{
	return this->name;
}

