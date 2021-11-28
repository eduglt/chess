#ifndef POSITION_H
#define POSITION_H

struct Position
{
public:
	unsigned row;
	unsigned col;
public:
	Position();
	Position(unsigned up, unsigned right);
	Position(Position const &other);
public:
	Position Translate(unsigned up, unsigned right);
	bool operator == (Position const &lhs, Position const &rhs);
};

friend Position operator * (Position const lhs, Position const &rhs);
friend Position operator * (Position const lhs, unsigned const &rhs)
friend Position operator + (Position const &lhs, Position const &rhs);
friend Position operator - (Position const &lhs, Position const &rhs);
friend Position operator - (Position const &arg);

#endif // POSITION_H
