#include "ProxyImage.h"


ProxyImage::ProxyImage()
{
}

ProxyImage::ProxyImage(string fileName) :fileName(fileName)
{
}

void ProxyImage::display()
{
	if (realImage == NULL){
		realImage = new RealImage(fileName);
	}
	realImage->display();
}

ProxyImage::~ProxyImage()
{
	if (realImage != NULL)
	{
		delete realImage;
		realImage = NULL;
	}
}
