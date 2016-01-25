/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: ahun0442
 */
#include "StringController.h"
#include <iostream>
#include <string>
using namespace std;

StringController :: StringController()
{
	this-> name = "Alex";
}

void StringController :: setName(string name)
{
	this->name = name;
}
string StringController :: getName()
{
	return this->name;
}
void StringController :: start()
{
	cout << "there are " << name.length() << " letters in my name" << endl;
	cout << name.at(0) << endl;
	cout << name.substr(1,2) << endl;
	cout << name.substr(3) << endl;
	cout << "type in your name" << endl;
	string tempName;
	cin >> tempName;
	if (!tempName.empty())
	{

		if (name.compare(tempName) == 0)
		{
			cout << "Your name is the same as mine" << endl;
		}
		else
		{
			cout << "Your name is different" << endl;
		}
		cout << "Your name is " << tempName << endl;

	}
	else
	{
	cout << "you did not type anything :( next time type something" << endl;
	}

}



