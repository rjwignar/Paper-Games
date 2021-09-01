#include <iostream>
#include "ticTacToe.h"
using std::endl;

namespace project
{
	TicTacToe::TicTacToe() :PaperGame("Tic-Tac-Toe")
	{
		std::cout << PaperGame::title();
		std::cout << std::endl;
	}
	void TicTacToe::drawLine(std::ostream& os) const
	{
		os << "     |     |     ";
		os << endl;
	}
	void TicTacToe::drawPieces(std::ostream& os, char left, char middle, char right) const
	{
		os << "  ";
		os << left;
		os << "  ";
		os << "|";
		os << "  ";
		os << middle;
		os << "  ";
		os << "|";
		os << "  ";
		os << right;
		os << "  ";
		os << endl;
	}
	void TicTacToe::drawUnderLine(std::ostream& os) const
	{
		os << "_____|_____|_____";
		os << endl;
	}
	void TicTacToe::drawBoard(std::ostream& os) const
	{
		drawLine(os);
		drawPieces(os, pieces[0], pieces[1], pieces[2]);
		drawUnderLine(os);
		drawLine(os);
		drawPieces(os, pieces[3], pieces[4], pieces[5]);
		drawUnderLine(os);
		drawLine(os);
		drawPieces(os, pieces[6], pieces[7], pieces[8]);
		drawLine(os);
	}
}