#ifndef	SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
class ShrubberyCreationForm;
#include "Form.hpp"
#include <stdexcept>
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:

		// Constructor
		ShrubberyCreationForm(std::string str);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
		virtual ~ShrubberyCreationForm(void);

		// Exception
		class Notsigned : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		// Function
		virtual void     execute(const Bureaucrat& executor) const;
		
	private:
		std::string _name;

};


#endif
