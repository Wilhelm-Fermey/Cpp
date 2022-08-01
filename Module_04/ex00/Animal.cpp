#include "Animal.hpp"

/************************  ANIMAL  ****************************/
Animal::Animal(void)
{
	std::cout << "Default Constructor has been call" <<std::endl;
	return ;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Copy constructor has been call" <<std::endl;	
	*this = src;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << "Assignement operator  has been call" <<std::endl;
	this->type = rhs.type;

	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor has been call" <<std::endl;
	return ;
}

std::string    Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "No sound" << std::endl;
}

/************************  DOG  ****************************/

Dog::Dog(void)
{
	std::cout << "Default Dog Constructor has been call" <<std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Copy Dog constructor has been call" <<std::endl;	
	*this = src;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Assignement Dog operator  has been call" <<std::endl;
	this->type = rhs.type;

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog has been call" <<std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouuf Wouff !!" << std::endl;
}

/************************  CAT  ****************************/

Cat::Cat(void)
{
	std::cout << "Default Cat Constructor has been call" <<std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat& src)
{
	std::cout << "Copy Cat constructor has been call" <<std::endl;	
	*this = src;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Assignement Cat operator  has been call" <<std::endl;
	this->type = rhs.type;

	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat has been call" <<std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaouuu !!" << std::endl;
}

