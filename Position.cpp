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

bool Position::operator == (Position const &lhs, Position const &rhs)
{
	return (lhs.row == rhs.row && lhs.col == rhs.col);
}

friend Position operator * (unsigned const lhs, Position const &rhs)
{
	return Position(lhs * rhs.row, lhs * rhs.col);
}

friend Position operator * (Position const lhs, unsigned const &rhs)
{
	// multiplication commutative
	return rhs * lhs;
}

friend Position operator + (Position const &lhs, Position const &rhs)
{
	return Position(lhs.row + rhs.row, lhs.col + rhs.col);
}

friend Position operator - (Position const &lhs, Position const &rhs)
{
	return lhs + (-rhs);
}

friend Position operator - (Position const &arg)
{
	return Position(-arg.row, -arg.col);
}
