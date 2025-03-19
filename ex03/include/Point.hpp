#pragma once

# include "Fixed.cpp"

class Point
{

private:

	const Fixed _x;
	const Fixed _y;

public:

	Point();
	Point(const float x, const float y);
	Point(Point &old);
	~Point();

	Point	&operator=(const Point &rhs);

	Fixed	getX(void) const;
	Fixed	getY(void) const;

};