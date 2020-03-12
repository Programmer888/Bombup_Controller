/*
 * Entity.cpp
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#include "Entity.h"

//Values to add to the x and y coordinates

Entity::Entity() {
	// TODO Auto-generated constructor stub

}

Entity::Entity(int x, int y) {
	this->x = x;
	this->y = y;
}

Entity::~Entity() {
	// TODO Auto-generated destructor stub
}

int Entity::getX()
{
	return this->x;
}

int Entity::getY()
{
	return this->y;
}

void Entity::move(Direction dir)
{
	int distance = 10;
	switch(dir)
	{
		case Direction::Up:
			this->y -= distance;
		case Direction::Down:
			this->y += distance;
		case Direction::Left:
			this->x -= distance;
		case Direction::Right:
			this->x += distance;
	}
	//this->x += dir[0];
	//this->y += dir[1];
}

