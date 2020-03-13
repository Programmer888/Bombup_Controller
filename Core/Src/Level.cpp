/*
 * Level.cpp
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#include "Level.h"
#include "Player.h"

Level::Level(int width, int height, int player_count)
{
	this->entityCount = 0;
	this->staticObjectCount = 0;

	this->player1 = new Player("player1", 200, 200);
	//this->player1->move();
	this->player2 = new Player("player2", 0 ,0);
	//this->player2->move(0,0);
	this->spi_instance = new SPIConnect();

}

Level::~Level()
{
	// TODO Auto-generated destructor stub
}

void Level::update(Controller *controller1, Controller *controller2)
{
	switch(controller1->getButtonPressed())
	{
		case Button::Up:
			this->player1->move(Direction::Up);
		break;
		case Button::Down:
			this->player1->move(Direction::Down);
		break;
		case Button::Left:
			this->player1->move(Direction::Left);
		break;
		case Button::Right:
			this->player1->move(Direction::Right);
		break;
	}

	switch(controller1->getButtonPressed())
		{
			case Button::Up:
				this->player2->move(Direction::Up);
			break;
			case Button::Down:
				this->player2->move(Direction::Down);
			break;
			case Button::Left:
				this->player2->move(Direction::Left);
			break;
			case Button::Right:
				this->player2->move(Direction::Right);
			break;
		}

	/*for(int i = 0; i < this->entityCount; i++)
	{

	}

	for(int i = 0; i < this->staticObjectCount; i++)
	{

	}*/
	//spi_write(9);
	spi_instance->write(0, this->player1->getX());
	//spi_instance->write(7, this->player1->getY());
}

void Level::draw()
{
	for(int i = 0; i < this->entityCount; i++)
	{

	}

	for(int i = 0; i < this->staticObjectCount; i++)
	{

	}
}



