#include "Circle.h"


Circle::Circle()
{
}

Circle::Circle(int x, int y, int radius, DrawAPI* drawAPI) :x(x), y(y), radius(radius), Shape(drawAPI)
{
}

void Circle::draw()
{
	drawAPI->drawCircle(radius, x, y);

}
Circle::~Circle()
{
	if (drawAPI != NULL)
	{
		delete drawAPI;
		drawAPI = NULL;
	}
}
