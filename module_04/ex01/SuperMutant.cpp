/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:36:20 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 18:41:32 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

// Member functions

void	SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	if (dmg < 0)
		dmg = 0;
	_hp -= dmg;
	if (_hp < 0)
		_hp = 0;
}

// Overloaders

SuperMutant & SuperMutant::operator=(const SuperMutant & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & src) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}
