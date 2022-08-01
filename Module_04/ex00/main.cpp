#include "Animal.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << std::endl;

	const WrongAnimal* met = new WrongAnimal();
	const WrongAnimal* ii = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	
	ii->makeSound();
	met->makeSound();



	return (0);
}
