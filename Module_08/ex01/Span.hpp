#ifndef	SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <stdexcept>
# include <time.h>

class	Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& src);
		Span&	operator=(const Span& rhs);
		~Span(void);

		void 		   		addNumber(int nb);
		void				getNumber(void);
		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);
		void    			AddManyNumbers(unsigned int nb);

	private:
		std::vector<int>	_tab;;
		unsigned int		_N;
};


#endif
