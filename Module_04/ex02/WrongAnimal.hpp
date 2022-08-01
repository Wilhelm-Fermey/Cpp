#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& src);
	WrongAnimal&	operator=(const WrongAnimal& ohs);
	~WrongAnimal(void);

	std::string		getType(void) const;
	void 	makeSound(void) const;

	protected:
	std::string type;
};

class WrongCat : public WrongAnimal
{
	public:

	WrongCat(void);
	WrongCat(const WrongCat& orc);
	WrongCat&	operator=(const WrongCat& rhs);
	~WrongCat(void);

	void	makeSound(void) const;

};


#endif
