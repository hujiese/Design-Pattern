#include "SingleLazyObject.h"


SingleLazyObject::SingleLazyObject()
{
}

SingleLazyObject* SingleLazyObject::getInstance()
{
	if (instance == NULL)
	{
		instance = new SingleLazyObject();
	}
	return instance;
}

void SingleLazyObject::showMessage()
{
	cout << "Hello World!" << endl;
}

SingleLazyObject::~SingleLazyObject()
{
}
