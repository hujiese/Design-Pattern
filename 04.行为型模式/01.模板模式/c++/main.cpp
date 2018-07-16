#include <iostream>
#include "Game.h"
#include "Football.h"
#include "Cricket.h"

using namespace std;

int main(void)
{
	Game *game = new Cricket();
	game->play();

	cout << endl;

	game = new Football();
	game->play();

	return 0;
}