#include <iostream>
#include <list>
#include <string>
#include "Subject.h"
#include "F_Observer.h"
#include "S_Observer.h"
#include "T_Observer.h"
using namespace std;

int main(void)
{
	F_Observer *fObserver = new F_Observer();
	S_Observer *sObserver = new S_Observer();
	T_Observer *tObserver = new T_Observer();
	Subject *subject = new Subject();
	subject->addAttach(fObserver);
	subject->addAttach(sObserver);
	subject->addAttach(tObserver);
	subject->setMsg("msg change");

	delete fObserver;
	delete sObserver;
	delete tObserver;
	delete subject;
	return 0;
}