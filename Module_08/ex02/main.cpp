#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int>			stck;
	MutantStack<int>::iterator	it;
	MutantStack<int>::iterator	ite;

	stck.push(5);
	stck.push(10);
	stck.push(15);
	stck.push(20);
	stck.push(25);
	stck.push(30);

	std::cout << "Size of stack = " << stck.size() << std::endl;
	std::cout << "Top of stack = " << stck.top() << std::endl;

	it 	= stck.begin();
	ite = stck.end();
	ite--;

	std::cout << std::endl;
	std::cout << "first iterator of stack = " << *it << std::endl;
	std::cout << "last iterator (-1) of stack = " << *ite << std::endl;

	stck.pop();
	std::cout << "\nRemove the top element of stack" << std::endl;
	std::cout << "Now top of the stack is = " << stck.top() << std::endl;
	std::cout << "New size of the stack = " << stck.size() << std::endl;



	return (0);
}
