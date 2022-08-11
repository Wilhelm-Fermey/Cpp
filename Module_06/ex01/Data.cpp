#include "Data.hpp"

Data::Data(int i) : _Data(i)
{
	return ;
}

Data::Data(const Data& src)
{
	*this = src;
}

Data&	Data::operator=(const Data& rhs)
{
	this->_Data = rhs._Data;

	return (*this);
}

Data::~Data(void)
{
	return ;
}

// Function

int	Data::getValue(void) const
{
	return (this->_Data);
}

// Operator

std::ostream&   operator<<(std::ostream& o, const Data& rhs)
{
	o << rhs.getValue();
	return (o);
}
