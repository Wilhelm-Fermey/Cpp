#include "Fixed.hpp"

Fixed::Fixed(void) : _i(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor Call" << std::endl;
	this->_i = nbr << this->_fractionalBits;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor Call" << std::endl;
	this->_i = roundf(nbr * (1 << _fractionalBits));
}


Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_i = rhs._i;
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Fixed::getRawbits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_i;
}

void Fixed::setRawBits(int const raw)
{
	this->_i = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_i / (float)(1 << this->_fractionalBits));
}

std::ostream&   operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return o;
}

int Fixed::toInt(void) const
{
	return ((int)this->_i >> this->_fractionalBits);
}
