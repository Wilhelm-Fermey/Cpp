/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:19:00 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/18 13:31:29 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

void randomChump( std::string name)
{
	Zombie *zombie;

	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}
