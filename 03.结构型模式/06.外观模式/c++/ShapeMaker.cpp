#include "ShapeMaker.h"


ShapeMaker::ShapeMaker()
{
	circle = new Circle();
	rectangle = new Rectangle();
	square = new Square();
}

void ShapeMaker::drawCircle()
{
	circle->draw();
}

void ShapeMaker::drawRectangle()
{
	rectangle->draw();
}

void ShapeMaker::drawSquare()
{
	square->draw();
}

ShapeMaker::~ShapeMaker()
{
	if (circle != NULL)
	{
		delete circle;
		circle = NULL;
	}

	if (rectangle != NULL)
	{
		delete rectangle;
		rectangle = NULL;
	}

	if (square != NULL)
	{
		delete square;
		square = NULL;
	}
}
