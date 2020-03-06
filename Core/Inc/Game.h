/*
 * Game.h
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#ifndef GAME_H_
#define GAME_H_

#include "Controller.h"
#include "Level.h"

class Game {
public:
	Game();
	virtual ~Game();
	void update();
	void setController1(Controller *);
	void setController2(Controller *);
private:
	Controller *controller1;
	Controller *controller2;
	Level *lvl;
};



#endif /* GAME_H_ */
