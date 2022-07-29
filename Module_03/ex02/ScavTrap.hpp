#ifndef SCAVTRAP_HPP
# define  SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& src);
	ScavTrap&	operator=(const ScavTrap& rhs);
	~ScavTrap(void);

	void guardGate();

	private:

};

#endif
