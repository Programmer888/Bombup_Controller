/*
 * Controller.cpp
 *
 *  Created on: 18 Feb 2020
 *      Author: youri
 */

#include "Controller.h"

Controller::Controller() {
	// TODO Auto-generated constructor stub

}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

void Controller::setButtonPressed(Button btn)
{
	this->btn = btn;
}

Button Controller::getButtonPressed()
{
	return this->btn;
}


