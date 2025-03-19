#pragma once

# include <iostream>
# include <cmath>

class Fixed
{

private:

	int					_fpNumber;
	static const int	_fBits = 8;

public:

	Fixed();
	Fixed(const Fixed &old);
	Fixed(const int integer);
	Fixed(const float floating);
	~Fixed();

	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);

	Fixed 	&operator=(const Fixed &b);
	Fixed	operator+(const Fixed &b) const;
	Fixed	operator-(const Fixed &b) const;
	Fixed	operator*(const Fixed &b) const;
	Fixed	operator/(const Fixed &b) const;
	Fixed	operator++(int);
	Fixed	&operator++();
	Fixed	operator--(int);
	Fixed	&operator--();

	bool operator>(const Fixed &b) const;
	bool operator<(const Fixed &b) const;
	bool operator==(const Fixed &b) const;
	bool operator>=(const Fixed &b) const;
	bool operator<=(const Fixed &b) const;
	bool operator!=(const Fixed &b) const;
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream& operator<<(std::ostream &outStream, const Fixed &fixed);