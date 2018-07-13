#pragma once
#include <iostream>
using namespace std;

class SingleLazyObject
{
public:
	static SingleLazyObject* getInstance();
	void showMessage();
	virtual ~SingleLazyObject();

private:
	SingleLazyObject();
	static SingleLazyObject* instance;
};