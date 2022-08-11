#ifndef TEMP_HPP
# define TEMP_HPP

#include <iostream>

template < typename T >
void	swap(T& a, T& b)
{
	T		c = 0;

	c = a;
	a = b;
	b = c;
}

template < typename T >
const T		min(const T a, const T b)
{
	if (a < b)
		return (a);
	else if (b < a)
		return (b);
	else
		return (b);
}

template < typename T >
const T		max(const T a, const T b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	else
		return (b);
}


#endif
