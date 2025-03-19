#include "../include/Point.hpp"

Fixed	squareRoot(Fixed nb);

Fixed	squareRoot(Fixed nb)
{
	Fixed	div(1);

	while (div < nb)
	{
		if (div * div == nb)
			return (div);
		div++;
	}
	return (0);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	v1((a.getX().toFloat() - point.getX().toFloat()), (a.getY().toFloat() - point.getY().toFloat()));
	Point	v2((b.getX().toFloat() - point.getX().toFloat()), (b.getY().toFloat() - point.getY().toFloat()));
	Point	v3((c.getX().toFloat() - point.getX().toFloat()), (c.getY().toFloat() - point.getY().toFloat()));

	Fixed	magnitudV1(squareRoot((v1.getX() * v1.getX()) + (v1.getY() * v1.getY())));
	Fixed	magnitudV2(squareRoot((v2.getX() * v2.getX()) + (v2.getY() * v2.getY())));
	Fixed	magnitudV3(squareRoot((v3.getX() * v3.getX()) + (v3.getY() * v3.getY())));

	Fixed	dotProductV1V2((v1.getX() * v2.getX()) + (v1.getY() * v2.getY()));
	Fixed	dotProductV2V3((v2.getX() * v3.getX()) + (v2.getY() * v3.getY()));
	Fixed	dotProductV3V1((v3.getX() * v1.getX()) + (v3.getY() * v1.getY()));
}