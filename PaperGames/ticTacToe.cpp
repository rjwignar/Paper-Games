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
	}
	void TicTacToe::input()
	{
		int selection = -1;
		do
		{
			selection = getInt(0, 8, "Select a number position to place your piece on: ", nullptr, true);
			if (pieces[selection / 3][selection % 3] != 'X' && pieces[selection / 3][selection % 3] != 'O')
				pieces[selection / 3][selection % 3] = this->player;
			else
				cout << "Spot already occupied! Enter a different position: ";
		} while (selection == -1 || (pieces[selection / 3][selection % 3] != this->player));
		togglePlayer();
	}
	void TicTacToe::togglePlayer()
	{
		this->player == 'X' ? this->player = 'O' : this->player = 'X';
	}

	bool TicTacToe::checkWinner()
	{
		bool ok = false;

		return ok;
	}
	bool TicTacToe::checkDiagonals()
	{
		bool ok = false;

		return ok;
	}
	bool TicTacToe::checkHorizontals()
	{
		bool ok = false;
		for (int i = 0; i < height && ok == false; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (pieces[i][j] != this->player)
					break;
				if (j == width - 1)
					ok = true;
			}
		}
		return ok;
	}
	bool TicTacToe::checkVerticals()
	{
		bool ok = false;
		for (int i = 0; i < width && ok == false; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (pieces[j][i] != this->player)
					break;
				if (j == height - 1)
					ok = true;
			}
		}
		return ok;
	}
}