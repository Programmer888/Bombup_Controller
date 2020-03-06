/*
 * Game.cpp
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#include "Game.h"

#define WIDTH 8
#define HEIGHT 8
#define PLAYER_COUNT 1

Game::Game() {
	// TODO Auto-generated constructor stub
	this->lvl = new Level(WIDTH, HEIGHT, PLAYER_COUNT);
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::update()
{
	this->lvl->update(this->controller1, this->controller2);

	/*while(1)
	{
		this->lvl->update(this->controller1, this->controller2);
		//if fpga ready pin = HIGH then
		//lvl.draw();
	}*/

}

void Game::setController1(Controller *controller)
{
	this->controller1 = controller;
}

void Game::setController2(Controller *controller)
{
	this->controller2 = controller;
}
