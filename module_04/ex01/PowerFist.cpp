/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:16:01 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 18:22:22 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

// Member functions

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

// Overloaders

PowerFist & PowerFist::operator=(const PowerFist & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist & src) : AWeapon(src)
{
}

PowerFist::~PowerFist(void)
{
}
