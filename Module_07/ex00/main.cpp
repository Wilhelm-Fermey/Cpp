#include "temp.hpp"


int	main(void)
{
	int	a = 10;
	int	b = 42;

	swap<int>(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	int c = min<int>(a, b);
	std::cout << c << std::endl;

	int d = max<int>(a, b);
	std::cout << d << std::endl;

	return (0);
}
