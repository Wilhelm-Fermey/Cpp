#include "Animal.hpp"

int main()
{
	const Animal *tab[10];


	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete tab[i];


    return 0;
}
