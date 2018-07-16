#pragma once
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

class ShapeMaker
{
public:
	ShapeMaker();
	void drawCircle();
	void drawRectangle();
	void drawSquare();
	virtual ~ShapeMaker();

private:
	Shape* circle;
	Shape* rectangle;
	Shape* square;
};

