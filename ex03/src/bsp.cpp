#include "../include/Point.hpp"

Fixed	orientation(const Point &a, const Point &b, const Point &p);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

Fixed	orientation(const Point &a, const Point &b, const Point &p)
{
	Fixed	orientation((b.getY() - a.getY()) * (p.getX() - b.getX()) - (b.getX() - a.getX()) * (p.getY() - b.getY()));

	if (orientation == 0)
		return (0);
	if (orientation > 0)
		return (1);
	return (2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	o1(orientation(a, b, point));
	Fixed	o2(orientation(b, c, point));
	Fixed	o3(orientation(c, a, point));

	if (o1 == o2 && o2 == o1)
		return (true);
	return (false);
}