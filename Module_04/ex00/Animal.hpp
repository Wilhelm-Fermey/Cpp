#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:

	Animal(void);
	Animal(const Animal& src);
	Animal&	operator=(const Animal& rhs);
	~Animal(void);

	std::string		getType(void) const;
	virtual void 	makeSound(void) const;

	protected:
	std::string type;
};

class Dog : public Animal
{
	public:

	Dog(void);
	Dog(const Dog& src);
	Dog&	operator=(const Dog& rhs);
	~Dog(void);

	virtual void	makeSound(void) const;
};

class Cat : public Animal
{
	public:

	Cat(void);
	Cat(const Cat& src);
	Cat&	operator=(const Cat& rhs);
	~Cat(void);

	virtual void	makeSound(void) const;

};

#endif
