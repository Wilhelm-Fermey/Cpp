#include "Animal.hpp"


/*************************  animal  ***************************/
AAnimal::AAnimal(void)
{
	std::cout << "Default Constructor has been call" <<std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& src)
{
	std::cout << "Copy constructor has been call" <<std::endl;
	*this = src;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "Assignement operator  has been call" <<std::endl;
	this->_type = rhs._type;

	return (*this);
}

std::string    AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "No sound" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor has been call" <<std::endl;
	return ;
}

/*************************  Dog  ***************************/

Dog::Dog(void)
{
	std::cout << "Default Dog Constructor has been call" <<std::endl;
	this->brain = new Brain();
	this->AAnimal::_type = "Dog";
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
	this->_type = rhs._type;

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouuf Wouff !!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog has been call" <<std::endl;
	return ;
}

/*************************  Cat  ***************************/

Cat::Cat(void)
{
	std::cout << "Default Cat Constructor has been call" <<std::endl;
	this->brain = new Brain();
	this->AAnimal::_type = "Cat";
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
	this->_type = rhs._type;

	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaouuu !!" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat has been call" <<std::endl;
	return ;
}

