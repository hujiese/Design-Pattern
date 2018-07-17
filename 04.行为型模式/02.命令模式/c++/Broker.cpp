#include "Broker.h"


Broker::Broker()
{
	orderList = new list<Order *>();
}
void Broker::takeOrder(Order* order)
{
	orderList->push_back(order);
}

void Broker::placeOrders()
{
	for (Order* order : *orderList) {
		order->execute();
	}
	orderList->empty();
}

Broker::~Broker()
{
	if (orderList != NULL)
	{
		delete orderList;
		orderList = NULL;
	}
}
