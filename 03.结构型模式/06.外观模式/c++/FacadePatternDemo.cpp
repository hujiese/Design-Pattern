#include <iostream>
#include "ShapeMaker.h"
using namespace std;

int main(void)
{
	ShapeMaker* shapeMaker = new ShapeMaker();

	shapeMaker->drawCircle();
	shapeMaker->drawRectangle();
	shapeMaker->drawSquare();

	delete shapeMaker;
	return 0;
}