#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default Constructor has been call" <<std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name):_name(name),_Hit(10),_Energy(10),_Attack(0)
{
    std::cout << "Default Constructor has been call" <<std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copy Constructor has been call" <<std::endl;
	*this = src;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "Copy Assignement operator called" <<std::endl;
	this->_name = rhs._name;
	this->_Hit = rhs._Hit;
	this->_Attack = rhs._Attack;
	this->_Energy = rhs._Energy;

	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor has been call" <<std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->_Hit <= 0 || this->_Energy <= 0)
	{
		std::cout << "You can't attack, you are dead or empty energy" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_Hit << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_Hit <= 0)
	{
		std::cout << "You can't take damage you are dead" << std::endl;
        return ;
	}
	this->_Hit -= amount;
	{
		std::cout << "ClapTrap "<< this->_name << " takes " << amount <<" of damages" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_Hit <= 0 || this->_Energy <= 0)
    {
        std::cout << "You can't attack, you are dead or empty energy" << std::endl;
        return ;
    }
    this->_Hit += amount;
    this->_Energy--;
    std::cout << "ClapTrap "<< this->_name << " regen " << amount <<" of life" << std::endl;
}

