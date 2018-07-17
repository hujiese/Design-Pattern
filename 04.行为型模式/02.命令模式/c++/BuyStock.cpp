#include "BuyStock.h"


BuyStock::BuyStock()
{
}

BuyStock::BuyStock(Stock* abcStock) :abcStock(abcStock)
{
}

void BuyStock::execute()
{
	abcStock->buy();
}

BuyStock::~BuyStock()
{
}
