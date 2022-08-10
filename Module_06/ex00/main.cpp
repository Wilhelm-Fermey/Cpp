#include "convert.hpp"

int	main(int argc, char **argv)
{
	Convert c1;
	double	d = 0;

	if (argc == 2)
	{
		if (strlen(argv[1]) == 1 && !isdigit(*argv[1]))
			d = static_cast<double>(*argv[1]);
		else
			d = std::strtod(argv[1], NULL);
		c1.ft_convert(d);	
	}
	else
		std::cout << "Wrong number of arguments." << std::endl;



	return (0);
}
