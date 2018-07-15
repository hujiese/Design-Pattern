#pragma once
#include "ShapeDecorator.h"
#include <iostream>
using namespace std;

class RedShapeDecorator :
	public ShapeDecorator
{
public:
	RedShapeDecorator();
	RedShapeDecorator(Shape* decoratedShape);
	virtual void draw();
	virtual ~RedShapeDecorator();

private:
	void setRedBorder(Shape* decoratedShape);
};

