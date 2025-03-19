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
	Fixed &operator=(const Fixed &b);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &outStream, const Fixed &fixed);