#ifndef TURN_H
#define TURN_H

#include "Position.h"
#include "Piece.h"

struct Turn
{
public:
	bool spawn; // = false; // if true, do not remove the piece at Position orig
	Position orig; // = Position(0,0);
	Position dest; // = Position(0,0);
	Piece promote; // = Piece::Empty; // only if pawn on final rank
};

#endif // TURN_H
