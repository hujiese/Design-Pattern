#include "HexaObserver.h"


HexaObserver::HexaObserver(Subject* subject)
{
	this->subject = subject;
	this->subject->attach(this);
}

void HexaObserver::update()
{
	printf("Hexa String: %x\n", subject->getState());
}

HexaObserver::~HexaObserver()
{
}
