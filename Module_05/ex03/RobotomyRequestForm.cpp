#include "RobotomyRequestForm.hpp"

/************************* CONSTRUCTOR *************************/

RobotomyRequestForm::RobotomyRequestForm(std::string str) : Form("", 0, 72, 45)
{
	this->_name = str;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
{
	*this = src;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	this->_name = rhs._name;

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

/************************* Execption *************************/
const char* RobotomyRequestForm::Unsigned::what() const throw()
{
	return ("Grade to low to execute.");
}

/************************* FUNCTION *************************/
void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > Form::getGrade_ex())
		throw Form::GradeTooLowException();
	if (Form::getBool() == 0)
		throw RobotomyRequestForm::Unsigned();
	else
	{
		std::cout << "Bzzzz bzz Bzzzbzz .. . .. ." << std::endl;
		std::cout << this->_name <<" 50% robotised succed\n";
	}
}

std::string	RobotomyRequestForm::getName(void)
{
	return (this->_name);
}
