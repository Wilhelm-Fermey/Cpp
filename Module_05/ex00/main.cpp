#include "Bureaucrat.hpp"

void	test1(void)
{
	try
	{
	Bureaucrat b1("Jean", 50);
	Bureaucrat b2("François", 1);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	Bureaucrat b3("Jacques", 160);

	std::cout << b1 << std::endl;
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test2(void)
{
	Bureaucrat b1("Momo", 2);
	Bureaucrat b2("Toto", 180);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
}

void	test3(void)
{
	try
	{
		test2();
	}
	catch (std::exception &e)
	{
		std::cerr <<  e.what() << std::endl;
	}
}

void test4(void)
{
	try
	{
		Bureaucrat b1("Alex", 2);
		Bureaucrat b2("Alexis", 150);

		std::cout << b1 << std::endl;
		std::cout << b1.getName() << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b2.getName() << std::endl;

		
		std::cout << b1.getGrade() << std::endl;
		b1.incre();
		std::cout << b1.getGrade() << std::endl;

		std::cout << b2.getGrade() << std::endl;
		b2.decre();
		std::cout << b2.getGrade() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	test1();
	test3();
	test4();

	return (0);
}
