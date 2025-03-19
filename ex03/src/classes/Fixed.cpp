#include "../../include/Fixed.hpp"

/* Constructors */
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

/* Destructor */
Fixed::~Fixed()
{
	std::cout 	<< "Destructor called" << std::endl;
}

/* Arithmetic Operator overload */
Fixed& Fixed::operator=(const Fixed &b)
{
	std::cout 	<< "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->setRawBits(b._fpNumber);
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &b) const
{
	return Fixed(this->toFloat() + b.toFloat());
}

Fixed	Fixed::operator-(const Fixed &b) const
{
	return Fixed(this->toFloat() - b.toFloat());
}

Fixed	Fixed::operator*(const Fixed &b) const
{
	return Fixed(this->toFloat() * b.toFloat());
}

Fixed	Fixed::operator/(const Fixed &b) const
{
	return Fixed(this->toFloat() / b.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	aux(*this);
	this->_fpNumber++;
	return(aux);
}

Fixed	&Fixed::operator++()
{
	this->_fpNumber++;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	aux(*this);
	this->_fpNumber--;
	return(aux);
}

Fixed	&Fixed::operator--()
{
	this->_fpNumber--;
	return(*this);
}

/* Comparison Operator overload */
std::ostream& operator<<(std::ostream &outStream, const Fixed &fixed)
{
	return (outStream << (fixed.toFloat()));
}

bool	Fixed::operator>(const Fixed &b) const
{
	if (this->getRawBits() > b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &b) const
{
	if (this->getRawBits() < b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &b) const
{
	if (this->getRawBits() == b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &b) const
{
	if (*this == b || *this > b)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &b) const
{
	if (*this == b || *this < b)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &b) const
{
	if (*this == b)
		return (false);
	return (true);
}

/* Member functions */
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}