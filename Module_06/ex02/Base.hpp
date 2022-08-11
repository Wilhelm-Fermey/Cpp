#ifndef	BASE_HPP
# define BASE_HPP

# include <iostream>
# include <time.h>
# include <stdexcept>

class	Base
{
	public:
		
		virtual ~Base(void);
};

class	A : public Base
{

};

class	B : public Base
{

};

class	C	:	public Base
{

};


#endif
