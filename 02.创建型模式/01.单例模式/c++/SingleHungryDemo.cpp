#include <iostream>
#include "SingleHungryObject.h"

using namespace std;
SingleHungryObject* SingleHungryObject::instance = new SingleHungryObject();

int main(void)
{
	SingleHungryObject* object = SingleHungryObject::getInstance();

	//ÏÔÊ¾ÏûÏ¢
	object->showMessage();

	return 0;
}