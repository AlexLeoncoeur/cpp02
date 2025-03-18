#include "../include/Fixed.hpp"

int	main(void)
{
	Fixed	number;
	Fixed	copy;

	number.setRawBits(20);
	copy = number;
	std::cout 	<< number.getRawBits() << std::endl
				<< copy.getRawBits() << std::endl;
	copy.setRawBits(10);
	std::cout	<< copy.getRawBits() << std::endl;
	return (0);
}