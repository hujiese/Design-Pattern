#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <iostream>
#include <list>
#include <string>
#include "Observer.h"
using namespace std;

class Subject
{
public:
	Subject();
	void setMsg(const string msg);
	void addAttach(Observer* observer);
	virtual ~Subject();

private:
	list<Observer *> *observers;

	void notifyAll(const string msg);
};

#endif