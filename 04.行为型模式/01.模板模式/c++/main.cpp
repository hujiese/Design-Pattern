#include <iostream>
#include "Game.h"
#include "Football.h"
#include "Cricket.h"

using namespace std;

int main(void)
{
	Game *game = new Cricket();//¶àÌ¬
	game->play();

	cout << endl;

	game = new Football();
	game->play();

	delete game;
	return 0;
}