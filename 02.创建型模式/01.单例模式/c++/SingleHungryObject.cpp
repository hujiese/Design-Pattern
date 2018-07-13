#include "SingleHungryObject.h"


SingleHungryObject::SingleHungryObject()
{
}

SingleHungryObject* SingleHungryObject::getInstance()
{
	return instance;
}

void SingleHungryObject::showMessage()
{
	cout << "Hello World!" << endl;
}
SingleHungryObject::~SingleHungryObject()
{
	if (instance != NULL)
	{
		delete instance;
		instance = NULL;
	}
}
