#include <iostream>
#include <fstream>
#include <string>


int	main(int argc, char **argv)
{
	std::string str;
	std::string tmp;
	int		i;
	int		j;

	if (argc != 4)
		return (std::cout << "Error number arguments" << std::endl, 1);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream myfile (argv[1]);
	if (myfile.is_open())
	{
		while (getline(myfile, tmp))
		{
			str = str + tmp;
			str = str + '\n';
		}
		i = 0;
		while (str[i])
		{
			j = 0;
			while (s1[j] == str[i + j])
			{
				if (s1[j + 1] == '\0')
				{
					str.erase(i, s1.length());
					str.insert(i, s2);
				}
				j++;
			}
			i++;
		}
	}
	else
		std::cout << "Unable to read the file";
	std::string file_name = argv[1];
	file_name.append(".replace");
	std::ofstream myfile2 (file_name);
	if (myfile2.is_open())
	{
		myfile2 << str;
	}
	else
		std::cout << "unable to write in the file" << std::endl;
	return (0);
}
