#include <iostream>
#include <string>
#include "ChatRoom.h"
#include "User.h"
using namespace std;

int main(void)
{
	User* robert = new User("Robert");
	User* john = new User("John");

	robert->sendMessage("Hi! John!");
	john->sendMessage("Hello! Robert!");

	delete robert;
	delete john;

	return 0;
}