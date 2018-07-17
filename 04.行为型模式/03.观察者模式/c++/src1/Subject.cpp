#include "Subject.h"


Subject::Subject()
{
	observers = new list<Observer *>();
}

int Subject::getState() {
	return state;
}

void Subject::setState(int const state) {
	this->state = state;
	notifyAllObservers();
}

void Subject::attach(Observer* observer){
	observers->push_back(observer);
}

void Subject::notifyAllObservers(){
	for (Observer *observer : *observers) {
		observer->update();
	}
}

Subject::~Subject()
{
	if (observers != NULL)
	{
		delete observers;
	}
}
