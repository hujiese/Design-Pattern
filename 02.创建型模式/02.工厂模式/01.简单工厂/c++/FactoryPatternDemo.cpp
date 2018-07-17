#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "ShapeFactory.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ShapeFactory* shapeFactory = new ShapeFactory();

	//获取 Circle 的对象，并调用它的 draw 方法
	Shape* shape1 = shapeFactory->getShape("CIRCLE");

	//调用 Circle 的 draw 方法
	shape1->draw();

	//获取 Rectangle 的对象，并调用它的 draw 方法
	Shape* shape2 = shapeFactory->getShape("RECTANGLE");

	//调用 Rectangle 的 draw 方法
	shape2->draw();

	//获取 Square 的对象，并调用它的 draw 方法
	Shape* shape3 = shapeFactory->getShape("SQUARE");

	//调用 Square 的 draw 方法
	shape3->draw();

	delete shapeFactory;
	delete shape1;
	delete shape2;
	delete shape3;

	return 0;
}