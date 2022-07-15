/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:45:30 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/15 11:19:32 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include  <iomanip>

class Contact
{

	public:

	Contact(void);
	~Contact(void);
	int	ft_enter_info(void);

	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string phone;
	std::string secret;
};


#endif
