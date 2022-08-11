#include "Base.hpp"


Base*	generate(void)
{
	int 	ran;
	Base	*B1;

	srand (time(NULL));
	ran = rand() % 3;
	if (ran == 0)
		B1 = new A();
	else if (ran == 1)
		B1 = new B();
	else
		B1 = new C();
	return (B1);
}

void	identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A *>(p);
	if (a == NULL)
	{}
	else
		std::cout << "A\n";

	b = dynamic_cast<B *>(p);
	if (b == NULL)
	{}
	else
		std::cout << "B\n";

	c = dynamic_cast<C *>(p);
	if (c == NULL)
	{}
	else
		std::cout << "C\n";
}

void identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		std::cout << "A\n";
		(void)	a;
	}
	catch (std::exception &e)
	{}

	try
	{
		B	&b = dynamic_cast<B&>(p);
		std::cout << "B\n";
		(void) b;
	}
	catch (std::exception &e)
	{}

	try
	{
		C	&c = dynamic_cast<C&>(p);
		std::cout << "C\n";
		(void) c;
	}
	catch (std::exception &e)
	{}
}


int	main(void)
{
	Base	*B1;

	B1 = generate();
	Base&	R1 = *B1;
	identify(B1);
	identify(R1);

	return (0);
}
