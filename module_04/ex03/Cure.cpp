/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 18:01:41 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/24 18:02:57 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Member functions

AMateria*	Cure::clone(void) const
{
	AMateria* ptr = new Cure;
	return (ptr);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

// Overloaders

Cure & Cure::operator=(const Cure & src)
{
	_xp = src.getXP();
	return (*this)
}

// Constructors and destructors

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure & src) : AMateria(src)
{
}

Cure::~Cure(void)
{
}
