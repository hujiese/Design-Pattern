#include "ShapeDecorator.h"


ShapeDecorator::ShapeDecorator()
{
}

ShapeDecorator::ShapeDecorator(Shape* decoratedShape) :decoratedShape(decoratedShape)
{
}

void ShapeDecorator::draw()
{
	decoratedShape->draw();
}

ShapeDecorator::~ShapeDecorator()
{
	if (decoratedShape != NULL)
	{
		delete decoratedShape;
		decoratedShape = NULL;
	}
}
