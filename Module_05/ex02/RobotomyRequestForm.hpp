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
		~RobotomyRequestForm(void);

		// Exception
		class Unsigned : public std::exception
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
