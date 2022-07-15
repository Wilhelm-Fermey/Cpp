/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:13:28 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/15 14:59:34 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Phonebook.class.hpp"
#include "include/Phonebook.class.hpp"

int	main(void)
{
	Phonebook Phonebook;

	std::string str;
	int count = 1;

	std::cout << "Enter your command :" << std::endl;
	getline(std::cin, str);
	while (count)
	{
		if (str == "ADD")
			Phonebook.ft_add();
		else if (str == "SEARCH")
			Phonebook.ft_search();
		else if (str == "EXIT")
			break;
		std::cout << "Enter your command :" << std::endl;
		getline(std::cin, str);	
	}
	return (0);
}
