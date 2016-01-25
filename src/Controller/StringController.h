/*
 * StringController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: ahun0442
 */

#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_
#include <string>
using namespace std;

class StringController
{
private:
	string name;

public:
	StringController();
	void setName(string name);
	string getName();
	void start();

};




#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
