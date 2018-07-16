#include "Shape.h"


Shape::Shape()
{
}

Shape::Shape(DrawAPI* drawAPI) :drawAPI(drawAPI)
{
}

void Shape::draw()
{

}

Shape::~Shape()
{
	if (drawAPI != NULL)
	{
		delete drawAPI;
		drawAPI = NULL;
	}
}
