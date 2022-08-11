#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class	Data
{
	public:
		Data(int i);
		Data(const Data& src);
		Data&	operator=(const Data& rhs);
		~Data(void);

		// Function
		int	getValue(void) const;

	private:
		int	_Data;

};

std::ostream&	operator<<(std::ostream& o, const Data& rhs);


#endif
