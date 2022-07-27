#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->_type = str;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
	return;
}

