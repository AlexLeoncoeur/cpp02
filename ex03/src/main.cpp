#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point v1 = {-7.0f, -4.0f};
    Point v2 = {-5.43f, -5.46f};
    Point v3 = {-4.1f, -2.67f};
    Point pt = {-4.58f, -3.15f};

    if (bsp(v1, v2, v3, pt)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    return 0;
}