#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		// Constructor
		Fixed(void);
		Fixed(const Fixed& src);
		Fixed&	operator=(const Fixed& rhs);
		~Fixed(void);

		// Function
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:

		int	_i;
		int const static _fractionalBits = 8;

};

#endif
