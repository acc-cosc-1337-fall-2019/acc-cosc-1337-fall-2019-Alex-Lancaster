#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{

	string player = "X";
	string contin = "Y";
	unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	int game_type;

	do
	{
		unique_ptr<TicTacToe> board;

		if (game_type == 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else
		{
			board = std::make_unique<TicTacToe4>();
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

		manager->save_game(*board);

		cout << "\nGame over! Play again? Y/N: ";
		cin >> contin;

	} while (contin == "Y" || contin == "y");

	cout << "History: \n";
	cout << *manager;

	return 0;
}