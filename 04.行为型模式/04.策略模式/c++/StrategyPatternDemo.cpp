#include <iostream>
#include "OperationAdd.h"
#include "OperationMultiply.h"
#include "OperationSubstract.h"
#include "Context.h"
using namespace std;

int main(void)
{
	Context *context = new Context(new OperationAdd());
	cout << "10 + 5 = " << context->executeStrategy(10, 5) << endl;

	context = new Context(new OperationSubstract());
	cout << "10 - 5 = " << context->executeStrategy(10, 5) << endl;

	context = new Context(new OperationMultiply());
	cout << "10 * 5 = " << context->executeStrategy(10, 5) << endl;

	return 0;
}