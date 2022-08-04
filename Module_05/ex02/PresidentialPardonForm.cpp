#include "PresidentialPardonForm.hpp"


/************************* Constructor *************************/

PresidentialPardonForm::PresidentialPardonForm(std::string str) : Form("PresidentialPardonForm", 0, 25, 5)
{
	this->_name = str;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
{
	*this = src;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	this->_name = rhs._name;

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

/************************* Exception *************************/
const char* PresidentialPardonForm::Notsigned::what() const throw()
{
	return ("The form is not signed.");
}


/************************* Function *************************/
void     PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > Form::getGrade_ex())
		throw Form::GradeTooLowException();
	if (Form::getBool() == 0)
		throw PresidentialPardonForm::Notsigned();
	std::cout << this->_name << " has been forigven by Zaphod Beeblebrox. \n";	
}
