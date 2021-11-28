#include "Chess.h"
#include "Turn.h"
#include "Piece.h"

#include <iostream>
#include <vector>

using std::vector;
using std::cerr;
using std::endl;
using std::max;

Chess::Chess()
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			board[i][j] = Piece::Empty;//Piece::Empty;
	for (int i = 0; i < 8; i++)
	{
		board[i][1] = Piece::Pawn;
		board[i][6] = Piece::Pawn;
	}

	board[0][0] = Piece::Rook;
	board[7][0] = Piece::Rook;
	board[0][7] = Piece::Rook;
	board[7][7] = Piece::Rook;

	board[1][0] = Piece::Knight;
	board[6][0] = Piece::Knight;
	board[1][7] = Piece::Knight;
	board[6][7] = Piece::Knight;

	board[2][0] = Piece::Bishop;
	board[5][0] = Piece::Bishop;
	board[2][7] = Piece::Bishop;
	board[5][7] = Piece::Knight;

	board[3][0] = Piece::Queen;
	board[4][0] = Piece::King;
	board[3][7] = Piece::Queen;
	board[4][7] = Piece::King;

	for (int i = 0; i < 8; i++)
	{
		white[i][0] = 1;
		white[i][1] = 1;
	}

	turns.clear();

	return;
}

Chess::Chess(Chess const &other)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			board[i][j] = other.board[i][j];
			white[i][j] = other.white[i][j];
		}
	}

	turns = other.turns;

	return;
}

vector<Turn> Chess::GetValidTurns(Position pos, unsigned numTurns)
{
	numTurns = max(numTurns, GetCurrentTurn());
	vector<Turn> possible;
	possible.resize(0);
	Piece piece = board[pos.col][pos.row];

	// Get color and set variables
	// default white
	unsigned color = white[pos.col][pos.row];
	unsigned forward = 1;
	unsigned right = 1;
	unsigned pawn_rank = 1;
	unsigned last_rank = 7;
	if (color == 0) // case black
	{
		forward = -1;
		right = -1;
		pawn_rank = 6;
		last_rank = 0;
	}

	switch (piece)
	{
	case Piece::Empty:
		break;
	case Piece::Pawn:
		break;
	case Piece::Knight:
		break;
	case Piece::Bishop:
		break;
	case Piece::Rook:
		break;
	case Piece::Queen:
		break;
	case Piece::King:
		break;
	}

	return possible;
}

// Check if turn is valid in current state
bool Chess::QueryTurn(Turn const &turn)
{
	return true;
}

// Apply turn no matter current state
bool Chess::ApplyTurn(Turn const &turn)
{
	return true;
}

// Undo N turns
bool Chess::PopTurn(unsigned num)
{
	for (int i = 0; i < num; i++)
	{
		PopTurn();
	}
	if (num != 0)
		return PopTurn();
	return true;
}

bool Chess::PopTurn()
{
	Turn turn = turns.back();
	turns.pop_back();
	return true;
}
