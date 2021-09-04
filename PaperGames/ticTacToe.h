#ifndef PRJ_TICTACTOE_H_
#define PRJ_TICTACTOE_H_
#include "paperGames.h"
namespace project
{
	class TicTacToe :public PaperGame
	{
		//char pieces[9] = { '1', '2', '3','4','5','6','7','8','9' };
		char pieces[3][3] = { '1', '2', '3','4','5','6','7','8','9' };
		char player = 'X';
	public:
		TicTacToe();
		void drawBoard(std::ostream& os) const;
		void drawLine(std::ostream& os) const;
		void drawPieces(std::ostream& os, char left, char middle, char right) const;
		void drawUnderLine(std::ostream& os) const;
		void input();
		void togglePlayer();

	};
}
#endif // !PRJ_TICTACTOE_H_
