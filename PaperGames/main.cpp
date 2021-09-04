#include "commonHelpers.h"
#include "games.h"
#include "paperGames.h"
#include "ticTacToe.h"
using namespace std;
using namespace project;

int main()
{
	//Board Display Testing
	TicTacToe tictac;
	cout << tictac;
	tictac.input();
	cout << tictac;
	return 0;
}
