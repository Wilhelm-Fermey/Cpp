#include "easyfind.hpp"



int	main(void)
{
	std::list<int>	lst;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	int	target = 2;

	int res = easyfind(lst, target);

	std::cout << res << std::endl;

	std::vector<int>	tab;

	tab.push_back(1);
	tab.push_back(2);
	tab.push_back(3);

	target = 4;

	res = easyfind(tab, target);

	std::cout << res << std::endl;




	return (0);
}
