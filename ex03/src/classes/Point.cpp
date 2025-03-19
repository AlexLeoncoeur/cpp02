#include "../../include/Point.hpp"

Point::Point() :_x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y) :_x(x), _y(y)
{
	return ;
}

Point::Point(Point &old)
{
	*this = old;
}

Point::~Point()
{
	return ;
}

Point	&Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		const_cast<Fixed&>(this->_x) = rhs.getX();
		const_cast<Fixed&>(this->_y) = rhs.getY();
	}
	return (*this);
}

Fixed	Point::getX() const
{
	return (this->_x);
}

Fixed	Point::getY() const
{
	return (this->_y);
}