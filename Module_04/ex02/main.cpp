#include "Animal.hpp"

int main()
{
	const Dog *tab_d[5];
	const Cat *tab_c[5];

	for (int i = 0; i < 5; i++)
	{
		tab_d[i] = new Dog();
		tab_c[i] = new Cat();
	}

	for (int i = 0; i < 5; i++)
	{
		tab_d[i]->makeSound();
		tab_c[i]->makeSound();
	}

	for (int i = 0; i < 5; i++)
	{
		delete tab_d[i];
		delete tab_c[i];
	}

    return 0;
}
