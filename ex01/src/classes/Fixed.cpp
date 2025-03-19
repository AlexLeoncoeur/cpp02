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

Fixed::Fixed(const int integer)
{
	this->setRawBits(integer * (1 << _fBits));
}

Fixed::Fixed(const float floating)
{
	this->setRawBits(static_cast<int>(std::roundf(floating * (1 << _fBits))));
}

Fixed::~Fixed()
{
	std::cout	<< "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &b)
{
	std::cout 	<< "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->setRawBits(b._fpNumber);
	return (*this);
}

std::ostream& operator<<(std::ostream &outStream, const Fixed &fixed)
{
	return (outStream << (fixed.toFloat()));
}

int	Fixed::getRawBits() const
{
	std::cout 	<< "getRawBits member function called" << std::endl;
	return (this->_fpNumber);
}

void Fixed::setRawBits(int const raw)
{
	std::cout 	<< "setRawBits member function called" << std::endl;
	this->_fpNumber = raw;
}

float	Fixed::toFloat(void) const
{
	return ((static_cast<float>(this->_fpNumber) / (1 << _fBits)));
}

int	Fixed::toInt(void) const
{
	return (this->_fpNumber / (1 << _fBits));
}