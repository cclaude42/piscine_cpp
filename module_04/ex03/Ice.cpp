/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:50:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/24 18:01:25 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Member functions

AMateria*	Ice::clone(void) const
{
	AMateria* ptr = new Ice;
	return (ptr);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// Overloaders

Ice & Ice::operator=(const Ice & src)
{
	_xp = src.getXP();
	return (*this)
}

// Constructors and destructors

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice & src) : AMateria(src)
{
}

Ice::~Ice(void)
{
}
