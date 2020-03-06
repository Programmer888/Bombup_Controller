/*
 * Player.h
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Entity.h"

class Player : public Entity {
public:
	Player(char*, int, int);
	virtual ~Player();
	char *getName();
private:
	char *name;
};

#endif /* PLAYER_H_ */
