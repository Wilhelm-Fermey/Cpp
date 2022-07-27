#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	return;
}

void Zombie::announce(void)
{
  std::cout << this->str <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::zombieName(std::string name)
{
	this->str = name;
}
