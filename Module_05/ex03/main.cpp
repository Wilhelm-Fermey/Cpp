#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"


void	test1(void)
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
}

void	test2(void)
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("blabla bla", "Bender");
	delete rrf;
}

void	test3(void)
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Kyle");
	delete rrf;
}

void	test4(void)
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Joe");
	delete rrf;
}

int	main(void)
{
	test1();
	test2();
	test3();
	test4();

	return (0);
}	
