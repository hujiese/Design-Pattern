#include "OctalObserver.h"


OctalObserver::OctalObserver(Subject* subject)
{
	this->subject = subject;
	this->subject->attach(this);
}

void OctalObserver::update()
{
	printf("Octal String: %o\n", subject->getState());
}

OctalObserver::~OctalObserver()
{
}
