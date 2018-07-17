#pragma once
#include "Order.h"
#include "Stock.h"
class SellStock :
	public Order
{
public:
	SellStock();
	SellStock(Stock* abcStock);
	void execute();
	virtual ~SellStock();

private:
	Stock* abcStock;
};

