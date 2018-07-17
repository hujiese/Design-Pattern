#include "BinaryObserver.h"


BinaryObserver::BinaryObserver(Subject* subject)
{
	this->subject = subject;
	this->subject->attach(this);
}

void BinaryObserver::update()
{
	printf("Binary String: %d \n", subject->getState());
}

BinaryObserver::~BinaryObserver()
{
}
