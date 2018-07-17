#include "Image.h"
#include <string>
#include <iostream>
#include "RealImage.h"
#include "ProxyImage.h"
using namespace std;

int main(void)
{
	Image* image = new ProxyImage("test_10mb.jpg");

	//图像将从磁盘加载
	image->display();
	cout << endl;
	//图像将不会从磁盘加载
	image->display();

	delete image;

	return 0;
}