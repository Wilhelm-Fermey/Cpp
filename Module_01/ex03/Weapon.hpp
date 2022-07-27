#ifndef WEAPON_CPP
# define WEAPON_CPP

#include <iostream>

class	Weapon
{
	public:

	Weapon(std::string str);
	~Weapon(void);
	std::string const   getType(void);
	void	setType(std::string str);

	private:	
	std::string _type;

};

#endif
