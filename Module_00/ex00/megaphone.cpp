/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:52:01 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/14 11:03:42 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
				j++;
			}
			std::cout << " ";
			i++;
		}
	std::cout << std::endl;
}
