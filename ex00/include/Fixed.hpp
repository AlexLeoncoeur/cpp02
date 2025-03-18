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
	~Fixed();
	Fixed &operator=(const Fixed &b);

	int		getRawBits(void);
	void	setRawBits(int const raw);
};
