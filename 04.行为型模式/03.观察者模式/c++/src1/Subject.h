#ifndef __SUBJECT_H__
#define __SUBJECT_H__
#pragma once
#include <list>
#include <vector>
#include "Observer.h"
using namespace std;
class Observer;
class Subject
{
public:
	Subject();
	int getState();
	void setState(int const state);
	void attach(Observer* observer);
	void notifyAllObservers();
	virtual ~Subject();

private:
	list<Observer *> *observers;
	int state;
};

#endif