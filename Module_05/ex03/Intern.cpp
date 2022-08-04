#include "Intern.hpp"


// Constructor
Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern&	Intern::operator=(const Intern &rhs)
{

	return (*this);	
}

Intern::~Intern(void)
{
	return ;
}

// Function

Form	*Intern::PresidentialPardon(std::string str)
{
	return (new PresidentialPardonForm(str));
}

Form	*Intern::ShrubberyCreation(std::string str)
{
	return (new ShrubberyCreationForm(str));
}

Form	*Intern::RobotomyRequest(std::string str)
{
	return (new RobotomyRequestForm(str));
}

Form   *Intern::makeForm(std::string s1, std::string s2)
{
	Form*	(Intern::*f[3]) (std::string str);

	f[0] = &Intern::PresidentialPardon;
	f[1] = &Intern::ShrubberyCreation;
	f[2] = &Intern::RobotomyRequest;

	std::string	str[3];

	str[0] = "presidential pardon";
	str[1] = "shrubbery creation";
	str[2] = "robotomy request";

	int	count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (s1 == str[i])
		{
			std::cout << "Intern create " << s1 << std::endl;
			count++;
			return ((this->*f[i])(s2));
		}
	}
	if (!count)
		std::cout << "Intern couldn't create " << s1 << std::endl;

	return (NULL);
}
