#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : ClapTrap
{
	public:

	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap(void);
	
	void highFivesGuys(void);

};

#endif
