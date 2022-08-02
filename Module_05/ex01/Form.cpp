#include "Form.hpp"

/**************************  Constructor  *****************************/

Form::Form(const std::string str, bool boo, const int grade_si, const int grade_ex) : _name(str), _signed(boo), _grade_si(grade_si), _grade_ex(grade_ex)
{
	if (grade_si < 1 || grade_ex < 1)
	{
		throw (std::exception);
	}
	else if (grade_si > 150 || grade_ex > 150)
	{
		throw (std::exception);
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


/**************************  Function  *****************************/

bool	Form::getBool(void)
{
	return (_signed);
}
