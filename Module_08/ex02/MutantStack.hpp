#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <vector>
# include <stack>
# include <algorithm>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack& src);
		MutantStack&	operator=(const MutantStack& rhs);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin(void);
		iterator end(void);

};



template <typename T>
MutantStack<T>::MutantStack(void)
{
	return;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src)
{
	*this = src;
}

template <typename T>
MutantStack<T>&    MutantStack<T>::operator=(const MutantStack& rhs)
{
	this->c = rhs.c;

	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

// Function
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif
