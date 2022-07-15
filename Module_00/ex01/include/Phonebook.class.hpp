/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:14:50 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/15 14:24:32 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include  <iomanip>

class Phonebook
{
	public:


	int index;
	int index_2;
	Phonebook(void);
	~Phonebook(void);
	Contact Contacts[8];
	void	ft_add(void);
	void	ft_search(void);
	std::string	ft_cut(std::string str);

	private:

};

#endif
