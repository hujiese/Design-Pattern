#include <iostream>
#include "Circle.h"
#include "GreenCircle.h"
#include "RedCircle.h"

using namespace std;

int main(void)
{
	Shape* redCircle = new Circle(100, 100, 10, new RedCircle());
	Shape* greenCircle = new Circle(100, 100, 10, new GreenCircle());

	redCircle->draw();
	greenCircle->draw();

	delete redCircle;
	delete greenCircle;
	return 0;
}