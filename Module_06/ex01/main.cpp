#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t	i;

	i = reinterpret_cast<uintptr_t>(ptr);
	return (i);
}

Data* deserialize(uintptr_t raw)
{
	Data	*D1;

	D1 = reinterpret_cast<Data *>(raw);
	return (D1);
}


int	main(void)
{
	Data 		D1(15);
	Data		*P1;
	uintptr_t	i;

	P1 = &D1;
	std::cout << *P1 << std::endl;
	i = serialize(P1);
	P1 = deserialize(i);
	std::cout << *P1 << std::endl;


	return (0);
}
