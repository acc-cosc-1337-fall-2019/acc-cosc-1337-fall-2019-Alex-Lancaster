//h
#ifndef TIC_TAC_TOE_MANAGER_H // Header guard
#define TIC_TAC_TOE_MANAGER_H

#include <vector>
#include "tic_tac_toe.h"
#include <memory>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::vector;
using std::unique_ptr;

class TicTacToeManager
{
public:
	void save_game(unique_ptr<TicTacToe>& game);
	friend ostream& operator<<(ostream& out, const TicTacToeManager& m);
	const std::vector<std::unique_ptr<TicTacToe>>& get_games();
	void get_winner_totals(int& x, int& o, int& c);
	std::unique_ptr<TicTacToe> get_game(int game_type);


private:
	void update_winner_count(string winner);
	vector<TicTacToe> games;
	vector<unique_ptr<TicTacToe>> board;
	int x_wins{ 0 }; 
	int o_wins{ 0 }; 
	int ties{ 0 };
};


#endif