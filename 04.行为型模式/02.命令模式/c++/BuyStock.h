#pragma once
#include "Order.h"
#include "Stock.h"
class BuyStock :
	public Order
{
public:
	explicit BuyStock();
	BuyStock(Stock* abcStock);
	void execute();
	virtual ~BuyStock();

private:
	Stock* abcStock;
};

