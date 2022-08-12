#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstring>

template <class T>
void display(T const &val)
{
    std::cout << val << std::endl;
}

template <class T>
void iter(T *tab, int size, void (*f)(T const &val))
{
    for(int i = 0; i < size; i++)
    {
        (*f)(tab[i]);
    }
}


#endif
