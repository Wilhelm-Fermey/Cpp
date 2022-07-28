#include "Fixed.hpp"

Fixed::Fixed(void) : _i(0)
{
	return;
}

Fixed::Fixed(const Fixed& src)
{
	*this = src;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	this->_i = rhs._i;
	return *this;
}

Fixed::~Fixed(void)
{
	return;
}

int	Fixed::get_variable(void)
{
	return this->_i;
}
