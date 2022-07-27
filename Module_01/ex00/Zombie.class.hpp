/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:32:14 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/18 13:32:56 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie
{
	public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);

	private:

	std::string _name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
