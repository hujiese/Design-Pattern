#include "ShapeFactory.h"


ShapeFactory::ShapeFactory()
{
}

Shape* ShapeFactory::getCircle(const string color)
{
	Shape* circle = NULL;
	map<string, Shape*>::iterator it;
	it = circleMap->find(color);
	if (it == circleMap->end())
	{
		circle = new Circle(color);
		circleMap->insert(pair<string, Shape*>(color, circle));

		cout << "Creating circle of color : " << color << endl;
	}
	else
	{
		circle = it->second;
	}
	return circle;
}

ShapeFactory::~ShapeFactory()
{
	while (!circleMap->empty())
	{
		map<string, Shape*>::iterator it = circleMap->begin();
		Shape* shape = it->second;
		circleMap->erase(it);
		delete shape;
	}
}
