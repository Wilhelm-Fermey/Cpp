#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "Default Constructor FragTrap has been call" <<std::endl;
	this->_name = name;
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack = 30;

	return ;
}

FragTrap::FragTrap(const FragTrap& src)
{
	std::cout << "Copy FragTrap has been call" <<std::endl;
	*this = src;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "Assignement FragTrap has been call" <<std::endl;
	this->_name = rhs._name;
	this->_Hit = rhs._Hit;
	this->_Energy = rhs._Energy;
	this->_Attack = rhs._Attack;

	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap has been call" <<std::endl;
	return;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "HighFives ?" << std::endl;
}
