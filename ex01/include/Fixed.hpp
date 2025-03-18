#pragma once

# include <iostream>

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
	friend std::ostream& operator<<(std::ostream &outStream, const Fixed &fixed);

	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};
