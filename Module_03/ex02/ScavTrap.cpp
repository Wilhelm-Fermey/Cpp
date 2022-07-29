#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Default Constructor  ScavTrap has been call" <<std::endl;
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	return;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "Copy ScavTrap has been call" <<std::endl;
	*this = src;
}


ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "Assignement ScavTrap has been call" <<std::endl;
	this->_name = rhs._name;
	this->_Hit = rhs._Hit;
	this->_Energy = rhs._Energy;
	this->_Attack = rhs._Attack;

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap has been call" <<std::endl;	
	return;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap has entered Gate keeper mode." << std::endl;
}
