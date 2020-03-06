/*
 * Level.h
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#ifndef LEVEL_H_
#define LEVEL_H_


#include "Object.h"
#include "Entity.h"
#include "Controller.h"
#include "Player.h"

class Level {
public:
	Level(int width, int height, int player_count);
	virtual ~Level();
	void draw(); //send to FPGA
	void update(Controller *controller1, Controller *controller2);
private:
	Entity entities[99];
	Object staticObjects[99];
	int entityCount;
	int staticObjectCount;
	Player *player1;
	Player *player2;
};

#endif /* LEVEL_H_ */
