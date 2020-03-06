/*
 * Controller.h
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#ifndef INCLUDE_CONTROLLER_H_
#define INCLUDE_CONTROLLER_H_

enum class Button { Up, Down, Left, Right, Bomb, Wall, None };

class Controller {
public:
	Controller();
	virtual ~Controller();
	void setButtonPressed(Button btn);
	Button getButtonPressed();

private:
	Button btn;
};

#endif /* INCLUDE_CONTROLLER_H_ */
