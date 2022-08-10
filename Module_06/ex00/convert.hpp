#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>

class	Convert
{
	public:
		// Constructeur
		Convert(void);
		Convert(const Convert& src);
		Convert&	operator=(const Convert& rhs);
		~Convert(void);

		// Function
		void	ft_convert(double d);


	private:
};

#endif
