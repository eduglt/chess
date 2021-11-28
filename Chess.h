#ifndef CHESS_H
#define CHESS_H

#include "Turn.h"
#include "Piece.h"

#include <vector>

using std::vector;

struct Chess
{
public:
	Piece board[8][8];
	unsigned char white[8][8];
	vector<Turn> turns;
public:
	Chess();
	Chess(Chess const &other);
	//Chess(vector<Turn> turns);
public:
	vector<Turn> GetValidTurns(Position pos, unsigned numTurns);
	bool QueryTurn(Turn const &turn);
	bool ApplyTurn(Turn const &turn);
	bool PopTurn(unsigned num);
	bool PopTurn();
	unsigned GetCurrentTurn() { return 0; };
};

#endif // CHESS_H
