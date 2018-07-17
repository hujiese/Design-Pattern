#ifndef __OBSERVER_H
#define __OBSERVER_H
#pragma once
#include "Subject.h"
class Subject;
class Observer
{
public:
	Observer();
	virtual void update() = 0;
	virtual ~Observer();

protected:
	Subject* subject;
};

#endif