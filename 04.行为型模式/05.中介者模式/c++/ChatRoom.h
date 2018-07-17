#pragma once
#include <iostream>
#include <string>
#include "User.h"
using namespace std;
class User;

class ChatRoom
{
public:
	ChatRoom();
	static void showMessage(User* user, string message);
	virtual ~ChatRoom();
};

