#pragma once
#include <iostream>
#include <map>
#include <string>
#include "Shape.h"
#include "Circle.h"
using namespace std;
class ShapeFactory
{
public:
	ShapeFactory();
	static Shape* getCircle(const string color);
	virtual ~ShapeFactory();

private :
	static map<string, Shape*>* circleMap;
};

