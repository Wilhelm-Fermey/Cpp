#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test1(void)
{
	try
	{
		ShrubberyCreationForm	F1("hello");
		Bureaucrat			 	B1("George", 120);
	
		B1.signForm(F1);
		B1.executeForm(F1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}

void	test2(void)
{
	try
	{
		RobotomyRequestForm		F1("Hello");
		Bureaucrat				B1("George", 17);

		B1.signForm(F1);
		B1.executeForm(F1);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test3(void)
{
	try
	{
		PresidentialPardonForm	F1("Hello");
		Bureaucrat				B1("George", 5);

		B1.signForm(F1);
		B1.executeForm(F1);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	test1();
	test2();
	test3();

	return (0);
}
