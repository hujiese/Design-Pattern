#pragma once
#include "Order.h"
#include <list>
using namespace std;
class Broker
{
public:
	Broker();
	void takeOrder(Order* order);
	void placeOrders();
	virtual ~Broker();

private:
	list<Order *>* orderList;
};

