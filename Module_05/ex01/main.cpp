#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main(void)
{
	try
	{
		Form	f1("", 0, 50, 50);
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}



	return (0);
}
