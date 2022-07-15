/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:16:37 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/15 14:58:06 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
	this->index_2 = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}
void	Phonebook::ft_add(void)
{
	if (this->index == 8)
		this->index = 0;
	if (this->Contacts[this->index].ft_enter_info())
		std::cout << "Please fill every information" << std::endl;
	
	this->index = this->index + 1;
	if (this->index_2 != 8)
		this->index_2 = this->index_2 + 1;
}

std::string Phonebook::ft_cut(std::string str)
{

	if (str.length() < 10)
		return (str);
	else
	{
		std::string txt = str.substr(0, 9);
		txt.insert(9, ".");
		return (txt);
	}
}

void	Phonebook::ft_search(void)
{
	int i = 0;
	std::string str;
	int res;
	std::cout << "     Index|First name| Last name| Nick name" << std::endl;
	std::cout << std::endl;
	while (i < this->index_2)
	{
		std::cout << std::right << std::setw(10) << i + 1<< "|";
		std::cout << std::right << std::setw(10) << this->ft_cut(this->Contacts[i].f_name) << "|";
		std::cout << std::right << std::setw(10) << this->ft_cut(this->Contacts[i].l_name) << "|";
		std::cout << std::right << std::setw(10) << this->ft_cut(this->Contacts[i].n_name) << std::endl;
		i++;
	}
	std::cout << "Choose the index of contact you want :" << std::endl;
	getline(std::cin, str);
	res = stoi(str);
	if (res < 1 || res > this->index_2)
		std::cout << "Please enter a right number." << std::endl;
	else
	{
		res = res - 1;
		std::cout << this->Contacts[res].f_name << std::endl << this->Contacts[res].l_name << std::endl
			<< this->Contacts[res].n_name << std::endl << this->Contacts[res].phone << std::endl
			<< this->Contacts[res].secret << std::endl;
	}
}
