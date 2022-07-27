#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:

	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	zombieName(std::string name);
	
	
	private:

	std::string str;

};

Zombie* zombieHorde( int N, std::string name );

#endif
