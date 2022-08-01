# include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor has been call" <<std::endl;
	return;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Brain Copy constructor has been call" <<std::endl;
	*this=src;
}

Brain&  Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain operator has been call" <<std::endl;
	int	i = -1;

	while (++i < 100)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain has been call" <<std::endl;
	return;
}
