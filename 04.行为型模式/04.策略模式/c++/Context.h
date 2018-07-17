#pragma once
#include "Strategy.h"

class Context
{
public:
	Context();

	Context(Strategy *strategy);

	int executeStrategy(int num1, int num2);

	virtual ~Context();

private:
	Strategy *strategy;
};

