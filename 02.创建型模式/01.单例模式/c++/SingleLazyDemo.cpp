#include <iostream>
#include "SingleLazyObject.h"

using namespace std;
SingleLazyObject* SingleLazyObject::instance = NULL;

int main(void)
{
	SingleLazyObject* object = SingleLazyObject::getInstance();

	//ÏÔÊ¾ÏûÏ¢
	object->showMessage();

	delete object;
	return 0;
}