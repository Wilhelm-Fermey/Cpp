#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	
	Fixed(void);
	Fixed(const Fixed& src);
	Fixed&	operator=(const Fixed& rhs);
	~Fixed(void);

	int	get_variable(void);

	private:

	int	_i;

};



#endif
