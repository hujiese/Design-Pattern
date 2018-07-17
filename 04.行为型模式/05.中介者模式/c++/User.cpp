#include "User.h"


User::User()
{
}

User::User(string name) :name(name)
{
}

string User::getName() const
{
	return name;
}

void User::setName(const string name)
{
	this->name = name;
}

void User::sendMessage(const string message)
{
	ChatRoom::showMessage(this, message);
}

User::~User()
{
}
