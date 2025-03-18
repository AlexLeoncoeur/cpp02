#include "../../include/Fixed.hpp"

Fixed::Fixed()
{
	std::cout 	<< "Default constructor called" << std::endl;
	this->_fpNumber = 0;
}

Fixed::Fixed(const Fixed &old)
{
	std::cout 	<< "Copy constructor called" << std::endl;
	*this = old;
}

Fixed::~Fixed()
{
	std::cout 	<< "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &b)
{
	std::cout 	<< "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->setRawBits(b._fpNumber);
	return (*this);
}

int	Fixed::getRawBits()
{
	std::cout 	<< "getRawBits member function called" << std::endl;
	return (this->_fpNumber);
}

void Fixed::setRawBits(int const raw)
{
	std::cout 	<< "setRawBits member function called" << std::endl;
	this->_fpNumber = raw;
}