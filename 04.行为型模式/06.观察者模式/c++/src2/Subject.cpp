#include "Subject.h"


Subject::Subject()
{
	observers = new list<Observer *>();
}

void Subject::setMsg(const string msg)
{
	notifyAll(msg);
}

void Subject::addAttach(Observer* observer)
{
	observers->push_back(observer);
}

void Subject::notifyAll(const string msg)
{
	for (Observer *observer : *observers) {
		observer->update(msg);
	}
}

Subject::~Subject()
{
	if (observers != NULL)
	{
		delete observers;
		observers = NULL;
	}
}
