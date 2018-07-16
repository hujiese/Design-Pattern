#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Employee
{
public:
	explicit Employee();
	Employee(string name, string dept, int sal);
	void add(Employee* e);
	void remove(Employee* e);
	list<Employee *>* getSubordinates() const;
	string toString() const;
	virtual ~Employee();

private:
	string name;
	string dept;
	int salary;
	list<Employee *>* subordinates;
};

