#include <iostream>
#include "Stock.h"
#include "Broker.h"
#include "BuyStock.h"
#include "SellStock.h"
using namespace std;

int main(void)
{
	Stock* abcStock = new Stock();

	BuyStock* buyStockOrder = new BuyStock(abcStock);
	SellStock* sellStockOrder = new SellStock(abcStock);

	Broker* broker = new Broker();
	broker->takeOrder(buyStockOrder);
	broker->takeOrder(sellStockOrder);

	broker->placeOrders();

	delete abcStock;
	delete buyStockOrder;
	delete sellStockOrder;
	delete broker;

	return 0;
}