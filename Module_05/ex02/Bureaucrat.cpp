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
	if (src.getBool() == 1)
		std::cout << "Already signed " << std::endl;
	else if (this->_grade > src.getGrade_si())
		std::cout << this->_name << " couldn’t sign " << src.getName() << " because too low" << std::endl;
	else
	{
		std::cout << this->_name << " signed " << src.getName() << std::endl;
		src.beSigned(*this);
	}
}

void	Bureaucrat::executeForm(const Form& F1)
{
	F1.execute(*this);	
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
