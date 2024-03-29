#include "Bureaucrat.hpp"

/*************************** Constructor ****************************/

Bureaucrat::Bureaucrat(void)
{
    return ;
}

Bureaucrat::Bureaucrat(std::string str, int i) : _name(str)
{
	if (i < 0)
		throw Bureaucrat::GradeTooLowException();
	else if (i > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = i;
		
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

/*************************** Function  ****************************/
std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void    Bureaucrat::incre(void)
{
	this->_grade = _grade -1;
	if (_grade < 1)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

void	Bureaucrat::decre(void)
{
	this->_grade = _grade + 1;
	if (_grade > 150)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
}

void	Bureaucrat::signForm(Form& src)
{
	if (src.getBool() == 0)
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	else	
		std::cout << this->_name << " couldn't signed " << src.getName() << " because the form is signed already." << std::endl;
}

/*************************** Exception ****************************/

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high.");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low.");
}

/************************* Operator << **************************/

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
return (o);
}
