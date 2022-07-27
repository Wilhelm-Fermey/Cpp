/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilhelmfermey <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:18:32 by wilhelmfermey     #+#    #+#             */
/*   Updated: 2022/07/18 13:31:43 by wilhelmfermey    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie;

	zombie = new Zombie(name);
	return (zombie);
}
