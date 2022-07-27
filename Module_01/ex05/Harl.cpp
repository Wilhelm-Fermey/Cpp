#include "Harl.hpp"

Harl::Harl(void)
{
	return;
}	

Harl::~Harl(void)
{
	return;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	int count = 0;

	void (Harl::*f[4])(void);
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;

	std::string str[4];
	str[0] = "debug";
	str[1] = "info";
	str[2] = "warning";
	str[3] = "error";

	while (i < 4)
	{
		if (level == str[i])
		{
			(this->*f[i])();
			count++;
		}
		i++;
	}
	if (!count)
		std::cout << "Couldn't find the level." << std::endl;
}
