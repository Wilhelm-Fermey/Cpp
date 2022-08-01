#include "WrongAnimal.hpp"

/************************  WrongAnimal  ****************************/
WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default Constructor has been call" <<std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "Copy constructor has been call" <<std::endl;
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "Assignement operator  has been call" <<std::endl;
	this->type = rhs.type;

	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor has been call" <<std::endl;
	return ;
}

std::string    WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "No sound" << std::endl;
}

/************************  WrongCat  ****************************/

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat Constructor has been call" <<std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << "Copy WrongCat constructor has been call" <<std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "Assignement WrongCat operator  has been call" <<std::endl;
	this->type = rhs.type;

	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat has been call" <<std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou Miaouuu !!" << std::endl;
}

