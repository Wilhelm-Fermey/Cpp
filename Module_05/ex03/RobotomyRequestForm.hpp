#ifndef	ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
class RobotomyRequestForm;
#include "Form.hpp"
#include <stdexcept>
#include <fstream>
#include <time.h>


class RobotomyRequestForm : public Form
{
	public:
		//Constructor
		RobotomyRequestForm(std::string str);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
		virtual	~RobotomyRequestForm(void);

		// Exception
		class Unsigned : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		// Function
		virtual void     execute(const Bureaucrat& executor) const;
		std::string	getName();

	private:
		std::string _name;

};



#endif
