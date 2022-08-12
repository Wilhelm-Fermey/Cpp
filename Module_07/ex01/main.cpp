#include "iter.hpp"

int	main(void)
{
	int			tab_a[5] = {1, 2, 3, 4, 5};
	const char 	*tab_b = "Hello world";
	int			len_a = 5;
	int			len_b = strlen(tab_b);

	iter(tab_b, len_b, display);

	std::cout << std::endl;

	iter(tab_a, len_a, display);

	return (0);
}
