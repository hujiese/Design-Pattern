#pragma once
#include <iostream>
using namespace std;

class SingleHungryObject
{
public:
	static SingleHungryObject* getInstance();
	void showMessage();
	virtual ~SingleHungryObject();

private:
	SingleHungryObject();
	static SingleHungryObject* instance;
};

