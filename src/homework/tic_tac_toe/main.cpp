#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{

	TicTacToeManager manager;
	string player = "X";
	string contin = "Y";
	int game_type;

	do
	{
		TicTacToe* board;

		cout << "\nPlay window by (3)x3 or (4)x4: ";
		cin >> game_type;

		if (game_type == 3)
		{
			board = new TicTacToe3();
			cout << "\n";
			board->display_base_board(*board); 
		}
		else
		{
			board = new TicTacToe4();
			cout << "\n";
			board->display_base_board(*board); 
		}


		cout << "\nWill X or O have the first turn?: ";
		cin >> player;
		board->start_game(player);

		while (!board->game_over())
		{
			cin >> *board;
			cout << *board;
		}

		cout << "\nWinner: ";
		cout << board->get_winner() << "\n";

		manager.save_game(*board);

		cout << "\nGame over! Play again? Y/N: ";
		cin >> contin;

	} while (contin == "Y" || contin == "y");

	cout << "History: \n";
	cout << manager;

	return 0;
}