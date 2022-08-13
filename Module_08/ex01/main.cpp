#include "Span.hpp"


int	main(void)
{

	Span	tab(6);

	try
	{
		tab.addNumber(9);
		tab.addNumber(810);
		tab.addNumber(51);
		tab.addNumber(10);
		tab.addNumber(-10);
		tab.addNumber(25);
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}

	tab.getNumber();

	std::cout << std::endl;
	std::cout << tab.shortestSpan() << std::endl;
	std::cout << tab.longestSpan() << std::endl;


	Span	tab2(500);

	try
	{
		tab2.AddManyNumbers(50);
		tab2.getNumber();
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span	tab3(500);

	try
	{
		tab3.AddManyNumbers(501);
		tab3.getNumber();
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}


	return (0);
}

