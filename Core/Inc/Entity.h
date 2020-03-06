/*
 * Entity.h
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#ifndef ENTITY_H_
#define ENTITY_H_

/*enum Direction { 	Up = int{0, -1},
					Down = int{0, 1},
					Left = int{-1, 0},
					Right = int{0, 1}
				};*/

enum class Direction { Up, Down, Left, Right };

class Entity {
public:
	Entity();
	Entity(int,int);
	virtual ~Entity();
	int getX();
	int getY();
	void move(Direction dir);
	//void update() = 0;
private:
	int x;
	int y;
};

#endif /* ENTITY_H_ */
