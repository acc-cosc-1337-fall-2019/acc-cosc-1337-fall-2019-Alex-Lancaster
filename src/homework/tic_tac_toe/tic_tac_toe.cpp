
//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() ||
		check_diagonal_win())
	{
		set_winner();
		return true;
	}
	if (check_board_full())
	{
		winner = "C";
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

void TicTacToe::display_base_board(TicTacToe& board)
{
	if (board.pegs.size() == 16)
	{
		for (int i = 1; i < 8; i += 4)
		{
			std::cout << i << " | " << i + 1 << " | " << i + 2 << " | " << i + 3 << "\n";
		}
		for (int i = 9; i < 16; i += 4)
		{
			std::cout << i << " |" << i + 1 << " |" << i + 2 << " |" << i + 3 << "\n";
		}
	}

	if (board.pegs.size() == 9)
	{
		for (int i = 1; i < 9; i += 3)
		{
			std::cout << i << "|" << i + 1 << "|" << i + 2 << "\n";
		}
	}

}


string TicTacToe::get_player() const
{
	return next_player;
}

string TicTacToe::get_winner() const
{
	return winner;
}


void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	if (game_over())
	{
		for (int i = 0; i < pegs.size(); i++)
		{
			pegs[i] = " ";
		}
	}
}

void TicTacToe::set_winner()
{

	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

std::istream& operator>>(std::istream& in, TicTacToe& board)
{ 
	int pos;
	cout << "\nEnter for " << board.get_player() << ": ";
	in >> pos;
	cout << "\n";
	board.mark_board(pos);
	return in;
}

std::ostream& operator<<(std::ostream& out, TicTacToe& board)
{ 
	std::size_t board_size = board.pegs.size();

	if (board_size == 9)
	{
		for (std::size_t i = 0; i < 9; i += 3)
		{
			out << board.pegs[i] << "|" << board.pegs[i + 1] << "|" << board.pegs[i + 2] << "\n";
		}
		return out;
	}

	if (board_size == 16)
	{
		for (std::size_t i = 0; i < 16; i += 4)
		{
			out << board.pegs[i] << "|" << board.pegs[i + 1] << "|" << board.pegs[i + 2]
				<< "|" << board.pegs[i + 3] << "\n";
		}
		return out;
	}

	return out;

}