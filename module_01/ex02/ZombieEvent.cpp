/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 18:30:09 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 19:31:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(string type)
{
	_setType = type;
}

Zombie*	ZombieEvent::newZombie(string name)
{
	Zombie	*newbie;

	newbie = new Zombie;
	newbie->_name = name;
	newbie->_type = _setType;
	return (newbie);
}

void	ZombieEvent::randomChump(void)
{
	Zombie	rando;
	string	names[10] = {"Clark", "Benny", "Simon", "Owen", "Marshall",
						"Rose", "Dominic", "Bjorn", "Paul", "Rudolf"};

	rando._name = names[rand() % 10];
	rando._type = _setType;
	rando.announce();
}

ZombieEvent::ZombieEvent(void)
{
	srand(time(0));
}
