#include "ShrubberyCreationForm.hpp"

/************************* CONSTRUCTOR *************************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : Form("ShrubberyCreationForm", 0, 145, 137)
{
	this->_name = str;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
{
	*this = src;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	this->_name = rhs._name;

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

/************************* Exception *************************/
const char* ShrubberyCreationForm::Notsigned::what() const throw()
{
	return ("The form is not signed.");
}

/************************* Function *************************/
void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::string str;

	if (executor.getGrade() > 137)
		throw Form::GradeTooLowException();
	if (this->getBool() == 0)
		throw ShrubberyCreationForm::Notsigned();	
	else
	{
		str = this->_name + "_shrubbery";
		std::ofstream myfile(str);
		myfile << "*\n"
            "/ /n"
           "/o  /+n"
        "+ /     /|   \n"
        "|/  +  o /      \n"
        "/   |     / + \n"
       "/        o  /| \n"
    "+ /  o   +      /     \n"
    "|/       |   o   / +    \n"
    "/      o          /|   \n"
 "+ /   o      o   o    /  \n"
 "|/__              +  __/   \n"
  "+ /   +  o       |  / +\n"
  "|/    |        o     /|\n"
"+ /            +        /\n"
"|/    o    o   |         / +\n"
"/__    +           o  + __/|\n"
"+ /    |        o     | / +\n"
"|/ o        o       o    /|\n"
"/___________   ___________/\n"
            "| |\n"
            "|_|\n";

		std::cout << executor.getName() << " executed " << Form::getName() << std::endl;
	}

}
