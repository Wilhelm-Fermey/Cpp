#include "Span.hpp"

// Constructeur
Span::Span(void) : _N(0)
{
	return ;
}

Span::Span(unsigned int n) : _N(n)
{
	return ;
}

Span::Span(const Span& src)
{
	*this = src;
}

Span&   Span::operator=(const Span& rhs)
{
	this->_N = rhs._N;

	return (*this);
}

Span::~Span(void)
{
	return ;
}

// Function

void	Span::addNumber(int nb)
{
	if (this->_tab.size() < this->_N)
		this->_tab.push_back(nb);
	else
		throw std::exception();
}

void	Span::getNumber(void)
{
	for (int i = 0; i < this->_tab.size(); i++)
		std::cout << this->_tab[i] << std::endl;
}

unsigned int	Span::shortestSpan(void)
{
	std::vector<int>					tmp = this->_tab;
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	it2;

	it = min_element(tmp.begin(), tmp.end());
	int i = static_cast<int>(*it);
	tmp.erase(it);
	it2 = min_element(tmp.begin(), tmp.end());
	int i2 = static_cast<int>(*it2);

	return (i2 - i);
}

unsigned int    Span::longestSpan(void)
{
	std::vector<int>					tmp = this->_tab;
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	it2;

	it = min_element(tmp.begin(), tmp.end());
	int i = static_cast<int>(*it);
	it2 = max_element(tmp.begin(), tmp.end());
	int i2 = static_cast<int>(*it2);

	return (i2 - i);
}

void	Span::AddManyNumbers(unsigned int nb)
{
	if (nb > this->_N)
		throw std::exception();
	for (int i = 0; i < nb; i++)
		addNumber(i);
}
