#include "Fixed.hpp"

Fixed::Fixed(void) : _i(0)
{
	return;
}

Fixed::Fixed(const int nbr)
{
	this->_i = nbr << this->_fractionalBits;
}

Fixed::Fixed(const float nbr)
{
	this->_i = roundf(nbr * (1 << _fractionalBits));
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

int	Fixed::getRawbits(void) const
{
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





Fixed	Fixed::operator+(const Fixed& rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat()); 
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat()); 
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat()); 
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat()); 
}



bool Fixed::operator>(Fixed const & rhs) const
{
    return(this->getRawbits() > rhs.getRawbits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
    return(this->getRawbits() < rhs.getRawbits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
    return(this->getRawbits() >= rhs.getRawbits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
    return(this->getRawbits() <= rhs.getRawbits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
    return(this->getRawbits() == rhs.getRawbits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
    return(this->getRawbits() != rhs.getRawbits());
}

Fixed&	Fixed::operator ++(void)
{
	this->_i++;
	return (*this);
}

Fixed&	Fixed::operator --(void)
{
	this->_i--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed nb(*this);

	this->_i++;
	return (nb);
}

Fixed Fixed::operator--(int)
{
	Fixed nb(*this);

	this->_i--;
	return (nb);
}


const Fixed&    Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}


Fixed&    Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

const Fixed&    Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	else
		return (f1);
}

Fixed&    Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	else
		return (f1);
}
