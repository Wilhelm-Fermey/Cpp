#include "Array.hpp"

int	main(void)
{
	int size = 10;
	Array<int> tab(size);


	for (int i = 0; i < size; i++)
		tab[i] = i;

	Array<int> copy(tab);

	for (int i = 0; i < size; i++)
	{
		std::cout << "Tab[" << i << "] == " << tab[i] << std::endl;
		std::cout << "Copy[" << i << "] == " << copy[i] << std::endl;
		std::cout << std::endl;
	}

	try
	{
		tab[-1] = 0;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}

	try
	{
		tab[size + 1] = 0;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}

	std::cout << std::endl;
	std::cout << "Size of tab = " << tab.size() << std::endl;

	return (0);
}
