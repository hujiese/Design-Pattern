#include "SellStock.h"


SellStock::SellStock()
{
}

SellStock::SellStock(Stock* abcStock) :abcStock(abcStock)
{
}

void SellStock::execute()
{
	abcStock->sell();
}

SellStock::~SellStock()
{
	if (abcStock != NULL)
	{
		delete abcStock;
		abcStock = NULL;
	}
}
