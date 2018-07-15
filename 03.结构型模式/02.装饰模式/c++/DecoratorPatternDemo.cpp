#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "RedShapeDecorator.h"
using namespace std;

int main(void)
{
	Shape* circle = new Circle();

	Shape* redCircle = new RedShapeDecorator(new Circle());

	Shape* redRectangle = new RedShapeDecorator(new Rectangle());
	cout << "Circle with normal border" << endl;
	circle->draw();

	cout << endl;

	cout << "Circle of red border" << endl;
	redCircle->draw();

	cout << endl;
	cout << "Rectangle of red border" << endl;
	redRectangle->draw();
	return 0;
}