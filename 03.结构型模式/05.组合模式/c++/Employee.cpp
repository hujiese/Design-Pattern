#include "Employee.h"


Employee::Employee()
{
}

Employee::Employee(string name, string dept, int sal) :name(name), dept(dept), salary(sal)
{
	subordinates = new list<Employee *>();
}

void Employee::add(Employee* e)
{
	subordinates->push_back(e);
}

void Employee::remove(Employee* e)
{
	subordinates->remove(e);
}

list<Employee *>* Employee::getSubordinates() const
{
	return subordinates;
}

string Employee::toString() const
{
	return ("Employee :[ Name : " + name + ", dept : " + dept + ", salary :" + to_string(salary) + " ]");
}

Employee::~Employee()
{
	if (subordinates != NULL)
	{
		delete subordinates;
		subordinates = NULL;
	}
}
