#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
class PresidentialPardonForm;
# include "Form.hpp"
# include <stdexcept>
# include <fstream>

class PresidentialPardonForm : public Form
{
	public:
		// Constructor
		PresidentialPardonForm(std::string str);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
		~PresidentialPardonForm(void);

		// Exception
		class	Notsigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		// Function
			virtual void     execute(const Bureaucrat& executor) const;

	private:
		std::string _name;

};


#endif
