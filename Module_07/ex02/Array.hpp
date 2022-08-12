#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class	Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& src);
		Array& operator=(const Array& rhs);
		~Array(void);

		// function
		int	size(void);

		T&  operator[](const int n);

		// Exception
		class	OutofLimits : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		T	*_tab;
		int	_len;

};


// Function


template <typename T>
Array<T>::Array(void) : _tab(new T[0]), _len(0)
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]), _len(n)
{
	return ;
}

template <typename T>
Array<T>::Array(const Array& src)
{
	*this = src;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	if (this == &rhs)
		return (*this);
	this->_tab = new T[rhs._len];
	for (int i = 0; i < rhs._len; i++)
		this->_tab[i] = rhs._tab[i];
	this->_len = rhs._len;

	return (*this);
}

template <typename T>
T&	Array<T>::operator[](const int n)
{
	if (n < 0 || n >= this->_len)
		throw OutofLimits();
	else
		return (_tab[n]);
}

template <typename T>
Array<T>::~Array(void)
{
	return ;
}

template <typename T>
int	Array<T>::size(void)
{
	return (this->_len);
}

// Exception

template <typename T>
const char* Array<T>::OutofLimits::what() const throw()
{
	return ("Array out of limits\n");	
}


#endif
