#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

class	Form
{
	public:


		Form(const std::string str, bool boo, const int grade_si, const int grade_ex);
		Form(const Form& src);
		Form&	operator=(const Form& rhs);
		~Form(void);

		bool	getBool(void);

	private:
		const std::string _name;
		bool		_signed;
		const int	_grade_si;
		const int	_grade_ex;

};

#endif
