#include <iostream>
#include "BinaryObserver.h"
#include "HexaObserver.h"
#include "OctalObserver.h"
#include "Subject.h"
using namespace std;

int main(void)
{
	Subject *subject = new Subject();

	new HexaObserver(subject);
	new OctalObserver(subject);
	new BinaryObserver(subject);

	cout << "First state change: 15" << endl;
	subject->setState(15);
	cout << "Second state change: 10" << endl;
	subject->setState(10);

	delete subject;
	return 0;
}