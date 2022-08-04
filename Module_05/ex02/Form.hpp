#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
class Form;
# include "Bureaucrat.hpp"

class	Form
{
	public:

		// Constructor
		Form(void);
		Form(const std::string str, bool boo, const int grade_si, const int grade_ex);
		Form(const Form& src);
		Form&	operator=(const Form& rhs);
		~Form(void);

		// Exception
		class	GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

		// Function

		const std::string	getName(void) const;
		bool	getBool(void) const;
		const int	getGrade_si(void) const;
		const int	getGrade_ex(void) const;

		void	beSigned(Bureaucrat &src);
		virtual void	execute(const Bureaucrat& executor) const = 0;

	private:
		const std::string _name;
		bool		_signed;
		const int	_grade_si;
		const int	_grade_ex;

};

std::ostream&	operator<<(std::ostream& o, const Form& rhs);


#endif
