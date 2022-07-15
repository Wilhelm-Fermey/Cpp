/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:52:11 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/15 11:39:24 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.class.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

int	Contact::ft_enter_info(void)
{
	std::cout << "First name ?" << std::endl;
	getline(std::cin, this->f_name);
	std::cout << "Last name ?" << std::endl;
	getline(std::cin, this->l_name);
	std::cout << "Nickname ?" << std::endl;
	getline(std::cin, this->n_name);
	std::cout << "Phone number ?" << std::endl;
	getline(std::cin, this->phone);
	std::cout << "Darkest secret ?" << std::endl;
	getline(std::cin, this->secret);
	if (this->f_name == "" || this->l_name == "" || this->n_name == ""
		|| this->phone == "" || this->secret == "")
		return (1);
	return (0);
}
