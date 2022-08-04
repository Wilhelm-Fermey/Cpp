#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Bureaucrat.hpp"
# include "Form.hpp"

class	Intern
{
	public:
		// Constructor
		Intern(void);
		Intern(const Intern &src);
		Intern&	operator=(const Intern &rhs);
		~Intern(void);	


		//	Function
		Form	*PresidentialPardon(std::string str);
		Form	*ShrubberyCreation(std::string str);
		Form	*RobotomyRequest(std::string str);
		Form	*makeForm(std::string s1, std::string s2);
};

#endif
