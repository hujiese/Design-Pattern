#pragma once
#include "Image.h"
#include <string>
#include <iostream>
#include "RealImage.h"
using namespace std;

class ProxyImage :
	public Image
{
public:
	ProxyImage();
	ProxyImage(string fileName);
	virtual void display();
	virtual ~ProxyImage();

private:
	RealImage* realImage;
	string fileName;
};

