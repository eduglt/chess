#include "Position.h"

Position::Position() : row(0), col(0)
{
	return;
}

Position::Position(unsigned row, unsigned col) : row(row), col(col)
{
	return;
}

Position::Position(Position const &other) : row(other.row), col(other.col)
{
	return;
}

Position Position::Translate(unsigned up, unsigned right)
{
	return Position(row + up, col + right);
}
