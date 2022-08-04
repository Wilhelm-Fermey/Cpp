#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	public:
	//	Constructor
		Bureaucrat(void);
		Bureaucrat(std::string str, int i);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat(void);

	// Function:
		std::string  getName(void) const;
		int	getGrade(void) const;

		void	incre(void);
		void	decre(void);

		void	signForm(Form& src);
		void	executeForm(const Form& F1);

	// Exception
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string _name;
		int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
