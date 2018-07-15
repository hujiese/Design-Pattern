#pragma once
#include "Shape.h"
#include <iostream>
class ShapeDecorator :
	public Shape
{
public:
	ShapeDecorator();
	ShapeDecorator(Shape* decoratedShape);
	virtual void draw();
	virtual ~ShapeDecorator();

protected:
	Shape* decoratedShape;
};

