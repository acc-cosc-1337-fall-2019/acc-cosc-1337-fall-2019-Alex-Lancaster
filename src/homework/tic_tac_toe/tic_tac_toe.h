#include<string>
#include<vector>
#include<iostream>

#ifndef TIC_TAC_TOE_H //header guard
#define TIC_TAC_TOE_H


using std::string; using::std::vector; using std::ostream; using std::istream;

//h

//represents a single game of tic tac toe.

class TicTacToe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend ostream& operator<<(ostream& out, const TicTacToe& t);
	friend ostream& operator>>(istream& in, TicTacToe& t);


private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_winner();
	vector<string> pegs{ 9, " " }; //initializer
	string next_player;

};

#endif TIC_TAC_TOE_H