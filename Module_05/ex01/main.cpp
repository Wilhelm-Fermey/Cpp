#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test1(void)
{
	try
	{
		Form			f1("Hello_World", 0, 50, 1);
		Bureaucrat		b1("Jean", 1);
		Bureaucrat		b2("Jean-Jacques", 70);
	
		std::cout << f1.getBool() << std::endl;
		std::cout << b1;
		f1.beSigned(b1);
		std::cout << f1.getBool() << std::endl;

		std::cout << f1.getBool() << std::endl;
		std::cout << b2 << std::endl;
		f1.beSigned(b2);
		std::cout << f1.getBool() << std::endl;


	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test2(void)
{
	Form            f1("Hello_World", 0, 50, 1);

	std::cout << f1.getName() << std::endl;
	std::cout << f1.getBool() << std::endl;
	std::cout << f1.getGrade_si() << std::endl;
	std::cout << f1.getGrade_ex() << std::endl;
}

void	test3(void)
{
	Bureaucrat	b1("Pierre", 3);
	Form		f1("Hello", 1, 150, 150);
	
	b1.signForm(f1);

}

int	main(void)
{
	test1();
	test2();
	test3();


	return (0);
}
