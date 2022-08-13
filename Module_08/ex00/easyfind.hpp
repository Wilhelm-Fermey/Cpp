#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <stdexcept>


template <typename T>
int    easyfind(T cont, int x)
{
    if (cont.end() != (find(cont.begin(), cont.end(), x)))
        return 1;
	else
		return -1;
}


#endif
