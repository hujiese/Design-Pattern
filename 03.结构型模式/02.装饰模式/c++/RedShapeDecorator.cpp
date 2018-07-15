#include "RedShapeDecorator.h"


RedShapeDecorator::RedShapeDecorator()
{
}

RedShapeDecorator::RedShapeDecorator(Shape* decoratedShape) :ShapeDecorator(decoratedShape)
{
}

void RedShapeDecorator::draw() {
	decoratedShape->draw();
	setRedBorder(decoratedShape);

}

void RedShapeDecorator::setRedBorder(Shape* decoratedShape)
{
	cout << "Border Color: Red" << endl;
}

RedShapeDecorator::~RedShapeDecorator()
{
}
