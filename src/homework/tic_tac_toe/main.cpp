# include "tic_tac_toe.h"

int main() 
{
	TicTacToe board;
	string start;
	string winner;
	int uPosition;
	auto continuePrompt = '1';
	do
	{
		cout << "Welcome to Tic Tac Toe! \n";
		cout << "Positions on the board are as follows:\n";
		cout << " 1 | 2 | 3 " << "\n" << " 4 | 5 | 6 " << "\n" << " 7 | 8 | 9 \n";
		cout << "Will X or O go first? Enter Capital Letter X or O: ";
		cin >> start;
		cout << "\n";
		board.start_game(start);
		board.display_board();

		while (!board.game_over())
		{
			cout << "\nEnter move for " << board.get_player() << ",1-9: ";
			cin >> uPosition;
			board.mark_board(uPosition);
			board.display_board();
		}
		if (board.get_player() == "X")
		{
			winner = "0";
		}
		else
		{
			winner = "X";
		}

		cout << "\nThe Winner is " << winner;
		cout << "\nWould you like to play again? Press 1 for yes, any other to exit: ";
		cin >> continuePrompt;
	} while (continuePrompt == '1');

	return 0;
}