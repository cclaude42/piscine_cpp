/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:04:49 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 18:21:55 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// Member functions

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

// Overloaders

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & src) : AWeapon(src)
{
}

PlasmaRifle::~PlasmaRifle(void)
{
}
