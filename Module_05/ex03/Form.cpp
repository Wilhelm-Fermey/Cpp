#include "Form.hpp"

/**************************  Constructor  *****************************/

Form::Form(void) : _name(""), _signed(0), _grade_si(150), _grade_ex(150)
{
	return ;
}

Form::Form(const std::string str, bool boo, const int grade_si, const int grade_ex) : _name(str), _signed(boo), _grade_si(grade_si), _grade_ex(grade_ex)
{
	if (grade_si < 1 || grade_ex < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (grade_si > 150 || grade_ex > 150)
	{
		throw Form::GradeTooLowException();
	}
	return ;
}

Form::Form(const Form& src) : _name(src._name), _signed(src._signed), _grade_si(src._grade_si), _grade_ex(src._grade_ex)
{
	*this = src;
}

Form&	Form::operator=(const Form& rhs)
{
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::ostream&  operator<<(std::ostream& o, const Form& rhs)
{
	o << rhs.getName() << std::endl << rhs.getBool() << std::endl;
	o << rhs.getGrade_si() << std::endl << rhs.getGrade_ex() << std::endl;
	return (o);
}

/**************************  Exception  *****************************/
const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

/**************************  Function  *****************************/

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getBool(void) const
{
	return (_signed);
}

const int	Form::getGrade_si(void) const
{
	return (this->_grade_si);
}

const int	Form::getGrade_ex(void) const
{
	return (this->_grade_ex);
}

void	Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_grade_si)
		this->_signed = 1;
	else
		throw Form::GradeTooLowException();
}

void    Form::execute(const Bureaucrat& executor) const
{
	return ;
}

