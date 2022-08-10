#include "convert.hpp"

Convert::Convert(void)
{
	return ;
}

Convert::Convert(const Convert& src)
{
	*this = src;
}

Convert&	Convert::operator=(const Convert& rhs)
{
	return (*this);
}

Convert::~Convert(void)
{
	return ;
}

// Function

void	ft_char(double d)
{
	if (d >= 0 && d <= 31)
		std::cout << "char: Non displayable \n";
	else if (d >= 32 && d <= 126)
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: impossible \n"; 
}

void	ft_int(double d)
{
	if (d > std::numeric_limits<int>::min() || d < std::numeric_limits<int>::max() || !std::isnan(d))
		std::cout << "int: " << d << std::endl;
	else
		std::cout << "int: impossible \n"; 
}

void	ft_float(double d)
{
	if (!std::isinf(d) && !std::isnan(d))
		std::cout << "float: " << static_cast<float>(d) << ".0f\n";
	else
		std::cout << "float: " << static_cast<float>(d) << "f\n";
}

void	ft_double(double d)
{
	if (!std::isinf(d) && !std::isnan(d))
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void    Convert::ft_convert(double d)
{
	ft_char(d);
	ft_int(d);
	ft_float(d);
	ft_double(d);
}
