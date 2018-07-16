#pragma once
#include "DrawAPI.h"
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape();
	virtual void draw();
	virtual ~Shape();

protected:
	DrawAPI* drawAPI;

	Shape(DrawAPI* drawAPI);
};

