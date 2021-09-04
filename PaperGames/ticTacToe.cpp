#include <iostream>
#include "ticTacToe.h"
#include "commonHelpers.h"
using std::endl;
using std::cout;
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
		//os << "  ";
		//os << left;
		//os << "  ";
		//os << "|";
		//os << "  ";
		//os << middle;
		//os << "  ";
		//os << "|";
		//os << "  ";
		//os << right;
		//os << "  ";
		//os << endl;
		//made redundant for now
	}
	void TicTacToe::drawUnderLine(std::ostream& os) const
	{
		os << "_____|_____|_____";
		os << endl;
	}
	void TicTacToe::drawBoard(std::ostream& os) const
	{
		for (int i = 0; i < 3; i++)
		{
			drawLine(os);
			int j = 0;
			while (j < 2)
			{
				os << "  ";
				os << pieces[i][j];
				os << "  |";
				j++;
			}
			os << "  ";
			os << pieces[i][j];
			os << "  ";
			os << endl;
			i < 2 ? drawUnderLine(os) : drawLine(os);
		}
		//drawLine(os);
		//drawPieces(os, pieces[0], pieces[1], pieces[2]);
		//drawUnderLine(os);
		//drawLine(os);
		//drawPieces(os, pieces[3], pieces[4], pieces[5]);
		//drawUnderLine(os);
		//drawLine(os);
		//drawPieces(os, pieces[6], pieces[7], pieces[8]);
		//drawLine(os);
	}
	void TicTacToe::input()
	{
		int selection = 0;
		do
		{
			selection = getInt(0, 9, "Select a number position to place your piece on: ", nullptr, true);
			if (pieces[selection / 3][(selection - 1) % 3] != 'X' && pieces[selection / 3][(selection - 1) % 3] != 'O')
				pieces[selection / 3][(selection - 1) % 3] = this->player;
			else
				cout << "Spot already occupied! Enter a different position: ";
		} while (selection == 0 || (pieces[selection / 3][(selection - 1) % 3] == 'X' || pieces[selection / 3][(selection - 1) % 3] == 'O'));
		togglePlayer();
	}
	void TicTacToe::togglePlayer()
	{
		this->player == 'X' ? this->player = 'O' : this->player = 'X';
	}
}