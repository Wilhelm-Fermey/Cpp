#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
	
	Fixed(void);
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed& src);
	Fixed&	operator=(const Fixed& rhs);
	~Fixed(void);

	int	getRawbits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	private:

	int	_i;
	int const static _fractionalBits = 8;

};

std::ostream&	operator<<(std::ostream& o, const Fixed& rhs);

#endif
