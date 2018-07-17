#include "ChatRoom.h"


ChatRoom::ChatRoom()
{
}

void ChatRoom::showMessage(User* user, string message)
{
	cout << "Sat Jan  8 20:07 : 41 2018 [" + user->getName() + "] : " + message << endl;
}

ChatRoom::~ChatRoom()
{
}
